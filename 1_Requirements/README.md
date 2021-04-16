# Requirements

## Introduction
We all have studied resistors in our electronics class. Resistor Colour Coding uses coloured bands to easily identify a resistors resistive value and percentage tolerance. In our application we are using Color coding to calculate the resultant resistance and tolerance of the resistor.

## Research

### Resistor Characteristics Generator features and benefits
The main aim of this application is to simplify the process of calculating different characteristics of a Resistor. This can work for 4 Band and5 Band color coded resistors.

### Benefits


-  It reduces the time that was wasted for calculating the characteristics of a resistor. 
-  It is simple and quick way of identifying a resistors ohmic value no matter what it's size or condition.
## Cost and Features with Time
| Time |  Feature| Cost 
|:--------:|:-------------:|:-------------:|
| 0 | Calculate resistance and tolerance for both 4 and 5 band resistors | free

## Defining Our System

<p align="center">
  <img width="450" height="532" src="https://github.com/Ayush1146/Mini_Project/blob/071bdcd1d01dc901d48d5a2986d40b5802180257/1_Requirements/Untitled%20Diagram.png">
</p>

### Explanation 
- Automated Resistor characteristics generator have following features :
	- This characteristics generator can work for 2 different types of resistors classified as 4 Band and 5 Band Registers.

### SWOT Analysis 
<p align="center">
  <img width="572" height="432" src="https://github.com/Ayush1146/Mini_Project/blob/583d4705de81ab10c86ec5e47bb92ed1a04fd025/1_Requirements/SWOT%20ANALYSIS.jpg.png">
</p>

## 4W's and 1'H

## What

-  The process of calculating the resistance and tolerance of resistor was very complicated and time consuming.

## When

-  This issue occurs every time we have to calculate the characteristics of a resistor for applying it for some kind of application.
## Where

-  In every single project where we need to implement and calculate the characteristics of our resistor.


## Who

-  All the industries and the users who works with the application of resistors.

## How

-  This problem have been caused by complexed and time consuming method of calculating the characteristics of a resistor.

## Detail Requirements

## High Level Requirements
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to select type of resistor | Technical | IMPLEMENTED | 
| HR02 | User shall be able to input the color of bands  | Technical | IMPLEMENTED |
| HR03 | Output of the characteristics should be displayed   | Technical | IMPLEMENTED|
## Low Level Requirements

|ID  | Description | HLR-ID | Status (Implemented/Future)|
|----|-------------|--------|----------------------------|
|LR01| User has to enter the type of Resistor | HR01 | IMPLEMENTED |
|LR02| Throw an error if the choice is out of bound | HR01 | IMPLEMENTED |
|LR03| User has to enter the colour of bands in an Orderd way | HR02 | IMPLEMENTED |
|LR04| Throw an error if the enterd input is out of bound | HR02 | IMPLEMENTED |
|LR05| Throw an error if any absurd value is detected | HR02 | IMPLEMENTED |
|LR06| Calculating the resistance value by applying logic | HR03 | IMPLEMENTED |
|LR07| Calculating the tolerance value by applying logic | HR03 | IMPLEMENTED |
|LR08| Printing the resultant Resistance and Tolerance of Resistor | HR03 | IMPLEMENTED |
