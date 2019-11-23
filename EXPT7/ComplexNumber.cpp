#include<iostream>
using namespace std;
class Complex{          //class Complex is defined
private :
    int re,im;          //class data members which can be used inside class only
public :
    void getdata()         //member function to accept complex number
    {
        cout<<"\nEnter the complex number : ";
        cin>>re;
        cin>>im;
    }
    void showdata()     //member function to display complex number
    {
        cout<<re<<"+"<<im<<"i";
    }
    void add(Complex c1,Complex c2)     //Member function to add 2 complex number
    {
        re=c1.re+c2.re;     //Addition of real part of 2 complex numbers
        im=c1.im+c2.im;     //Addition of imaginary part of 2 complex Numbers
    }
};
int main()
{
    Complex c1,c2,c3;       //objects of class Complex
    c1.getdata();
    cout<<"The first complex number is : ";
    c1.showdata();
    c2.getdata();
    cout<<"\nThe second complex number is : ";
    c2.showdata();
    c3.add(c1,c2);
    cout<<"\nThe sum of two complex numbers is :";
    c3.showdata();
}
