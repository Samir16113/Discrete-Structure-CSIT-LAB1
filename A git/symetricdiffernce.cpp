#include <iostream>
using namespace std;

int main() {

    int a[100], b[100], c[200]; // Increased size for symmetric difference
    int n, m, i, j, flag;

    cout << "Enter the number of elements in the 1st set: ";
    cin >> n;
    if (n > 100) {
        cout << "Enter again: ";
        cin >> n;
    }

    for (i = 0; i < n; i++) {
        cout << "Enter the value of 1st set " << i + 1 << ": ";
        cin >> a[i];
    }

    cout << "Enter the number of elements in the 2nd set: ";
    cin >> m;
    if (m > 100) {
        cout << "Enter again: ";
        cin >> m;
    }

    for (i = 0; i < m; i++) {
        cout << "Enter the value of 2nd set " << i + 1 << ": ";
        cin >> b[i];
    }

    cout << "Symmetric Difference: ";
    int newSize = 0;

    for (i = 0; i < n; i++) {
        flag = 0;
        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            c[newSize] = a[i];
            newSize++;
        }
    }

    for (i = 0; i < m; i++) {
        flag = 0;
        for (j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            c[newSize] = b[i];
            newSize++;
        }
    }

    for (i = 0; i < newSize; i++) {
        cout << c[i] << " ";
    }

    return 0;
}

