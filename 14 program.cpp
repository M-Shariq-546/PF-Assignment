#include<iostream>
using namespace std;
void swap(int x , int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"The value after swapping are : "<<x<<"  "<<y<<endl;
}
int main()
{
    int a , b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<endl;
    cout<<"The value before swapping are : "<<a<<"  "<<b<<endl;
    swap(a , b);
    return 0;
}