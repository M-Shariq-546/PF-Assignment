#include<iostream>
using namespace std;
void circum(int x)
{
    float cir;
    const float pi = 3.142;
    cir = 2 * pi * x;
    cout<<"The circumference of the circle is  : "<<cir<<endl;
}
int main()
{
    int a;
    cout<<"Enter the radius of circle in cm : ";
    cin>>a;   
    circum(a);
    return 0;
}