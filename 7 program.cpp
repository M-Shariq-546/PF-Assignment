#include<iostream>
using namespace std;
void evenOdd(int x)
{
    if(x % 2 == 0)
        cout<<"The number is even ."<<endl;
    else{
        cout<<"The number is odd ."<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    evenOdd(a);
    return 0;
}