#include<iostream>
using namespace std;

void areaPerimeter(int l , int w)
{
    int peri;
    int area;
    peri = (2*l) + (2*w);
    area = (l * w);
    cout<<"The Area of rectangle is : "<<area<<endl;
    cout<<"The Perimeter of rectangle is : "<<peri<<endl;
}

int main()
{
    int a , b;
    cout<<"Enter the lenght of Rectangle : ";
    cin>>a;
    cout<<"Enter the widht of Rectangle  : ";
    cin>>b;
    areaPerimeter(a , b);
    return 0;
}