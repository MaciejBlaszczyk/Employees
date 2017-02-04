#include "Employee.h"

Employee:: Employee(string firstName, string lastName, string NIP, string PESEL):
	firstName(firstName), lastName(lastName), NIP(NIP), PESEL(PESEL) {}

void Employee:: print()
{
    cout<<"First Name:  "<<firstName<<endl
        <<"Last Name:  "<<lastName<<endl
        <<"NIP:  "<<NIP<<endl
        <<"PESEL:  "<<PESEL<<endl;
}





