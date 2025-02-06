#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    bool prime[n + 1];
    for (int i = 0; i <= n; i++) {
        prime[i] = true;
    }

    for (int j = 2; j * j <= n; j++) {
        if (prime[j] == true) {
            for (int i = j * j; i <= n; i = i + j) {
                prime[i] = false;
            }
        }
    }

    cout << "Prime numbers less than or equal to " << n << " are:\n";
    for (int j = 2; j <= n; j++) {
        if (prime[j]) {
            cout << j << " ";
        }
    }
    cout << endl;

    return 0;
}

