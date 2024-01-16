#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
class BankCustomer
        {
        public:
    int Money;
    std::string Name;
    int ID;


        };
int main() {
std::string Line;
    std::vector<BankCustomer> bankcustomers;
std::ifstream  In("C:/Users/Gamer/CLionProjects/untitled1/People.txt");

while(std::getline(In,Line))
{
    BankCustomer CustomerRead;
    std::stringstream ss(Line);

  ss >> CustomerRead.Name;
  ss >> CustomerRead.Money;
  ss >> CustomerRead.ID;


cout << CustomerRead.Name;
cout <<  CustomerRead.Money;
cout << CustomerRead.ID;

bankcustomers.push_back(CustomerRead);

}


In.close();


BankCustomer Customer;

std::string name;
std::cout << "Enter New Customer Name";
std::cin >> name;
Customer.Name = name;

int money;
std::cout << "Enter Money";
std::cin >> money;
Customer.Money = money;

Customer.ID = bankcustomers.size() + 1;
bankcustomers.push_back(Customer);
std::ofstream  OutFile("C:/Users/Gamer/CLionProjects/untitled1/People.txt");
if (OutFile.is_open())
{

    for (int i = 0; i < bankcustomers.size(); i++)
    {

        OutFile << bankcustomers[i].Name << " "<<bankcustomers[i].Money << " " << bankcustomers[i].ID   << "\n";

    }
    OutFile.close();
}


}

