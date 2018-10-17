#include <stdio.h>
#include "aoj_utils/utils.h"
#include <memory>
using namespace std;


int main() {
    int N, i, k;
    input(N);
    int A[N];
    for (i = 0; i < N; i++) input(A[i]);
    print_array(N, A);

    bool flag = true;
    for (i = 0; flag; i++) {
        for (k = N - 1; k > i; k--) {
            flag = false;
            if (A[k] < A[k - 1]) {
                swap(A[k], A[k - 1]);
                flag = true;
                }
            }
        }

    print_array(N, A);

    return 0;
    }
