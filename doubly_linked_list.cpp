#include <stdio.h>
#include "utils.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

Node *nil;
struct Node {
    int key;
    Node *next, * prev;
    };

void deleteFirst() {
    if (nil->next == nil) return;
    nil->next->next->prev = nil;
    nil->next = nil->next->next;
    free(nil->next);
    
    }
void deleteLast() {
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
void deleteKey(int x) {

    
    }
void insert(int x) {
    
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
            else deleteKey(key);
            } 
        
        }

    
    return 0;
    }
