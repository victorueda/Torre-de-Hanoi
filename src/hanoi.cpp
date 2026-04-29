#include <iostream>
#include <stack>
#include "hanoi.h"
using namespace std;

int movimentos = 0;

// Função para imprimir o estado das hastes
void imprimirEstado(stack<int> A, stack<int> B, stack<int> C) {
    cout << "A: [";
    while (!A.empty()) {
        cout << A.top();
        A.pop();
        if (!A.empty()) cout << ", ";
    }
    cout << "] ";

    cout << "B: [";
    while (!B.empty()) {
        cout << B.top();
        B.pop();
        if (!B.empty()) cout << ", ";
    }
    cout << "] ";

    cout << "C: [";
    while (!C.empty()) {
        cout << C.top();
        C.pop();
        if (!C.empty()) cout << ", ";
    }
    cout << "]\n";
}

// Move um disco entre duas pilhas
void moverDisco(stack<int>& origem, stack<int>& destino, char o, char d) {
    int disco = origem.top();
    origem.pop();
    destino.push(disco);

    movimentos++;
    cout << "Mover disco " << disco << " de " << o << " para " << d << endl;
}

// Função recursiva principal
void hanoi(int n, stack<int>& origem, stack<int>& destino, stack<int>& auxiliar,
           char o, char d, char a, stack<int>& A, stack<int>& B, stack<int>& C) {

    if (n == 1) {
        moverDisco(origem, destino, o, d);
        imprimirEstado(A, B, C);
        return;
    }

    hanoi(n - 1, origem, auxiliar, destino, o, a, d, A, B, C);
    moverDisco(origem, destino, o, d);
    imprimirEstado(A, B, C);
    hanoi(n - 1, auxiliar, destino, origem, a, d, o, A, B, C);
}