#include "Manager.h"


//Default constructor: set private members empty string, 0, and true for salaried.
Manager::Manager()
	: Employee("", 0), salaried(true)
{

}

//Constructor that takes a string, a double and a boolean, assign them to respective members.
Manager::Manager(string Name, double Rate, bool isPay)
	: Employee(Name, Rate), salaried(isPay)
{

}

//isSalaried(): return value of salaried.
bool Manager::isSalaried()
{
	return salaried;
}

/*
 *getNetPay(): take an int, which is number of hours worked.
 *If manager is salaried, return his pay rate divided by 52 (52 weeks in a year)
 *If manager is paid hourly, return payRate * hoursWorked
 */
double Manager::getNetPay(int hoursWorked)
{
	if (salaried)
	{
		return (getPayRate() / 52);
	}
	else
	{
		return (getPayRate() * hoursWorked);
	}
}

/*
 *printInfo() : take an int, which is number of hours worked print out wage info in the following format:
 *Manager's name: Jerry Hudson
 *Salaried : true
 *Net Pay(weekly) : $60000.00
*/
void Manager::printInfo(int hoursWorked) 
{
	cout << "Manager's name: " << getName() << endl;
	cout << "Salaried: " << salaried << endl;
	cout << "Net Pay(weekly) :" << getNetPay(hoursWorked) << fixed << setprecision(2) << endl;
}







