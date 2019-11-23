#include<iostream>
using namespace std;
int j=0;
class student{           //Creating class to store student details
private :                    //Private access specifier
    char name[30],grade='/0';
    int usn;
    float m1,m2,m3;
    float total,percentage;
public :                      //Public access specifier
    student()               //Constructor
    {
        cout<<"Constructor"<<endl;
        name[0]='/0';
        usn=0;
        grade='\0';
        m1=m2=m3=total=percentage=0.0;
    }


    void getdata()          //Function to accept the student details
    {
        j++;
        cout<<"\nEnter the Information of student "<<j<<endl;
        cout<<"Enter the student name :  ";
        cin>>name;
        cout<<"\nEnter the usn of the student : ";
        cin>>usn;
        cout<<"\nEnter the marks of three subjects : ";
        cin>>m1>>m2>>m3;
    }
    void calculate()           //Function to calculate total and percentage
    {
        total=m1+m2+m3;
        percentage=(total/300*100);
    }
    void showstudent()          //Function to display students Details
    {
        cout<<"-----------STUDENT DETAILS------------\n";
        cout<<"\tThe student name is : "<<name<<endl;
        cout<<"\tThe student usn is : "<<usn<<endl;
        cout<<"\tThe student marks in\n\tm1 : "<<m1<<"\n\tm2 is :"<<m2<<"\n\tm3 is :"<<m3<<endl;
        cout<<"\tThe Total is : "<<total<<endl<<"The percentage is :"<<percentage<<"%"<<"\tGrade: "<<grade<<endl;
        cout<<"---------------------------------------\n";
    }
    void findgrade()   //Function to assign grade based on percentage
    {
        if (percentage>=80)
            grade='A';
        else if(percentage>=70 && percentage<80)
            grade='B';
        else if (percentage>=60 && percentage<70)
            grade='C';
        else
            grade='F';
    }
    ~student()              //Destructor
    {
        cout<<"\nIn the Student Destructor"<<endl;
        cout<<"Year 2019-20"<<endl;
    }
};
int main()
{
    int i,n;
    cout<<"Enter the number of students : ";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++)            //loop for given number of students
    {
        s[i].getdata();
        s[i].calculate();
        s[i].findgrade();
        s[i].showstudent();
    }
}
