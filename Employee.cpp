#include "Employee.h"


//Default constructor: set private members to empty string and 0.
Employee::Employee()
{
	name = "";
	payRate = 0;
}

//Constructor with variables: takes a string and a double, assign them to respective members.
Employee::Employee(string Name, double Rate)
{
	name = Name;
	payRate = Rate;
}

//Mutator functions
void Employee::setName(string Name)
{
	name = Name;
}

void Employee::setPayRate(double Rate)
{
	payRate = Rate;
}

//Accessor functions
string Employee::getName()
{
	return name;
}

double Employee::getPayRate()
{
	return payRate;
}

/*
 *getNetPay(): take an int, which is number of hours worked, and return net pay.
 *Net pay = Pay Rate * Hours Worked
 */
double Employee::getNetPay(int Hours)
{
	return (getPayRate() * Hours);
}

/*
 *printInfo(): take an int, which is number of hours worked print out wage info in the following format:
 *Employee's name: John Smith
 *Net Pay(weekly) : $510.00
 */
void Employee::printInfo(int Hours) 
{
	cout << "Employee's name: " << getName() << endl;
	cout << "Net Pay(weekly): $" << getNetPay(Hours) << fixed << setprecision(2) << endl;
}








