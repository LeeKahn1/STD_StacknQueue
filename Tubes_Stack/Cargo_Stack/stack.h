#ifndef CARGO_H_INCLUDED
#define CARGO_H_INCLUDED
#include <iostream>
using namespace std;

struct cargo {
    int noBarang;
    string namaBarang;
    string jenisBarang;
};
typedef cargo infotype;
struct Stack{
    infotype info[10];
    int Top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void Push(Stack &S, infotype x);
void Pop(Stack &S, infotype &c);
void printStack(Stack &S);
void lookForStuff(Stack &S, string look);

#endif // CARGO_H_INCLUDED
