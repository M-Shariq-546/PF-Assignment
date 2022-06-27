#include<iostream>
using namespace std;
void max(int x, int y , int z)
{ 
     if (x <= y) {   //if x is less than y
            if (x <= z)  // then x is must be less than z
                cout << "Largest number: " << x;  // if both upper condition satisfies then x printed.
            else //unlike 2nd condition z will be greater than x so
                cout << "Largest number: " << z;//z is printed
        }
        else {
            if (y <= z) // if y is less than z
                cout << "Largest number: " << y; // y is printed
            else
                cout << "Largest number: " << z; //otherwise z is printed
        }
}
int main()
{
    int a , b , c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    max(a , b , c);
    return 0;
}