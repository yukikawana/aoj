#include <stdio.h>
#include "utils.h"

#include <memory>
using namespace std;

int main() {
    int N, i, j, min_idx;
    input(N);
    int A[N];
    for (i = 0; i < N; i++) input(A[i]);
    print_array(N, A);

    for (i = 0; i < N; i++) {
        min_idx = i;
        for (j = i + 1; j < N; j++) {
            if (A[min_idx] > A[j]) {
                min_idx = j;
                }
            }
        swap(A[i], A[min_idx]);
        }

    print_array(N, A);

    
    return 0;
    }
