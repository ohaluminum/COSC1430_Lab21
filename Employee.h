#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

#ifndef INHERITANCE_LAB_EMPLOYEE_H
#define INHERITANCE_LAB_EMPLOYEE_H

using namespace std;

class Employee {
public:
    Employee();
    Employee(string Name, double Rate);
    void setName(string Name);
    void setPayRate(double Rate);
    string getName();
    double getPayRate();
    virtual double getNetPay(int Hours);
    virtual void printInfo(int Hours);

private:
    string name;
    double payRate;
};


#endif //INHERITANCE_LAB_EMPLOYEE_H

