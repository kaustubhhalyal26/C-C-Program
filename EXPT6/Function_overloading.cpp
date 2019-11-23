#include<iostream>
using namespace std;
const float pi=3.14;        //constant value for pi is defined
class area{                 //class area
    float ar1,ar2,ar3;      //data member of class area
public :
    void area1(float r)    //member function for calculating area of circle
    {
        ar1=(pi*r*r);       //returns area of circle
    }
    void area1(float n,float a,float b) //member function for calculating area of triangle
    {
        ar2=(n*a*b);       //returns area of triangle
    }
    void area1(float lr,float br)      //member function for calculating area of rectangle
    {
        ar3=(lr*br);        //returns area of rectangle
    }
    void display()          //member function to display areas
    {
        cout<<"Area of circle : "<<ar1<<endl;
        cout<<"Area of rectangle  : "<<ar3<<endl;
        cout<<"Area of triangle  : "<<ar2<<endl;
    }
};
int main()
{
    float lr,br,c,b,r;
    area a;
    cout<<"Enter the radius : ";
    cin>>r;
    cout<<"\nEnter the length and breadth :";
    cin>>lr>>br;
    cout<<"\nEnter the height and base :";
    cin>>c>>b;
    a.area1(r);
    a.area1(0.5,c,b);   //o.5 used for 1/2 in formula for area of triangle
    a.area1(lr,br);
    a.display();
}
