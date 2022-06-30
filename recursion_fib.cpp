#include <iostream>
using namespace std;
int fibanocci(int n) {
   if((n==1)||(n==0)) {
      return(n);
   }else {
      return(fibanocci(n-1)+fibanocci(n-2));
   }
}
int main() {
   int n , i=0;
   cout << "Enter the number of terms in the series : ";
   cin >> n;
   cout <<"Fibonnaci Series : ";
   while(i < n) {
      cout << " " << fibanocci(i);
      i++;
   }
   return 0;
}