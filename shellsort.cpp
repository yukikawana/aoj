#include <stdio.h>
#include "aoj_utils/utils.h"
using namespace std;

void insertionsort(int N, int A[], int g) {
    int i, k, v;
    for (i = g; i < N; i++) {
        v = A[i];
        k = i - g;
        while (k >= 0 && A[k] > v) {
            A[k + g] = A[k];
            k-=g;
            }
        A[k + g] = v;
        }
    }

int main() {
    int N, i, k;
    input(N);
    int Gnum = 3;
    int A[N], G[Gnum];
    for (i = 0; i < N; i++) input(A[i]);
    print_array(N, A);
    for (i = Gnum - 1; i >= 0 ; i--) {
        insertionsort(N, A, 3 * i + 1);
        print_array(N, A);
        }

    
    return 0;
    }
