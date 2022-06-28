#include<iostream>
#include<cmath>
using namespace std;
void FehTocel(int f)
{
    float cel;
    cel = (f - 32) * 0.5556;
    cout<<"The temperature in Celcius is : "<<cel<<endl;
}
int main()
{
    int tem;
    cout<<"Enter the temperature in Fehrenheite : ";
    cin>>tem;
    FehTocel(tem);
    return 0;
}