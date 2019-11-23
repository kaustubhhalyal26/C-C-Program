#include<iostream>
using namespace std;
class Manager{          //Defining Class user defined name-Manager
protected :             //Protected access specifier
    string name;           //data Members
    string dept;
    int empid;
    int bonus;
public :                //Public Access Specifiers
    void getdata()      //To accept the employee details
    {
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter Department : "<<endl;
        cin>>dept;
        cout<<"Enter empid : "<<endl;
        cin>>empid;
    }
    void setbonus(int b)       //member function setbonus ,which argument is bonus for each department
    {
        bonus=b;
        cout<<"\nDepartment : "<<dept<<"\nBonus : "<<bonus<<endl;
    }
    void display(int n)        //member function display, which argument is number of employees
    {
        cout<<"\n Name : "<<name<<endl;
        cout<<"\n Department : "<<dept<<endl;
        cout<<"\n No. of employees : "<<n<<endl;
        cout<<"\n Bonus : "<<bonus<<endl;
    }
};
class prodman : public Manager{         //subclass prodman, access mode is public, class is Manager(subclass salesman inheriting from class Manager)
    int noOfsup;
public :
    void manageprod(int n)
    {
        noOfsup=n;
        cout<<"\nNo. of supervisors : "<<noOfsup<<endl;
        display(noOfsup);
    }
};
class salesman : public Manager{        //subclass salesman inheriting from class Manager
    int noOfsalesmen;
public :
    void managesales(int n)
    {
        noOfsalesmen=n;
        cout<<"\nNo. of salesmen : "<<noOfsalesmen<<endl;
        display(noOfsalesmen);
    }
};
int main()
{
    prodman p;              //object of class prodman
    salesman s;             //object of class salesman
    p.getdata();
    s.getdata();
    p.setbonus(5000);       //bonus for prodman is 5000
    s.setbonus(3000);       //bonus for salesman is 3000
    p.manageprod(100);      //Number of employees in prod unit 100
    s.managesales(50);      //Number of employees in sales unit 50
}
