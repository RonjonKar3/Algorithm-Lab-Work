#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to find its prime factors: ";
    cin >> num;

    cout << "Prime factors of " << num << " are: ";

    while (num % 2 == 0) {
        cout << 2 << " ";
        num = num / 2;
    }

    for (int i = 3; i * i <= num; i = i + 2) {
        while (num % i == 0) {
            cout << i << " ";
            num = num / i;
        }
    }

    if (num > 2) {
        cout << num;
    }

    cout << endl;
    return 0;
}

