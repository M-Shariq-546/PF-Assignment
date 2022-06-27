#include<iostream>
using namespace std;
void Age(int x)
{
    if(x >= 18)
        cout<<"HE/SHE IS ELIGIBLE TO CAST HIS/HER VOTE."<<endl;
    else{
        cout<<"HE/SHE IS NOTE ELIGIBLE TO CAST HIS/HER VOTE."<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter the Age of voter : ";
    cin>>a;
    Age(a);
    return 0;
}