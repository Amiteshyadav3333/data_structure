#include <iostream>
using namespace std;

int main()
{
    int n, row, col, space;
    cout << "Enter a number: ";
    cin >> n;

    // Upper part
    for (row = 1; row <= n; row++) {

        // Leading spaces
        for (space = 1; space <= n - row; space++) {
            cout << " ";
        }

        // Stars
        for (col = 1; col <= 2 * row - 1; col++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part
    for (row = n - 1; row >= 1; row--) {

        // Leading spaces
        for (space = 1; space <= n - row; space++) {
            cout << " ";
        }

        // Stars
        for (col = 1; col <= 2 * row - 1; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}