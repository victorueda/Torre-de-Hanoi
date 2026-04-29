#ifndef HANOI_H
#define HANOI_H
#include <stack>


using namespace std;

extern int movimentos;

void imprimirEstado(stack<int> A, stack<int> B, stack<int> C) ;
void moverDisco(stack<int>& origem, stack<int>& destino, char o, char d) ;
void hanoi(int n, stack<int>& origem, stack<int>& destino, stack<int>& auxiliar,
           char o, char d, char a, stack<int>& A, stack<int>& B, stack<int>& C) ;

#endif // HANOI_H