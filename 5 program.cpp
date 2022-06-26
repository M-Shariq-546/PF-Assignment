#include<iostream>
using namespace std;
void max(int x, int y , int z)
{ 
    if(x == y | y == z | z ==x)
        cout<<"Any of two are same."<<endl;
    else if(x > y && y > z)
        cout<<"The largest number is : "<<x<<endl;
    else if(y > z && z > x)
        cout<<"The largest number is : "<<y<<endl;
    else
        cout<<"The largest number is : "<<z<<endl;
}
int main()
{
    int a , b , c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    max(a , b , c);
    return 0;
}