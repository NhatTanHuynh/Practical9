#include <iostream>
using namespace std;

int* singleBlock(int n) {
    int* a = new int[n * n];
    for (int i=0; i < n; i++) {
        a[i] = new int[n];
        for (int j = 0; j < n; j++){
            a[i * n + j] = i;
        }
    }
    return a;
}