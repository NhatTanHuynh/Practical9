#include <iostream>
using namespace std;

int** identity(int n) {
    int** m = new int*[n];
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
        for (int j = 0; j < n; j++ ) {
            m[i][j] = ( i == j) ? 1:0;
        }
    }
    return m;
}

int main() {
    int n;
    count <<"ENter the size of the identity matrix: ";
    cin >> n;
    int** m = identity(n);
    for (int i = 0; i < n; i++) {
        for (int j=0; j<n; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}