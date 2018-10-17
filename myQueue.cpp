#include <stdio.h>
#include "utils.h"
#define LEN 6
using namespace std;

struct P {
    char name[100];
    int t;
    };

P Q[LEN];
int head, tail = 0;

void enqueue(P &x) {
    Q[tail++] = x;
    tail = tail % LEN;
    }

P dequeue() {
    P x = Q[head++];
    head = head % LEN;
    return x;
    }

bool isEmpty() {
    if (head == tail)
        return true;
    else
        return false;
    }


int main() {
    int N, q, i;

    scanf("%d %d", &N, &q);
    for (i = 0; i < N; i++) scanf("%s %d", Q[i].name, &Q[i].t);
    //for (i = 0; i < N; i++) printf("%s %d", Q[i].name, Q[i].t);

    head = 0;
    tail = N;
    int elapsed = 0;
    while (!isEmpty()) {
        P u = dequeue();
        u.t -= q;
        elapsed+=q;
        if (u.t <= 0) {
            elapsed+=u.t;
            printf("%s done at %d\n", u.name, elapsed);
        }
        else enqueue(u);
        }

    
    return 0;
    }
