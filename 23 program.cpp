#include<iostream>
using namespace std;
void kphToMph(int k)
{
    float m;
    m = k / 1.6093;
    cout<<"The speed converted to mph is  : "<<m<<endl;
}
int main()
{
    int kph;
    cout<<"Enter the speed in kph : ";
    cin>>kph;
    kphToMph(kph);
    return 0;
}