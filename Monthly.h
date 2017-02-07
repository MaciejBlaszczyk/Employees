#ifndef MONTHLY
#define MONTHLY

#include "Contract.h"

class Monthly : public Employee
{
public:
    Monthly(string firstName , string lastName, string NIP, string PESEL, int salary = 0);

    void print();
    void countSalary() { }

    virtual ~Monthly() { }

private:
    int salary;
};

#endif // MONTHLY
