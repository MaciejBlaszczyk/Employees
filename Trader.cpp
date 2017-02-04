#include "Trader.h"

Trader::Trader(string firstName, string lastName, string NIP, string PESEL, int sale, float perCent):
    Employee(firstName, lastName, NIP, PESEL), sale(sale), perCent(perCent) {}

void Trader:: print()
{
	Employee:: print();
	cout<<"Salary: "<<salary<<endl;
}

void Trader:: countSalary()
{
	salary = perCent * sale;
}
