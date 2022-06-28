#include<iostream>
#include<cmath>
using namespace std;
void Area(int a , int b , int c)
{
    int s;
    float area;
    int all;
    s = (a + b + c) / 2;
    all = s * (s - a) * (s - b) * (s - c);
    area = sqrt(all);
    cout<<"The area throught Hero's Formula is : "<<area<<endl;
}
int main()
{
    int x ,y ,z;//x , y , z are sides and s is semi parameter
    cout<<"Enter the length of 1st side : ";
    cin>>x;
    cout<<"Enter the length of 2nd side : ";
    cin>>y;
    cout<<"Enter the length of 3rd side : ";
    cin>>z;
    Area(x ,y , z);
    return 0;
}