#include <stdio.h>
#include "aoj_utils/utils.h"
using namespace std;

const int CHARLEN;
const int HASHLEN;

char H[HASHLEN][CHARLEN];

int find(char str[]) {
    int key = getkey(str);
    if ()
    
    }
int main() {
    int N, i, k;
    input(N);
    char str[CHARLEN], com[CHARLEN];
    for (i = 0; i < N; i++) {
        scanf("%s %s", com, str);
        if (com[0] == 'i'){
            insert(str);
            }
        else {
            //0 = false, 1 = true
            printf("%d\n", find(str));
            }
        }
    
    
    return 0;
    }
