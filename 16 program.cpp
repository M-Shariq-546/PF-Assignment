#include<iostream>
using namespace std;
void volumeOfCube(int x)
{
    int v;
    v =  x * x * x;
    cout<<"The Volume of the Cube is : "<<v<<"cm^3"<<endl;
}
int main()
{
    int side;
    cout<<"Enter the side of Cube in cm : ";
    cin>>side;
    volumeOfCube(side);
    return 0;
}