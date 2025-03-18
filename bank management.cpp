#include <iostream>
#include <fstream>
using namespace std;

class bank
{
    public:
  void menu();
  void bank_management();
  void atm_management();

};

 void bank::menu()
 {
    system("cls");
     cout<<"control plane";
     cout<<"bank management";  
     cout<<"exit";
     cout<<"enter your choice:";
     cin>>choice;

}
main()
{
     bank obj;
}
