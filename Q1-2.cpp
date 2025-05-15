#include <iostream>
using namespace std;

int** arrayOfArrays(int n_rows, int n_cols) {
    int** a = new int*[n_rows];
    for (int i = 0; i <= n; i++) {
        a[i] = new int[n_cols];
        for (int j = i; j <= n; j++)
        {
            a[i][j] = 1;
        }
    }
    return a;
}
