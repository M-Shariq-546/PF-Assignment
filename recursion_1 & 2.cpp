#include<iostream>
using namespace std;
int print(int n)
{
    if(n > 1)
        print(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"Enter the maximum value : ";
    cin>>n;

    cout<<"The "<<n<<" numbers are : ";
    print(n);    
}