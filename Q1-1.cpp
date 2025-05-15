#include <iostream>
using namespace std;

int** identity(int n) {
    int** m = new int*[n];
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
        for (int j = 0; j < n; j++) {
            m[i][j] = (i == j) ? 1 : 0;
        }
    }
    return m;
}

