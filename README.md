# Employee-Records-Project-4

This is the assignment the project was created for 

**COSC 501 at Towson University**

The purpose of this assignment is to review how to use  the Switch statement and functions with parameters.    At Bob's Bank, Bob senior would like to keep some information on his employees readily available. Bob junior suggested he keep the data on the computer so that it would be available anytime someone ran a program. As the sole computer programmer you are to write a program which will read in the employee data and print a report. The data entered for each employee and the output corresponding to each data item are described next. 
   
**Intials Class** <br>
This will be a character A, B, C which you convert to print one of the classifications      

A - Management      
B - Supervisor      
C - Clerical Age    

**Age** <br>
This will be the employee's actual age, but you will print out the group that the employee falls in according to the ranges:
* < 25:   group 1      
* 25-40:  group 2      
* 41-65:  group 3      
* \> 65:   group 4 

**Salary** (hour pay rate)        
Your program will print the annual salary based on 2080 hours per year. 

**Code**    
This is to be calculated by adding up the digits of the employee license number. (For     example, 14 is the code number for license      number 5432). 

The report line shown below is generated for the data: 
**SCS, B, 37, 25, 4436**  <br> 
Name &nbsp; &nbsp; | Position  &nbsp; &nbsp; &nbsp; | Age &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;   | Annual &nbsp; &nbsp; &nbsp; | Pay Code <br> 
SCS  &nbsp; &nbsp; &nbsp; &nbsp;| Supervisor &nbsp; &nbsp;| group 2 &nbsp; &nbsp;|  $52000 &nbsp; &nbsp; &nbsp;|      17 
 
Your program should at least consist of the following methods:   
* int Code(int number);      
* returns a code based on the employee license number   
* void  PosType (char position);       decodes and prints the type of position of employee   
* void  AgeGroup (int Age);       decodes and prints the age group of an employee  and other methods if needed.   
* Send the output to a file and submit it along with your program 

To test  your program, use the following data stored in a file      
* TGP C  18 3.90 4737     
* JWW B  25 6.5  9630     
* TMS C  41 7.8  7000 
* MLH A  56 31.0 2468     
* SSB B  34 12.3 3562 
 
