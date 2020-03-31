// include header

#ifndef INHERITANCE_LAB_MANAGER_H
#define INHERITANCE_LAB_MANAGER_H

using namespace std;

class Manager : //inherits from Employee
{
public:

    //default constructor

    //constructor with parameters 

    bool isSalaried();
    double getNetPay(int hoursWorked);
    void printInfo(int hoursWorked);

private:
    bool salaried;
};


#endif //INHERITANCE_LAB_MANAGER_H

