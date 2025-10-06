#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows for first matrix: ";
    cin >> m;
    cout << "Enter number of columns for first matrix: ";
    cin >> n;

    int arr[m][n];
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "First Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int a, b;
    cout << "Enter number of rows for second matrix: ";
    cin >> a;
    cout << "Enter number of columns for second matrix: ";
    cin >> b;

    
    if (n != a) {
        cout << "Matrix multiplication not possible! Columns of first must equal rows of second.\n";
        return 0;
    }

    int arr1[a][b];
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Second Matrix:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    int multiplyOfArrays[m][b] = {0};

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < n; k++) {
                multiplyOfArrays[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }

    cout << "Resultant Matrix after multiplication:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < b; j++) {
            cout << multiplyOfArrays[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
