#include <iostream>
using namespace std;

int main()
{
    int n, row, col, space;
    cout << "Enter a number: ";
    cin >> n;

    // Upper inverted part
    for (row = n; row >= 1; row--) {

        // left stars
        for (col = 1; col <= row; col++) {
            cout << "*";
        }

        // spaces
        for (space = 1; space <= 2 * (n - row); space++) {
            cout << " ";
        }

        // right stars
        for (col = 1; col <= row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part
    for (row = 1; row <= n; row++) {

        // left stars
        for (col = 1; col <= row; col++) {
            cout << "*";
        }

        // spaces
        for (space = 1; space <= 2 * (n - row); space++) {
            cout << " ";
        }

        // right stars
        for (col = 1; col <= row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}