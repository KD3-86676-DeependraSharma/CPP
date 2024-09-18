#include <iostream>
using namespace std;
class Employee
{
    int id;
    double salary;

public:
    Employee()
    {
        id=0;
        salary=0;
    }
    Employee(int id, double salary)
    {
        this->id = id;
        this->salary = salary;
    }

    void setId(int id)
    {
        cout<<"Enter new Id"<<endl;
        cin>>id;
    }

    int getid()
    {
        return id;
    }

    void setSalary(int sal)
    {
        this->salary=sal;
    }

    double getSalary()
    {
        return salary;
    }

    virtual void accept()
    {
        cout << "Enter empid - ";
        cin >> id;
        cout << "Enter Salary - ";
        cin >> salary;
    }

    virtual void display()
    {
        cout << "Empid -  " << id << endl;
        cout << "Salary -  " << salary << endl;
    }
};
/************************************************************** */
class Manager : virtual public Employee
{
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus = " << bonus << endl;
    }

public:
    Manager()
    {
        bonus=0;
    }
    Manager(int id, double salary, double bonus) : Employee(id, salary)
    {
        setId(id);
        setSalary(salary);
        this->bonus = bonus;
    }
    void setbonus(double bonus)
    {
        cout<<"Enter new Bonus"<<endl;
        cin>>bonus;
    }

    double getBonus()
    {
        return bonus;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
};
/********************************************************************* */
class Salesman : virtual public Employee
{
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "commission = " << commission << endl;
    }

public:
    Salesman()
    {
        commission=0;
    }
    Salesman(int id, double salary, double commission) : Employee(id, salary)
    {
        setId(id);
        setSalary(salary);
        this->commission = commission;
    }
    void setCommission(double commission)
    {
        cout<<"Enter new Bonus"<<endl;
        cin>>commission;
    }

    double getCommission()
    {
        return commission;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }

    void display()
    {
        Employee::display();
        displaySalesman();
    }
};
/********************************************************************* */
class Salesmanager : public Manager, public Salesman
{
public:
    Salesmanager()
    {

    }
    Salesmanager(int id, double salary, double bonus, double commission) : Employee(id, salary)
    {
        Manager(id,salary,bonus);
        Salesman(id,salary,commission);
    }

    void accept()
    {
        Employee::accept();
        this->acceptManager();
        this->acceptSalesman();
    }
    void display()
    {
        cout<<"******************************************"<<endl;
        Employee::display();
        this->displayManager();
        this->displaySalesman();
    }
};

int main()
{
    Employee * arr[5];
    int choice;
    do
    {
        cout<<"0. EXIT"<<endl;
        cout<<"1. AcceptEmployee "<<endl;
        cout<<"2. DisplayCountEMPDesignation; "<<endl;
        cout<<"3. DisplayAllManagers; "<<endl;
        cout<<"4. DisplayAllSalesman; "<<endl;
        cout<<"5. DisplayAllSalesManagers; "<<endl;
        cin>>choice;
    switch (choice)
    {
    case 1:
    {
        for(int i = 0; i<5;i++)
        { 
        cout<<"0. Accept Manager"<<endl;
        cout<<"1. Accept Salesman"<<endl;
        cout<<"2. Accept SalesManager"<<endl;
        cin>>choice;
        if(choice==0)
        {
        arr[i]=new Manager();
        arr[i]->accept();
       // arr[i]->display();
        }
        else if(choice==1)
        {
            arr[i]=new Salesman();
            arr[i]->accept();
           // arr[i]->display();
        }
        else if(choice==2)
        {
            arr[i]=new Salesmanager();
            arr[i]->accept();
           // arr[i]->display();
        }
        else
        {
            cout<<"wrong choice......."<<endl;
        }
    } 
    }
        break;
    case 2:
    {
        int countManager=0;
        int countSalesman=0;
        int countsalesmanager=0;
        for(int i=0;i<5;i++)
        {
            if(typeid(*arr[i])==typeid(Manager))
            {
                 countManager=countManager+1; 
                 // cout<<"Total Manager :"<<countManager<<endl;
            }
            else if(typeid(*arr[i])==typeid(Salesman))
            {
                 countSalesman=countSalesman+1;
                //cout<<"Total salesman :"<<countSalesman<<endl;
                 
            }
            // else if(typeid(arr[i])==typeid(Salesmanager))
            else
            {
                countsalesmanager=countsalesmanager+1;
                //cout<<"Total Salesmanager :"<<countsalesmanager<<endl;

            }
        } 
       cout<<"Total Manager :"<<countManager<<endl; 
       cout<<"Total salesman :"<<countSalesman<<endl;
       cout<<"Total Salesmanager :"<<countsalesmanager<<endl;
    }
        break;
    case 3:
    {
          for(int i=0;i<5;i++)
          {
            if(typeid(*arr[i])==typeid(Manager))
            {
                arr[i]->display(); 
            }
          }

    }
        break;
    case 4:
    {
        for(int i=0;i<5;i++)
          {
            if(typeid(*arr[i])==typeid(Salesman))
            {
                arr[i]->display(); 
            }
          }

    }
        break;
    case 5:
    {
        for(int i=0;i<5;i++)
          {
            if(typeid(*arr[i])==typeid(Salesmanager))
            {
                arr[i]->display(); 
            }
          }

    }
        break;
    
    default:
    {
        cout<<"wrong choice.............";
    }
        break;
    }
    
    
    
    } while (choice!=0);
    
    // Employee *e = new Salesmanager;
    
    // e->accept();
    // e->display();

    return 0;
}