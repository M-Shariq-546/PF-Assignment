#include<iostream>
using namespace std;
void mulNum(int x , int y)
{
    cout<<"The Product of both numbers are : "<<x * y<<endl;
}
int main()
{
    int a , b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    mulNum(a , b);
    return 0;
}