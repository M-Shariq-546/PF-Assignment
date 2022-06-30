#include<iostream>
using namespace std;
void reverse(int num)
{
    int m0 , m_5, m , m1 , m2 , m3;
    m0 = num / 1000;
    m_5 = num % 1000;
    m = m_5 / 100;
    m1 = num % 100;
    m2 = m1 / 10;
    m3 = m1 % 10;  
    cout<<"The Reverse form of digits are : "<<m3<<m2<<m<<m0<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of maximum 4 digits : ";
    cin>>n;
    reverse(n);
    return 0;
}