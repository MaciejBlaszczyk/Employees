#include "Contract.h"

Contract:: Contract(string firstName , string lastName , string NIP, string PESEL, int hours, int hourlyRate):
    Employee(firstName, lastName, NIP, PESEL), hours(hours), hourlyRate(hourlyRate) { }

void Contract:: print()
{
	Employee:: print();
	cout<<"Salary: "<<salary<<endl;
}

void Contract:: countSalary()
{
	hours > 40 ? salary = 1.5 * hours * hourlyRate : salary = hours * hourlyRate;
}
