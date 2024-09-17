#include<iostream>
using namespace std;

class Students
{
    public:
    static int rollnumber;
   string name;
   string gender;
   int rollno;
   int marks[3];


Students()
{
    name="AA";
    gender="male/female";
    rollno=rollnumber++;


}
Students(string n,string g)
{
    name=n;
    gender=g;
    rollno=rollnumber++;
    //Studendmarks();
}
void acceptStudent()
{
    cout<<"Enter Student name :";
    cin>>name;
    cout<<"Enter gender :";
    cin>>gender;
    Studendmarks();
    // cout<<"Enter Roll no :";
    // cin>>rollno;
}
void Studendmarks()
{
    int t=0;
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            cout<<"Enter PHY Marks :";
            cin>>marks[i];
            t=t+marks[i];
        }
        if(i==1)
        {
            cout<<"Enter CHE Marks :";
            cin>>marks[i];
            t=t+marks[i];
        }
        if(i==2)
        {
            cout<<"Enter MATH Marks :"<<"\n";
            cin>>marks[i];
            t=t+marks[i];  
        }
        
    }
    cout<<"total marks :"<<t<<"\n"<<endl;
}
float getPercentage() {
    float total = 0;
    for (int i = 0; i < 3; ++i) 
    {
        total+= marks[i];
    }
    return total / 3;
    }

void displayStudent() {
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollno << endl;
    cout << "Gender: " << gender << endl;
    cout << "Percentage: " << getPercentage() << "%" <<"\n"<< endl;
    }
int getrollnumber()
{
    return rollno;
}

};

int Students::rollnumber=1000;

int findStudent(Students* arr[], int index)
{
    int id;
    cout << "Enter the Rollno to search the Student : - ";
    cin >> id;

    for (int i = 0; i < index; i++)
    {
            if (id == arr[i]->getrollnumber())
                return i;
    
    }
    return -1;
}


enum Emanu
{
    EXIT,
    Acceptstudent, 
    DisplayStudent,
    searchStudent,
};
int manu()
{
  int choice;
  cout<<"*********************************"<<endl;
  cout<<"0. EXIT"<<endl;
  cout<<"1. Accept Student"<<endl;
  cout<<"2. Display student "<<endl;
  cout<<"3. Search student"<<endl;
  
  cout<<"*********************************"<<endl;
  cout<<"Enter the choice for Search student :"<<endl;
  cin>>choice;
  return choice;

}

int main()
{
    int x;
    cout<<"pls Enter array size :"<<endl;
    cin>>x;
    Students *ptr[x];
    int choice;
    int index=0;
    //while ((choice = manu()) != Emanu::EXIT)
    while((choice=manu())!=0)
    {
    switch (Emanu(choice))
    {
    case 1:
    {
        for(int i=0;i<x;i++)
        {
            ptr[i]=new Students();
            ptr[i]->acceptStudent();
        }
        break;
    }
    case 2:
    {
        for(int j=0;j<x;j++)
        {
            ptr[j]->displayStudent();
        }
    }
    break;
    case 3:
    {       int i = findStudent(ptr, x);
            if (i != -1)
                ptr[i]->displayStudent();
            else
                cout << "Student not found..." << endl;
    }
    break;
    default:
    {
      cout<<"wrong choice ...."<<endl;
    }
     break;
    
    }
}


}


// void searchStudent(Students**arr,int index)
// { 
//             int rollnos;
//             cout<<"Enter rollno to search";
//             cin>>rollnos;
//     for(int i=0;i<index;i++)
//     {
//         if(rollNumber==arr[i]->getrollnumber())
//         return i;
//     }
//     return -1;
// }
// int searchStudent(Students*arr[],int index,int x)
// { 
//     int rollnos;
//     cout<<"Enter rollno to search";
//     cin>>rollnos;
//     for(int i=0;i<x;i++)
//     {
//         if(rollnos==arr[i]->getrollnumber())
//         return i;
//     }
//     return -1;
// }

    // int search(Students* arr[], int rollNumber){
    //     for(int i=0; i< 4; i++){
    //         if(arr[i]!=nullptr && arr[i]->getrollnumber() == rollNumber){
 
    //     return i;
               
    //         }
    //     }
    //     return -1;
    // }

// int main2()
// {

//     int x;
//     cout<<"pls Enter array size :"<<endl;
//     cin>>x;
//     Students**ptr=new Students *[x];
    //for(int i=0;i<x;i++)
//     {
//         ptr[i]=new Students();
//         ptr[i]->acceptStudent();
//     }

//     for(int j=0;j<x;j++)
//     {
//         ptr[j]->displayStudent();
//     }
//    }

//     ptr[0]=new Students();
//     ptr[1]=new Students("rahil","m");

//     int index=search(arr);
//     if (index !=0)
//     {
//         ptr[index]->displayStudent();
//     }
//     else {
//         cout<<"Not found.....enter valid rollno";
//     }

//     for(int i=0;i<x;i++)
//     {
//         ptr[i]-> new Students();
//         ptr[i]->acceptStudent();
//     }


//     for(int j=0;j<x;j++)
//     {
//         ptr[j]->displayStudent();
//     }



//     Students s1;
//     s1.acceptStudent();
//     s1.displayStudent();
//     Students s2;
//     s2.acceptStudent();
//     s2.displayStudent();

// }