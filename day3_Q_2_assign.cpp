#include<iostream>
using namespace std;
class CarTollBooth
{
   unsigned int paying_car_passed;
   unsigned int Nonpaying_car_passed;
   double amount;
   unsigned int totalcars;

public:

CarTollBooth()
{
    paying_car_passed=0;
    Nonpaying_car_passed=0;
    amount=0;
    totalcars=0;
}
void paying_cars()
{
    paying_car_passed++;
    amount+=.5;
    totalcars++;
}
void non_paying_cars()
{
    Nonpaying_car_passed++;
    totalcars++;
}
void PrintOnScreen()
{
    cout<<"total number of cars passed :- "<<totalcars<<endl;
    cout<<"total number of paying Cars :- "<<paying_car_passed<<endl;
    cout<<"total number of nopaying Cars :- "<<Nonpaying_car_passed<<endl;
    cout<<"total amount collected :- Rs."<<amount<<endl;
}
};

int main(){
    CarTollBooth ct1;
    
    ct1.non_paying_cars();
    ct1.paying_cars();
    ct1.non_paying_cars();
    ct1.paying_cars();
    ct1.paying_cars();
    ct1.non_paying_cars();
    ct1.paying_cars();
    ct1.paying_cars();
    ct1.non_paying_cars();
    ct1.paying_cars();
    ct1.PrintOnScreen();
}