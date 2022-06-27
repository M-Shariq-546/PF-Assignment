#include<iostream>
using namespace std;
void Grades(int x)
{
    const int num = 100;
    if(x >= 91 && x <= 100)
        cout<<"The grade obtained is \"AA\".";
    else if(x>=81 && x <=90)
        cout<<"The grade obtained is \"AB\".";
    else if(x>=71 && x <=80)
        cout<<"The grade obtained is \"BB\".";
    else if(x>=61 && x <=70)
        cout<<"The grade obtained is \"BC\".";
    else if(x>=51 && x <=60)
        cout<<"The grade obtained is \"CD\".";
    else if(x>=41 && x <=50)
        cout<<"The grade obtained is \"DD\".";
    else if(x <= 40)
        cout<<"Sorry you are \"FAIL\".";  
}
int main()
{
    int a;
    cout<<"Enter the obtained marks : ";
    cin>>a;
    Grades(a);
    return 0;
}