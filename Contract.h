#ifndef CONTRACT
#define CONTRACT

#include "Employee.h"

class Contract : public Employee
{
public:
    Contract(string firstName , string lastName , string NIP, string PESEL, int hours = 0, int hourlyRate = 0);

    void print();
    void countSalary();

	virtual ~Contract() {}

private:
    int salary;
    int hours;
    int hourlyRate;
};

#endif // CONTRACT

