#include<iostream>
using namespace std;
int power(int b,int po)
{
    if(po != 0)
        return (b*power(b , (po-1)));
    else
        return 1;
}
int main()
{
    int base , p , res;
    cout<<"Enter the base value : ";
    cin>>base;
    cout<<"Enter the power : ";
    cin>>p;
    res = power(base , p);
    cout<<"The result of "<<base<<" ^ "<<p<<" is : "<<res<<endl;
    return 0;
}