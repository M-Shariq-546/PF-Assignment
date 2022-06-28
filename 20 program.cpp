#include<iostream>
#include<cmath>
using namespace std;
void celToFeh(int c)
{
    float feh;
    feh = (c * 1.8) + 32;
    cout<<"The temperature in fehrenheite is : "<<feh<<endl;
}
int main()
{
    int tem;
    cout<<"Enter the temperature in celcius : ";
    cin>>tem;
    celToFeh(tem);
    return 0;
}