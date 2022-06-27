#include<iostream>
using namespace std;
void Factorial(int x)
{
    int fact = 1;
    int i = x;
    while (i>=1)
    {
        fact = fact * i;
        i--;
    }
    
    cout<<"The factorial is : "<<fact<<endl;
}
int main()
{
    int a;
    cout<<"Enter the number to find factorial : ";
    cin>>a;
    Factorial(a);
    return 0;
}