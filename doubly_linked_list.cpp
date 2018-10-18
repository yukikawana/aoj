#include <stdio.h>

#include "aoj_utils/utils.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Node {
    int key;
    Node *next, * prev;
    };
Node *nil;

void deleteFirst() {
    printf("delete first\n");
    if (nil->next == nil) return;
    nil->next->next->prev = nil;
    nil->next = nil->next->next;
    free(nil->next);
    
    }
void deleteLast() {
    printf("delete last\n");
    Node *lastnode = nil->prev;
    if (lastnode == nil) return;
    lastnode->prev->next = nil;
    lastnode->prev->next = lastnode->prev;
    free(lastnode);
    }

Node* search(int x) {
    Node *n = nil->next;
    while (n->key != x) {
        n = n->next;
        }
    return n;
    } 
void delet(int x) {
    printf("delet\n");
    Node *n = search(x);
    n->next->prev = n->prev;
    n->prev->next = n->next;
    free(n);
    }

void insert(int x) {
    printf("insert\n");
    Node *n = (Node *) malloc(sizeof(Node));
    n->key = x;
    n->prev = nil;
    n->next = nil->next;
    nil->next->prev = n;
    nil->next = n;

    }

void printlist() {
    Node *n = nil->next;
    while (n != nil) {
        printf("%d ",n->key);
        n = n->next;
        }
    printf("\n");
    }

void init() {
    nil = (Node *) malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
    }

int main() {
    int N, i, key;
    char command[100];
    input(N);
    init();

    for (i = 0; i < N; i++) {
        scanf("%s %d", command, &key);
        if (command[0] == 'd') {
            if (strlen(command) > 6) {
                if (command[6] == 'F') deleteFirst();
                else deleteLast();
                }
            else delet(key);
            } 
        else {insert(key);printlist();}
        
        }
    printlist();

    
    return 0;
    }
