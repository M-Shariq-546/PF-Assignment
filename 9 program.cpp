#include<iostream>
using namespace std;
void prime(int x)
{
    if(x % 2 == 1)
        cout<<"THE NUMBER IS PRIME NUMBER."<<endl;
    else{
        cout<<"THE NUMBER IS NOT PRIME NUMBER."<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    prime(a);
    return 0;
}