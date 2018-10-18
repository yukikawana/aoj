#include <stdio.h>
#include "aoj_utils/utils.h"
using namespace std;


int main() {
    int N, M, i, k;
    input(N);
    int A[N];
    for (i = 0; i < N; i++) input(A[i]);
    print_array(N, A);
    input(M);
    int B[M + 1];
    for (i = 0; i < M; i++) input(B[i]);
    print_array(M, B);

    for (i = 0; i < N; i++) {
        k = 0;
        B[M] = A[i];
        while (B[k] != A[i])
            k++;
        if (k != M)
            printf("%d ",A[i]);
        }
    printf("\n");
    
    
    return 0;
    }
