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

    for (i = 0; i < M; i++) {
        int key = B[i];
        int r = N;
        int l = 0;
        while (l < r) {
            int mid = (l + r)/2;
            if (key == A[mid]) {
                printf("%d ", A[mid]);
                break;
                }
            else if (key > A[mid]) {
                l = mid + 1;
                }
            else if (key < A[mid]) {
                r = mid;
                }
            }
        }
    printf("\n");
    
    
    return 0;
    }
