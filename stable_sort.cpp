#include <stdio.h>
#include "utils.h"
#include <memory.h>
#include <memory>
#include <iostream>
using namespace std;

struct card {
    char suit, value;
    };


void bubble_sort(int N, struct card A[]) {
    int i, k;
    bool flag = true;
    for (i = N - 1; flag; i--) {
        flag = false;
        for (k = i; k > 0; k--) {
            if (A[k].value < A[k - 1].value) {
                swap(A[k].value, A[k - 1].value);
                flag = true;
                }
            }
        }
    }

void selection_sort(int N, struct card A[]) {
    int i, k, min_idx;
    for (i = 0; i < N; i++) {
        min_idx = i;
        for (k = i + 1; k < N; k++) {
            if (A[k].value < A[min_idx].value) {
                min_idx = k;
                }
            }
        swap(A[k].value, A[min_idx].value);
        }
    }

void test_stability(int N, struct card A[], struct card B[]) {
    
    }

void print_card(int N, struct card A[]) {
    int i;
    for (i = 0; i < N - 1; i++) {
        cout << A[i].suit << A[i].value << " ";
        }
    cout << A[N - 1].suit << A[N - 1].value << endl;

    }

int main() {
    int N, i;
    input(N);
    card A[N], B[N];
    for (i = 0; i < N; i++) {
        cin >> A[i].suit >> A[i].value;
        }
    print_card(N, A);
    memcpy(B, A, sizeof(A));
    print_card(N, B);

    bubble_sort(N, A);
    printf("bubble ");
    print_card(N, A);
    selection_sort(N, B);
    printf("selection ");
    print_card(N, A);
    
    return 0;
    }
