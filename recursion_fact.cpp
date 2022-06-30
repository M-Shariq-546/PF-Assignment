#include <iostream>
using namespace std;
int factorial(int num) {
    if (num > 1) {
        return num * factorial(num - 1);
    } else {
        return 1;
    }
}
int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result<<endl;
    return 0;
}