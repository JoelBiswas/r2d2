---
title: "R2-D2"
author: "Joel Biswas"
description: "3D Printable R2D2 droid controlled with a PS3 controller"
created_at: "2025-05-25"
---

**Total Time Spent:** 47 hours

**NOTE - As I was designing the robot, I was not very consistent with journaling. Thus, many of these entries are being written retroactively after the design has already been completed. Luckily, Onshape has a very good built-in version control system, meaning it is very easy for me to see what I did each day and how long I spent working.**

### DAY ONE - MAY 25, 2025
Today I began designing the R2D2's dome-shaped head on OnShape. The goal is for this part to be able to rotate freely. I started off by creating a Notion workspace to organize a few reference images that I would be using. My original plan was to make a life-sized R2D2, but I quickly realized that building a 3' 7" robot as my first individual hardware project would be too large of a scope. I ended up creating my own dimensions that may not be perfectly accurate to the movies, but still very closely resemble R2. The idea with the head is to separately 3D print the main dome and the blue fills. The fills can then be hot-glued into inserts on the dome. Designing this took me a fairly long time, as I have limited Onshape experience.

<img src="https://github.com/user-attachments/assets/4ce9bd67-c599-4806-b2d8-532c8db6eb37" alt="Day One Dome" height="300"/>
<img src="https://github.com/user-attachments/assets/1c360bbb-9dc7-4a4e-9855-0f8cb7b601e3" alt="Day One Sketch" height="300"/>

**Time Spent:** 7 hours (over two sessions)

### DAY TWO - May 26, 2025
I began the day by finishing adding the blue sections to R2-D2's head. I then began to work on designing the body in Onshape. The body is a hollowed-out cylinder with numerous indents on the front. I once again used reference images from a Notion workspace to try to create an accurate depiction of R2-D2. Creating the designs on the body was much easier than the head, as I was able to use OnShape's wrap tool.

<img src="https://github.com/user-attachments/assets/511622fe-e9fa-4822-a61d-715232d1fcb1" alt="Day Two Dome" height="300"/>
<img src="https://github.com/user-attachments/assets/e808307d-239b-43d3-8a10-1969d37c52e4" alt="Day Two Body" height="300"/>

**Time Spent:** 8 hours (over three sessions)

### DAY THREE - May 27, 2025
Today, I decided to finish adding details and indents to the front of the droid's cylindrical body. I also added a small hole to the top of the body and the bottom of the head for the axle of a stepper motor. At this point, I still do not have a very good idea of how to make the head rotate, but I intend to make a full parts list tomorrow in order to figure out the mechanism. I also used Onshape's move face tool to add clearance to the blue parts of the head and body. This allows the parts to fit together more easily when being 3D printed.

<img src="https://github.com/user-attachments/assets/c40dd2d5-a8f4-4640-9965-7ff58abf874d" alt="Day Three Body" height="300"/>

**Time Spent:** 3 hours (one session)

### DAY FOUR - May 28, 2025
I began by creating a parts list on a Google Sheet in order to better organize this project. The first problem I had to figure out was how I would rotate the head separately from the body. I decided that I would mount a Stepper Motor on the inside of the body so that its axle was pointing upward towards the head. The axle of the motor would then have a shaft hub attached to it.  I would also attach a Lazy Susan Bearing to the top of the body. The head would then be attached to the Lazy Susan Bearing and the shaft hub. Thus, the motor would spin the shaft hub, which would then spin the head and the bearing. I recorded the parts that I would need for this mechanism and began designing them. I was then able to put together the head and the body in the OnShape assembly. I then began to design the legs for the side of the droid. These legs are connected through four bolt holes on each side of the body. Finally, I realized that I needed some way to insert bolts and components inside the head and the body, so I created openings in the backs of these parts. I added a 3D printable cover that can be bolted on to cover the openings

<img src="https://github.com/user-attachments/assets/9af93395-b125-4c06-bc76-51917bf4cc93" alt="Day Four Front" height="300"/>
<img src="https://github.com/user-attachments/assets/4edc26e4-34dd-49ff-aac9-66614c800360" alt="Day Four Foot" height="300"/>
<img src="https://github.com/user-attachments/assets/8c94245a-1a35-47e2-9ba7-47893fad8418" alt="Day Four Back" height="300"/>

**Time Spent:** 8 hours (over two sessions)

### DAY FIVE - May 29, 2025
Today, I designed the droid's feet. The robot has three identical feet on the left, right, and center. I used the loft feature in OnShape to create a shape that resembles R2-D2's foot from the movies. I also found a small motor from Pololu with enough torque to be able to spin a wheel inside the foot. I added three of these motors and wheels to the parts list. I was able to find the STEP files for these parts online, so I was able to import them into my OnShape document. I added a small cutout to the bottom of the foot so that the wheel would be able to get some traction with the ground. I also added a bottom section to the droid's body that can be bolted on. This bottom section connects to the robot's center foot. Finally, after talking to a friend with much more experience with Onshape than I, I realized that the way I created the head originally was extremely inefficient. I decided to redesign the head using a much better and cleaner looking method.

<img src="https://github.com/user-attachments/assets/231699ff-068a-42d9-b539-0e4631d20147" alt="Day Five Foot" height="300"/>
<img src="https://github.com/user-attachments/assets/a3bddcac-ac1f-492c-87c7-e3d998084fb4" alt="Day Five Foot Without Cover" height="300"/>
<img src="https://github.com/user-attachments/assets/de5c6db2-5def-40aa-b9df-dd6056498f32" alt="Day Five Wheel" height="300"/>

**Time Spent:** 10 hours (over two sessions)

### DAY SIX - May 30, 2025
Today, I decided to fix one problem in the CAD from yesterday. I was using the same part for both the left leg and the right leg, when in reality, they are not the same. The right and left legs are mirrored versions of each other. I created a second part for the right leg and added it to my main assembly. After this, I was essentially done with the CAD for this project!

<img src="https://github.com/user-attachments/assets/4f040ae6-024d-4cd6-a13e-8b36995eacea" alt="Day Six Left Leg" height="300"/>
<img src="https://github.com/user-attachments/assets/ccb5435c-d15d-430a-8f4d-360c9e75b519" alt="Day Six Right Leg" height="300"/>

**Time Spent:** 2 hours (over two sessions)

### DAY SEVEN - May 31, 2025
Now that the CAD has been mostly completed, I decided to begin working on the electrical diagram for the robot. I decided that it would be slightly impractical to create a PCB as it would end up being fairly large. It would have to include an ESP32, 3 DC motor drivers, a buck converter, and a stepper motor driver. I decided that I would create a wiring schematic and then simply connect the components using wires rather than a PCB. I designed the schematic in KiCAD and used a custom symbol for the DC motor driver.

<img src="https://github.com/user-attachments/assets/cff22f76-956c-4740-816d-9aad4417de02" alt="Day Seven Wiring" height="300"/>

**Time Spent:** 3 hours


### DAY EIGHT - June 1, 2025
Added CAD electrical board  
Added wire holes

<img src="https://github.com/user-attachments/assets/ebb4baa4-6b89-4a88-8bd8-ea584fdb5c10" alt="Day Eight Back" height="300"/>

**Time Spent:** 2 hours

### DAY NINE - June 2, 2025
Shipping

**Time Spent:** 4 hours
