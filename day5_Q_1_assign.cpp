#include<iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
Date()
{
    day=10;
    month=12;
    year=1996;
}
Date(int x,int y,int z)
{
    day=x;
    month=y;
    year=z;
}
void acceptDate()
{
    cout<<"Enter date DD-MM-YY :"<<endl;
    cin>>day>>month>>year;
}
void DisplayDate()
{
   cout<<" Date :"<<day<<"-"<<month<<"-"<<year<<endl;
}

};
class Person
{
   string name;
   string address;
   Date dob;
public:
Person()
{
    name="AAAA";
    address="zxzxzxzxz";
}
Person(string n,string a)
{
    this->name=n;
    this->address=a;
    

}
void acceptPerson()
{
    cout << "Enter the name - ";
    cin >> name;
    cout << "Enter the address - ";
    cin >> address;
    dob.acceptDate();
}
void displayPerson()
{
    cout<<"Person Detail :"<<"Name :"<<name<<endl <<"Address :"<<address<<endl;
    cout<<"Date of Birth :"<<endl;
    dob.DisplayDate();

}
};

int main()
{
    // Date d1;
    // d1.DisplayDate();
    // d1.acceptDate();
    // d1.DisplayDate();
    Person p1;
    p1.displayPerson();
    p1.acceptPerson();
    p1.displayPerson();
   return 0;
}