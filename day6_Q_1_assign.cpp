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
void accept()
{
    cout << "Enter the name - ";
    cin >> name;
    cout << "Enter the address - ";
    cin >> address;
    cout<<"Date of Birth :";
    dob.acceptDate();
}
void display()
{
    cout<<"Person Detail :"<<endl<<"Name :"<<name<<endl <<"Address :"<<address<<endl;
    cout<<"Date of Birth :";
    dob.DisplayDate();

}
};
class Employee :public Person
{
    int empid;
    double salary;
    string dept;
    Date doj;
public:
Employee()
{
    cout<<"Employee()"<<endl;
    empid=0;
    salary=0;
    dept="ee";
}
Employee(int empid,double salary,string dept,string name,string address):Person(name,address)
{
    this->empid=empid;
    this->salary=salary;
    this->dept=dept;

}
    void accept()
    {
        cout << "Enter empid - ";
        cin >> empid;
        Person::accept();
        cout << "Enter emp DOJ - ";
        doj.acceptDate();
        cout << "Enter empsalary - ";
        cin >> salary;
        cout << "Enter empdept - ";
        cin >> dept;
        
    }
    void display()
    {
         cout<<"*****************************************"<<endl;
        cout << "Empid - " << empid << endl;
        Person::display();
        cout<<"Date of joining";
        doj.DisplayDate();
        cout << "Emp Salary - " << salary << endl;
        cout << "Emp Dept " << dept << endl;
    }
};

int main()
{
   Employee e1;
   e1.accept();
   e1.display();
   return 0;
}
