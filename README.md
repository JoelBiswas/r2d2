# R2-D2 - A Robotics Journey
The repository contains the files to build a smaller-scale replica of the R2-D2 droid from the Star Wars universe. The robot can move around and rotate its head, just like in the movies. It is controlled with a simple PS controller. This robotics project was created entirely by me for Hack Club's Highway to Undercity event.

## Bill of Materials
View the Bill of Materials [here](https://docs.google.com/spreadsheets/d/11K8ikvZwUrrph38blHlkMEm7u3jJ6bzhOUvdLzmd2ws/edit?usp=sharing)

## The Start of the Journey
As a **HUGE** Star Wars fan and a robotics enthusiast, I have always thought it would be so cool to have my very own droid, just like the characters from the movies. Through my two years of experience in a FIRST Robotics Competition team (shoutout team 9477), I was able to learn all the skills I would need to build my own droid. When I was introduced to the Hack Club's Highway to Undercity event, which provides high school students with grants to build their dream projects, I knew that this would be the perfect opportunity for me to practice my robotics skills by building a droid. I decided to attempt to build R2-D2, the most iconic droid of the Star Wars Universe.

## About R2-D2
In the movies, R2 has a wide range of abilities such as movement, flight, tasers, a holographic projector, etc. For this project, I decided to focus on two key points of functionality for the droid: movement and head rotation. The robot has three "feet" -- one on the left, one on the right, and one in the center -- each containing a Pololu 12V Motor attached to a wheel. A PS3 controller is used to control the motors and move the droid. A stepper motor is used to control the rotation of R2-D2's head. An ESP32 is used in order to control all of the motor drivers.

## Overview of this Repo
**CAD** - Contains the CAD files for the robot, along with images taken in Onshape
**STLs** - Contains files for each part that needs to be 3D printed
**Electrical** - Contains files from KiCAD for the robot's wiring schematics and custom symbols
**Code** - Currently empty but will eventually contain the code for controlling the robot with a PS3 controller.
**Journal.md** - Contains an overview of exactly how I designed and built this robot

## Designing the Robot
Click [here](https://cad.onshape.com/documents/fbad7fda3dbb0b1c2d9d3e12/w/7637877b99adba1fcadbcc49/e/54e6ed0ce40017a6b8cdbd53?renderMode=0&uiState=683df9a55faa163533b4a26a) to view the Onshape document for this project. 
The electronic design was done in KiCAD. 

## General Steps for Assembly
1. Print all parts in the STLs folder of this repo. **IMPORTANT NOTE** Print out the BodyButtonFill.stl file six times and print Foot.stl and FootCover.stl three times.
2. Cut out a 5.8" x 6.3" sheet out of 1/8" polycarbonate.
3. Begin assembling the head by hot-gluing the blue pieces into the indents found in the dome.
4. Bolt the top part of the Lazy Susan Bearing to the bottom of the head using M4 bolts. Use the opening in the back of the head to insert the bolts.
5. Hot glue the blue body pieces into the indents found on the body.
6. Bolt the polycarbonate sheet inside the body using 4 M4 bolts.
7. Attach the stepper motor to the inside of the body, on the top face, using 4 M3 bolts.
8. Add the shaft hub to the shaft of the stepper motor.
9. Bolt the shaft hub onto the bottom of the head using 4 M4 bolts.
10. Bolt the bottom of the Lazy Susan Bearing to the top of the body using 4 M4 bolts.
11. Hot glue the blue leg pieces into the indents on the left and right legs.
12. Bolt the left and right legs into the sides of the body using 8 M4 bolts
13. Assemble each of the three feet by placing the 12V motor in the mounting area and placing the wheel on the motor. The wheel should be aligned with the cutout on the bottom of the foot.
14. Attach the left foot, right foot, and center foot to the droid using 2 M4 bolts for each foot.
15. Zip tie each electronic component (1 ESP32, 3 MD10Cs, 1 A4988, 1 12V to 5V Buck Converter, 1 3S LiPo Battery) to the polycarbonate plate using the zip tie mounts
16. Use the wiring schematic in the Electrical folder of this repo to wire the electrical components
17. Attach all the covers using M4 bolts
