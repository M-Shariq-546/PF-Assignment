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
    if(m0 == m3 && m2 == m && m == m2 && m3 == m0)
    {
        cout<<"The number "<<m3<<m2<<m<<m0<<" is palindrome : "<<endl;
    }
    else{
        cout<<"The number "<<m3<<m2<<m<<m0<<" is not palindrome . "<<endl;
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number of maximum 4 digits : ";
    cin>>n;
    reverse(n);
    return 0;
}