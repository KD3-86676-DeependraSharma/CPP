#include<iostream>
using namespace std;

class Student 
{
   double rollno;
   string name;
   double marks;
public:
   void initStudent()
   {
       rollno = 01;
       name ="AAAA";
       marks = 00;
       printStudentOnConsole();
   }
   void printStudentOnConsole()
   {
      cout<<rollno<<"\n";
      cout<<name<<"\n";
      cout<<marks<<endl;
   }
   void acceptStudentFromConsole()
   {
      cout<<"Enter rollno :";
      cin>>rollno;
      cout<<"Enter Student name :";
      cin>>name;
      cout<<"Enter marks :";
      cin>>marks; 
   }
};

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Default/init Student" << endl;
    cout << "2. Add new Student" << endl;
    cout << "3. DISPLAY Student" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    Student t1;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            t1.initStudent();
            break;
        case 2:
            t1.acceptStudentFromConsole();
            break;
        case 3:
            t1.printStudentOnConsole(); 
            break;
        default:
            cout << "Wrong Choice..." << endl;
            break;
        }
    }
}