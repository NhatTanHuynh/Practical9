#include <iostream>
using namespace std;

int* singleBlock(int n) {
    int* a = new int[n];
    for (int i = 0; i <= n; i++) {
        a[i] = new int[n];
        for (int j = i; j <= n; j++)
        {
            a[i][j] = (i == j) 1;
        }
        cout << endl;
    }
}
