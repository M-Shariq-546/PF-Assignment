#include<iostream>
using namespace std;
void volumeOfCylinder(int x , int y)
{
    const float pi = 3.142;
    float v;
    v =   pi * x * x * y;
    cout<<"The Volume of the Cylinder is : "<<v<<"cm^3"<<endl;
}
int main()
{
    int h , r;
    cout<<"Enter the height of cylinder in cm : ";
    cin>>h;
    cout<<"Enter the radius of cylinder in cm : ";
    cin>>r;
    volumeOfCylinder(h , r);
    return 0;
}