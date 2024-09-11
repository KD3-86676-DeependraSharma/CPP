/*#include<iostream>
using namespace std;

struct Date 
{
   int day;
   int month;
   int year;

   void initDate()
   {
       day = 01;
       month =01;
       year = 1900;
       printDateOnConsole();
   }
   void printDateOnConsole()
   {
      cout<<day<<"-"<<month<<"-"<<year<<endl;
   }
   void acceptDateFromConsole()
   {
      cout<<"Enter date DD MM YY values :";
      cin>>day>>month>>year; 
   }
   bool isLeapYear()
   {
      if(year%4==0 && year%100 !=0 || year%400 ==0)
      {
        cout<<"This is leap year"<<endl;
        return true;
      }
      else
      {
        cout<<"This is not leap year"<<endl;
        return false;
      }
   }

};

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Default/init Date" << endl;
    cout << "2. Add new date" << endl;
    cout << "3. DISPLAY date" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    struct Date t1;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            t1.initDate();
            t1.isLeapYear();
            break;
        case 2:
            t1.acceptDateFromConsole();
            t1.isLeapYear();
            break;
        case 3:
            t1.printDateOnConsole(); 
            break;
        default:
            cout << "Wrong Choice..." << endl;
            break;
        }
    }
}*/
#include<iostream>
using namespace std;

class Date 
{
   int day;
   int month;
   int year;
public:
   void initDate()
   {
       day = 01;
       month =01;
       year = 1900;
       printDateOnConsole();
   }
   void printDateOnConsole()
   {
      cout<<day<<"-"<<month<<"-"<<year<<endl;
   }
   void acceptDateFromConsole()
   {
      cout<<"Enter date DD MM YY values :";
      cin>>day>>month>>year; 
   }
   bool isLeapYear()
   {
      if(year%4==0 && year%100 !=0 || year%400 ==0)
      {
        cout<<"This is leap year"<<endl;
        return true;
      }
      else
      {
        cout<<"This is not leap year"<<endl;
        return false;
      }
   }

};

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Default/init Date" << endl;
    cout << "2. Add new date" << endl;
    cout << "3. DISPLAY date" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    Date t1;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            t1.initDate();
            t1.isLeapYear();
            break;
        case 2:
            t1.acceptDateFromConsole();
            t1.isLeapYear();
            break;
        case 3:
            t1.printDateOnConsole(); 
            break;
        default:
            cout << "Wrong Choice..." << endl;
            break;
        }
    }
}