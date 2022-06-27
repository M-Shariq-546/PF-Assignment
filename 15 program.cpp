#include<iostream>
using namespace std;
void volumeSphere(int x)
{
    const float pi = 3.142;
    float v;
    v = (4/3)* pi * x * x * x;
    cout<<"The Volume of the sphere is : "<<v<<"cm^3"<<endl;
}
int main()
{
    int r;
    cout<<"Enter the radius in cm : ";
    cin>>r;
    volumeSphere(r);
    return 0;
}