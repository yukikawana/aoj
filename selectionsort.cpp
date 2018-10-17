#include <stdio.h>
#include <memory>
#include "aoj_utils/utils.h"
using namespace std;


int main() {
    int N, i, k, minj;
    input(N);
    int A[N];
    for (i = 0; i < N; i++) input(A[i]);
    print_array(N, A);

    for (i = 0; i < N; i++) {
        minj = i;
        for (k = i + 1; k < N; k++) {
            if (A[k] < A[minj]) minj = k;
            }
        swap(A[minj], A[i]);
        }

    print_array(N, A);
    
    return 0;
    }
