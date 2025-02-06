#include <iostream>
using namespace std;

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

void primeFactorization(int n) {
    cout << "Prime factorization of " << n << " is: ";
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    cout << endl;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers to find their GCD and LCM: ";
    cin >> num1 >> num2;

    primeFactorization(num1);
    primeFactorization(num2);

    cout << endl;

    int gcd = GCD(num1, num2);
    int lcm = LCM(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}
