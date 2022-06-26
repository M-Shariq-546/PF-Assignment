#include<iostream>
using namespace std;
void sumNum(int x , int y)
{
    cout<<"The sum of both numbers are : "<<x + y<<endl;
}
int main()
{
    int a , b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    sumNum(a , b);
    return 0;
}
