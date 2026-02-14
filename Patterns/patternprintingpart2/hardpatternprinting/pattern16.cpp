#include <iostream>
using namespace std;

int main()
{
    int n, row, col, space;
    cout << "Enter a number: ";
    cin >> n;

    // Upper part
    for (row = 1; row <= n; row++) {

        // Left stars
        for (col = 1; col <= row; col++) {
            cout << "*";
        }

        // Spaces
        for (space = 1; space <= 2 * (n - row); space++) {
            cout << " ";
        }

        // Right stars
        for (col = 1; col <= row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part
    for (row = n; row >= 1; row--) {

        // Left stars
        for (col = 1; col <= row; col++) {
            cout << "*";
        }

        // Spaces
        for (space = 1; space <= 2 * (n - row); space++) {
            cout << " ";
        }

        // Right stars
        for (col = 1; col <= row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}