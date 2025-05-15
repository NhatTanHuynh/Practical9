#include <iostream>
using namespace std;

int** arrayOfArrays(int n_rows, int n_cols) {
    int** a = new int*[n_rows];
    for (int i = 0; i < n_rows; i++) {
        a[i] = new int[n_cols];
        for (int j = 0; j < n_cols; j++)
        {
            a[i][j] = 1;
        }
    }
    return a;
}
