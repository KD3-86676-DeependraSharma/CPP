//Time* *ptr = new Time*[5]
#include<iostream>
using namespace std;

class Time
{
    double hours;
    double minute;
    double second;
public:
    Time()
    {
      this->hours=10;
      this->minute=10;
      this->second=10;
    }
    Time(int h,int m,int s)
    {
      this->hours=h;
      this->minute=m;
      this->second=s;
    }
    void accept()
    {
        cout<<"Enter Hr :";
        cin>>hours;
        cout<<"Enter min :";
        cin>>minute;
        cout<<"Enter sec :";
        cin>>second;
    }
    void printTime()
    {
        cout<<"Time is :=>"<<this->hours<<":"<<this->minute<<":"<<this->second<<endl;
    }

    void setHour(int hr)
    {
        cout<<"Enter Hours :";
        cin>>hours;
    }
    int getHours()
    {
       return hours;
    
    }
    void setMinute(int min)
    {
        cout<<"Enter minutes :";
        cin>>minute;
    }
    int getMinute()
    {
         return minute;
    }
    void setSeconds(int sec)
    {
        cout<<"Enter Second :";
        cin>>second;
    }
    int getSeconds()
    {
       return second;
    }

};
int main()
{ 
    int x;
    cout<<"pls Enter array size :"<<endl;
    cin>>x;
    Time**ptr=new Time*[x];
    // ptr[0]=new Time(3,12,12);
    // ptr[1]=new Time(3,12,12);
    // ptr[2]=new Time();
    // ptr[3]=new Time(3,12,12);
    // ptr[4]=new Time(3,12,12); 
    for(int i=0;i<x;i++)
    {
        ptr[i]=new Time();
        ptr[i]->accept();
        // ptr[i]->printTime();
    }
    for(int j=0;j<x;j++)
    {
        ptr[j]->printTime();
    }

    for (int i = 0; i < x; i++)
    {
        delete ptr[i];
        ptr[i] = NULL;
    }

    delete[] ptr;
    ptr = NULL;

    return 0;
}
// int main2()
// {
//     Time t1;
//     t1.printTime();
//     t1.setHour(12);
//     t1.getHours();
//     t1.setMinute(12);
//     t1.getMinute();
//     t1.setSeconds(12);
//     t1.getSeconds();
//     t1.printTime();

//     Time t2(03,12,20);
//     t2.printTime();
//     return 0;
// }