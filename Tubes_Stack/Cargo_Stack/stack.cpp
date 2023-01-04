#include "stack.h"

void createStack(Stack &S){
    S.Top = -1;
}

bool isEmpty(Stack S){
    return(S.Top == -1);
}

bool isFull(Stack S){
    return(S.Top == 10);
}

void Push(Stack &S, infotype x){
    if(isFull(S)){
        return;
    }else{
        S.Top++;
        S.info[S.Top].noBarang = x.noBarang;
        S.info[S.Top].namaBarang = x.namaBarang;
        S.info[S.Top].jenisBarang = x.jenisBarang;
    }
}

void Pop(Stack &S, infotype &c){
    if(isEmpty(S)){
        cout << "Stack Empty!" << endl;
    }else{
        c = S.info[S.Top];
        S.Top--;
    }
}

void lookForStuff(Stack &S, string look){
    int v = S.Top;
    if(S.Top == -1){
        cout << "Stack Empty!" << endl;
    }else{
        while(v != -1){
            if(S.info[v].jenisBarang == look){
            cout << "Nomor Barang: " << S.info[v].noBarang << endl;
            cout << "Nama Barang: " << S.info[v].namaBarang << endl;
            cout << "Jenis Barang: " << S.info[v].jenisBarang << endl;
            }
        v--;
        }
    }
}

void printStack(Stack &S){
    int n;
    if(S.Top == -1){
        cout << "Stack Empty!" << endl;
    }else{
        for(n = S.Top; n >= 0; n--){
        cout << "Nomor Barang: " << S.info[n].noBarang << endl;
        cout << "Nama Barang: " << S.info[n].namaBarang << endl;
        cout << "Jenis Barang: " << S.info[n].jenisBarang << endl;
        cout << "---------------------------" << endl;
        }
    }
}
