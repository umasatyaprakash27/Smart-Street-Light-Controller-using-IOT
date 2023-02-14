# Smart-Street-Light-Controller-using-IOT
Developed a prototype to turn on and off streetlights automatically based on sun light intensity &amp; Person detection.

Tool Used: Tinker-cad(Open source)(Online Simulator) 

Problem Definition: Our proposed system consists of smart street lights that have external light 
sensing that automatically turns on at desired intensity based on the 
amount of lighting needed. The system also allows the controller person to 
check estimated power consumptions as per current intensity of light as 
well as predict monthly power consumption. 
Along with the light sensor (LDR) we will also be working with Ultrasonic 
sensor (HCSR-04) or PIR sensor which are used to sense and detect the 
objects in their range. 
Proposed Technique and IOT Deployment:
Firstly The tools that we are going to use in this project include Arduino UNO, Cable wires, Led Bulbs, Ultrasonic sensor(HCSR-04), light sensor 
(LDR), Machine Learning (Clustering Technique), Breadboard, Gas Sensor,
Buzzer etc. 
The main idea of our project model is if the sun light intensity is very less(i.e 
at evening time) and also if ultrasonic sensor detects any object in its range 
then the street lights will glow. The street light intensity will be off when the 
sunlight light intensity is High and also if ultrasonic sensor doesn't detect 
any of the objects in its range which helps us to save energy. We are also 
going to use the buzzer which will make sound if some person is staying for 
more than 5 seconds at the same place telling them to move to avoid traffic 
jam conditions at some required places. 
The ultrasonic sensor is going to note the number of people crossing that 
area and also the location of fire blasts with the help of Gas Sensor and 
WIFI module. All the data that is collected through Ultrasonic sensor(i.e The 
number of people that have crossed this area where this street light is 
present) is sent to the server. Then By using that data from this server we 
can know that at what places the people are visiting more time. So with the 
data collected we can apply the clustering algorithm on that data which will 
be helpful for setting Government offices, shopping malls and also to 
improve more services at that places which will be beneficial to both 
Government and Public. 
Implementation: 
 
Architecture-1 Flow Diagram (i.e. Arduino 1) 
![image](https://user-images.githubusercontent.com/113044497/218835676-8d88a8f8-d57f-45c8-9fb7-31da53dea56d.png)

(1) 
![image](https://user-images.githubusercontent.com/113044497/218835745-f429f9d0-d149-47d5-ad1d-51de3bdc1e75.png)

 

Architecture-2 Flowchart (i.e.Arduino-2) 
 ![image](https://user-images.githubusercontent.com/113044497/218835779-4cac8fda-bf66-4975-a58d-8a4c9858154d.png)

(2)
 ![image](https://user-images.githubusercontent.com/113044497/218835832-95698aae-2642-4835-b61f-bbd1831232f6.png)

Conclusion:
The important aim of this project is to save the current. It is mainly used to 
protect the power efficiently. Using sensors to save the power energy 
without any waste. Safe street lighting for peaceful vehicle movements. 
This SSLS suits for Small Street to highway roads. This system can be 
used in public places also like hotels, industries, etc. It will control the 
overflow of current. Manpower not required in this system. This SSLS are 
mainly used in urban areas and highways to reduce the power wastage to 
save the current and also we have implemented the gas sensor in order to 
detect the fire accidents in nearby area’s.
