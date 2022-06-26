#include<iostream>
using namespace std;
void Area(int x)
{
    float area;
    const float pi = 3.142;
    area = pi * x * x;
    cout<<"The Area of the circle is  : "<<area<<endl;
}
int main()
{
    int a;
    cout<<"Enter the radius of circle in cm : ";
    cin>>a;   
    Area(a);
    return 0;
}