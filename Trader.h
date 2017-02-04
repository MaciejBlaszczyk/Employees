#ifndef TRADER
#define TRADER

#include "Monthly.h"

class Trader : public Employee
{
public:
    Trader(string firstName , string lastName, string NIP, string PESEL, int sale = 0, float perCent = 0);

    void print();
    void countSalary();

    virtual ~Trader() { }

private:
    int salary;
    int sale;
    float perCent;
};

#endif // TRADER
