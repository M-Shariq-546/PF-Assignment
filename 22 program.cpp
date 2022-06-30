#include<iostream>
using namespace std;
void findAngle(int a , int b)
{
    int gama;
    const int total = 180;
    gama = total - (a + b);
    cout<<"The third angle of the triangle is : "<<gama<<endl;
}
int main()
{
    int alpha;
    int beta;
    cout<<"Enter the first angle : ";
    cin>>alpha;
    cout<<"Enter the second angle : ";
    cin>>beta;
    findAngle(alpha , beta);
     return 0;
}