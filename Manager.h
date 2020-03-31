#include "Employee.h"


#ifndef INHERITANCE_LAB_MANAGER_H
#define INHERITANCE_LAB_MANAGER_H

using namespace std;

class Manager : public Employee
{
public:
    Manager();
    Manager(string Name, double Rate, bool isPay);
    bool isSalaried();
    double getNetPay(int hoursWorked) override;
    void printInfo(int hoursWorked) override;

private:
    bool salaried;
};


#endif //INHERITANCE_LAB_MANAGER_H


