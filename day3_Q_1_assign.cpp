#include<iostream>
using namespace std;

class Volume 
{
   double length;
   double width;
   double height;
   double vol;

public:
    // Parameterless Constructor
    Volume()
    {
        cout << "\nInside Parameterless Ctor" << endl;
        length = 1;
        width = 1;
        height=1;
        Calculate_vol();
    }

    // Single parameterized Constructor
    Volume(int value)
    {
        cout << "\nInside Single Parameterized Ctor " << endl;
        length = value;
        width = value;
        height = value; 
        Calculate_vol();
    }

    // Parameterized Constructor
    Volume(double x, double y,double z)
    {
        cout << "\nInside Parameterized Ctor" << endl;
        length = x;
        width = y;
        height = z;
        Calculate_vol();
    }

    // void init()
    // {
    //     cout << "Init called" << endl;
    //     length = 1;
    //     width = 1;
    //     height=0;
    //     Calculate_vol();
    // }
    void display()
    {
        cout << "Side :(L,B,H) : (" << length << "," << width<<","<<height << ")" << endl;
        cout << "VOlume Of Box :" << vol<<endl;
    }
    float Calculate_vol()
    {
        float vol= length*width*height;

        return vol;
    }
};

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Default/init volume //Parameterless Constructor :" << endl;
    cout << "2. Three Parameterized Constructor" << endl;
    cout << "3. Single parameterized Constructor" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}
int main()
{
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:{
            Volume v1;
            cout<<"Default :"<<v1.Calculate_vol()<<endl;
           }
            break;
        case 2:{
           int x;
           int y;
           int z;
           cout<<"Enter x,y,z value :";
           cin>>x>>y>>z;
           Volume v2(x,y,z);
           cout<<"Tripple value VOLUME :"<<v2.Calculate_vol()<<endl;
        }
            break;
        case 3:{
            int m;
            cout<<"Enter one value :";
            cin>>m;
            Volume v3(m);
            cout<<"single value VOLUME :"<<v3.Calculate_vol()<<endl;
        }
            break;
        default:
            cout << "Wrong Choice..." << endl;
            break;
        }
    }
}