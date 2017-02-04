#ifndef EMPLOYEE
#define EMPLOYEE

#include <iostream>

using namespace std;

class Employee
{
public:
	Employee(string firstName = "", string lastName = "", string NIP = "", string PESEL = "");

    virtual void print();
    virtual void countSalary() = 0;

    virtual ~Employee() {}

private:
    string firstName;
    string lastName;
    string NIP;
    string PESEL;
};

#endif // EMPLOYEE
