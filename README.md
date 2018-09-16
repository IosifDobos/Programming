# Programming

#### Pogramming Assignment 1 Description
	This program is created to operate on an ATM machine for a bank.

    	The program allow customers to manage their PIN, also to change the PIN,
    	to verify how many time the user enter the pin correctly and incorrectly, a variable is created to keep track of
	user entered PIN. The PIN is set to 1234 by default.

    	When running program a menu is displayed to the screen with 4 options allowing user to navigate trought different 
	options and will loop until user press option 4 then the program ends.
    	The menu is displayed to the screen every time, when user finish an execution.

#### Programming Assignment 2 Description
	
	You are required to develop a program that will perform security authorisation based on access codes. 
	The access codes are 4 single-digit integer numbers between 0-9. The program should allow a user to 
	enter a code, encrypt the number and compare it to an authorised access code. The program should also 
	allow the user to decrypt an encrypted code. 
 
	When your program begins executing, the default authorised access code is 4523 (encrypted form of 1234 – see 
	encryption algorithm below). This code must be stored in a 1-D array called access_code and should not be changed. 
	You should use a different 1-D array to read the code entered by the user. 
 
	Your program should be menu-driven and must display a simple menu when run. 
	The menu should include the following options: 
 
		1. Enter code 
		2. Encrypt code and verify if correct (i.e., matches authorised access code) 
		3. Decrypt code 
		4. Display the number of times the code was entered 
			(i) Successfully 
			(ii) Incorrectly 
		5. Exit Program 

	Each menu option must be implemented in a separate function, i.e. modularized. 
	All functions must pass parameters using Pass by Reference. 
	Do NOT pass parameters using pass by value. 
	All reading and writing to/from arrays must use pointer notation - not subscript notation (i.e. using [ ]) 