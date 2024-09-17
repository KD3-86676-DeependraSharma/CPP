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

class Salesmanager : public Manager, public Salesman
{
public:
    Salesmanager()
    {

    }
    Salesmanager(int id, double salary, double bonus, double commission) : Employee(id, salary)
    {
        // this->setId(id);
        // this->setbonus(bonus);
        // this->setCommission(commission);
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
    Employee *e = new Salesmanager;
    
    e->accept();
    e->display();

    return 0;
}