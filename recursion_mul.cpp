#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int multiply(int m, int n){
	if(n == 0){
		return 0;
	}
	return m + multiply(m,n-1);
}

int main(){
	int m, n;
    cout<<"Enter 1st number : ";
    cin>>m;
    cout<<"Enter 2nd number : ";
    cin>>n;
    cout<<"The resultant is : ";
	cout<<multiply(m,n)<<endl;
	return 0;
}