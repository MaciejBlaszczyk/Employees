#include "Trader.h"
#include <vector>

main()
{
    vector<Employee *> warehouse;

    Trader MrTrader("Jan", "Kowalski", "123456789", "90121212345", 10000, 0.1);
    Monthly MrMonth("John", "Smith", "987654321", "85111198765", 5000);
    Contract MrContract("Adam", "Nowak", "192837465", "76101019273", 160, 10);

    warehouse.push_back(&MrTrader);
    warehouse.push_back(&MrMonth);
    warehouse.push_back(&MrContract);

    for(unsigned int i = 0; i < warehouse.size(); i++)
    {
        warehouse[i] -> countSalary();
        warehouse[i] -> print();
        cout<<endl;
    }

return 0;
}














