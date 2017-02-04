#include "Monthly.h"

Monthly:: Monthly(string firstName , string lastName, string NIP, string PESEL, int salary):
    Employee(firstName, lastName, NIP, PESEL), salary(salary) {}

void Monthly:: print()
{
	Employee:: print();
	cout<<"Salary: "<<salary<<endl;
}
