#include <iostream>

using namespace std;

void coinChangeGreedy(int coins[], int n, int amount) {
    int i = n - 1;
    while (i >= 0) {
        // Find the maximum denomination coin that can be used
        while (amount >= coins[i]) {
            cout << coins[i] << " ";
            amount -= coins[i];
        }
        i--;
    }
}

int main() {
    int coins[] = {1,10,50,65,66,80}; // Denominations of coins
    int n = sizeof(coins) / sizeof(coins[0]); // Number of coins
    int amount = 131; // Amount to make change for

    cout << "Coins used to make " << amount << " cents: ";
    coinChangeGreedy(coins, n, amount);

    return 0;
}
