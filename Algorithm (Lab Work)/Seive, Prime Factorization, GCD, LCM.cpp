#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    const int maxN = 1000;
    bool prime[maxN + 1];
    for (int i = 0; i <= maxN; i++) {
        prime[i] = true;
    }

    for (int j = 2; j * j <= maxN; j++) {
        if (prime[j] == true) {
            for (int i = j * j; i <= maxN; i = i + j) {
                prime[i] = false;
            }
        }
    }

    cout << "Prime factorization of " << num1 << " is: ";
    for (int i = 2; i <= num1; i++) {
        if (prime[i] && num1 % i == 0) {
            while (num1 % i == 0) {
                cout << i << " ";
                num1 /= i;
            }
        }
    }
    cout << endl;

    cout << "Prime factorization of " << num2 << " is: ";
    for (int i = 2; i <= num2; i++) {
        if (prime[i] && num2 % i == 0) {
            while (num2 % i == 0) {
                cout << i << " ";
                num2 /= i;
            }
        }
    }
    cout << endl;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;

    return 0;
}
