#include <iostream>
#include <stack>
#include "hanoi.h"
using namespace std;

int main() {
    int n;
    cout << "Digite o número de discos (1 a 10): ";
    cin >> n;

    stack<int> A, B, C;

    // Inicializa a haste A
    for (int i = n; i >= 1; i--) {
        A.push(i);
    }

    imprimirEstado(A, B, C);
    cout << endl;

    hanoi(n, A, C, B, 'A', 'C', 'B', A, B, C);

    cout << "\nTotal de movimentos: " << movimentos << endl;

    return 0;
}