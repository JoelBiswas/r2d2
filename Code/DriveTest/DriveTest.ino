#include <Bluepad32.h>

constexpr uint8_t STATUS_LED = 2;
constexpr uint8_t LEFT_PWM = 12;  
constexpr uint8_t LEFT_DIR = 13;
constexpr uint8_t MID_PWM = 27;
constexpr uint8_t MID_DIR = 14;
constexpr uint8_t RIGHT_PWM = 25;
constexpr uint8_t RIGHT_DIR = 26;

ControllerPtr myControllers[BP32_MAX_GAMEPADS];

void onConnectedController(ControllerPtr ctl) {
  Serial.println("Controller connected");
  myControllers[0] = ctl;
  digitalWrite(STATUS_LED, HIGH);
  ctl->playDualRumble(0, 500, 255, 128);
}

void onDisconnectedController(ControllerPtr)   {
  Serial.println("Controller disconnected");
  myControllers[0] = nullptr;
  digitalWrite(STATUS_LED, LOW);
}

void driveMotor(uint8_t dirPin, uint8_t pwmChannel, int16_t input) {
  const int DEADZONE = 100;
  if (abs(input) < DEADZONE) {
    ledcWrite(pwmChannel, 0);
    return;
  }

  uint8_t duty = map(abs(input), DEADZONE, 512, 0, 255);

  if (input > 0)        digitalWrite(dirPin, HIGH);
  else                   digitalWrite(dirPin, LOW);

  ledcWrite(pwmChannel, duty);
}

void processGamepad(ControllerPtr ctl) {
  int16_t rightInput = -ctl->axisRY();
  int16_t leftInput = ctl->axisY();
  int16_t midInput = ((-1 * leftInput) + rightInput) / 2;
  driveMotor(RIGHT_DIR, 0, rightInput);
  driveMotor(MID_DIR, 1, midInput);
  driveMotor(LEFT_DIR, 2, leftInput);
}

void setup() {
  Serial.begin(115200);

  pinMode(LEFT_DIR, OUTPUT);
  pinMode(MID_DIR, OUTPUT);
  pinMode(RIGHT_DIR, OUTPUT);
  pinMode(STATUS_LED, OUTPUT);

  const int FREQ = 20000;
  const int BITS = 8;

  ledcSetup(0, FREQ, BITS);
  ledcSetup(1, FREQ, BITS);
  ledcSetup(2, FREQ, BITS);
  ledcAttachPin(RIGHT_PWM, 0);
  ledcAttachPin(MID_PWM, 1);
  ledcAttachPin(LEFT_PWM, 2);
  ledcWrite(0, 0);
  ledcWrite(1, 0);
  ledcWrite(2, 0);

  digitalWrite(STATUS_LED, LOW);

  BP32.setup(&onConnectedController, &onDisconnectedController);
  BP32.forgetBluetoothKeys();
  BP32.enableVirtualDevice(false);
}

void loop() {
  if (BP32.update()) {
    ControllerPtr ctl = myControllers[0];
    if (ctl && ctl->isConnected() && ctl->hasData() && ctl->isGamepad())
      processGamepad(ctl);
  }
  delay(10);                      // yield to BT stack
}
