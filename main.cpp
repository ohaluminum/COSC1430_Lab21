#include <iostream>
#include "Employee.h"
#include "Manager.h"

int main() {
    cout << "Testing Employee class\n";
    Employee employee1("Mighty Joe", 20.5);
    Employee employee2;
    employee2.setName("John Smith");
    employee2.setPayRate(12.75);

    employee2.printInfo(40);
    employee1.printInfo(40);

    cout << endl;

    cout << "Testing Manager class\n";
    Manager manager1("Nathan", 35000, true);
    manager1.printInfo(40);

    Manager manager2("Jerry Hudson", 36, false);
    manager2.printInfo(10);

    cout << endl;
    cout << "Type casting: a pointer of type base class can also point to derived class\n";
    Employee* employee3;
    employee3 = new Manager;
    employee3->setName("Ron Swanson");
    employee3->setPayRate(50000);
    employee3->printInfo(40);
}
