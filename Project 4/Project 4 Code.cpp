//*********************************************** 
// COSC 501                                Project # 4
// Michael Rios                             11/10/13 
// PROGRAM-NAME: Project 4
//  
//Creates records of bank employees by reading from input file
//tweeking some of the data and writing to an output file
//*********************************************** 

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int Code(int number);
//returns a code based on the employee license number

string PosType (char position);
//decodes and prints the type of position of employee

string  AgeGroup (int Age);
//decodes and prints the age group of an employee 

	
void main()
{
	ifstream infile;
	ofstream outfile;

	infile.open("project_4_input.txt");
	outfile.open ("myoutfile.txt");

	//declare the structure
	struct BankRec
	{
		char intials[4];
		char Class;   
		int age;   
		float salary_per_hour;
		int code;  
	};

	//declare array of BancRec
	BankRec patrons[5];

	//Fill patrons
	for (int i=0; i < 5; i++)  
	{
	
	infile >> patrons[i].intials;

	infile >> patrons[i].Class;
		
	infile >> patrons[i].age;
		
	infile >> patrons[i].salary_per_hour;

	infile >> patrons[i].code;
	
	}

	//output to outfile
	for (int i=0; i < 5; i++) 
	{
		outfile << left << setw(20) << "Intials: " << setw(10) << patrons[i].intials << endl;

		outfile << left << setw(20) << "Title: " << PosType(patrons[i].Class) << endl; 
		//use function to find class 
		
		outfile << left << setw(20) << "Age Group: " << AgeGroup(patrons[i].age) << endl; 
		//use function to put patron in correct age group

		outfile << left << setw(20) << "Pay Per Hour: " << setw(10) << 2080 * patrons[i].salary_per_hour << endl;
		//multiple hourly pay by 2080 to get yearly salary

		outfile << left << setw(20) << "Code: " << setw(10) << Code(patrons[i].code) << endl;
		//use function to find code

		outfile << endl;
	}
	
		
}

int Code(int number)
{
	int d = 0;
	//start d at 0

	while (number > 0)
	{
	d = (number % 10) + d;
	//module by 10 to get last digit 
	number = number/10;
	//divide by 10 to drop last digit 
	}

	return d;
}
//returns a code based on the employee license number

string PosType (char position)//was not sure how to make this a void function and send it to outfile 
{
	switch(position)
	//simple switch statement
	{	case 'A': return "Management";
			break;			
	    case 'B':return "Supervisor"; 
			break;
	    case 'C': return "Clerical";
		     break;
	    default: return "Invalid data";
	}
	
	
}						
	
//decodes and prints the type of position of employee

string  AgeGroup (int Age)//was not sure how to make this a void function and send it to outfile
{
		//simple if else statement
		if (Age < 25)   
			return "group_1";
		else if (Age >= 25 && Age <= 40)			
			return "group_2";
		else if (Age >= 41 && Age <= 65)
			return "group_3";
		else
			return "group_4";
}
//decodes and prints the age group of an employee 

