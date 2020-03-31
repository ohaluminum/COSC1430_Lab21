# COSC1430_Lab21

    In this lab exercise, you will familiarize with public inheritance basics such as derived class constructors, private vs public members, and function overriding.

    You will implement missing functions for 2 classes: Employee, and Manager.

Employee class
        
    private members:

      -string name
      -double payRate
    
    public functions:

      -default constructor: set private members to empty string and 0

      -constructor that takes a string and a double: assign them to respective members

      -setName(): take a string and assign it to name

      -setPayRate(): take a double and assign it to pay

      -getName(): return employee's name

      -getPayRate(): return employee's pay rate

      -getNetPay(): take an int, which is number of hours worked, and return net pay.

          Net pay = Pay Rate  * Hours Worked
      
      -printInfo(): take an int, which is number of hours worked print out wage info in the following format:
      
          Employee's name: John Smith
          Net Pay (weekly): $510.00

Manager class: inherits from Employee (use public inheritance)

    private member:

      -bool salaried (which identifies if the employee is salaried or paid hourly)

    public functions:

      -default constructor: set private members empty string, 0, and true for salaried

      -constructor that takes a string, a double and a boolean: assign them to respective members

      -isSalaried(): return value of salaried

      -getNetPay(): take an int, which is number of hours worked.

          if manager is salaried, return his pay rate divided by 52 (52 weeks in a year)
          if manager is paid hourly, return payRate * hoursWorked
      
      -printInfo(): take an int, which is number of hours worked print out wage info in the following format:

          Manager's name: Jerry Hudson
          Salaried: true
          Net Pay (weekly): $60000.00
          
Important:

    Include appropriate headers.
    Use cout << fixed << setprecision(2) to print out wage.

main() is already implemented and used for testing. You can modify main() to test your program but the template is required to pass some test cases.
