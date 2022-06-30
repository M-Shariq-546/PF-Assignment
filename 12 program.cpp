#include<iostream>
using namespace std;
void fibiseries(int num)
{
    int fnum =0 , snum =1 , tnum , i;
    cout<<"The Fabinacco Series are : "<<fnum<<"\t"<<snum;
    for(i=0 ; i<num ; i++)
    {
        if(i <= 1)
        {
            tnum = i;
        }
        else{
            tnum = fnum + snum;
            cout<<"\t"<<tnum;
            fnum = snum;
            snum = tnum;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the lenght of series : ";
    cin>>n;
    fibiseries(n);
    return 0;
}