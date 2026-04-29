# Torre de Hanói

## Descrição

A Torre de Hanói é um problema clássico da computação e da matemática que consiste em mover um conjunto de discos entre três hastes, seguindo regras específicas.
O objetivo é transferir todos os discos da haste A para a haste C, utilizando a haste B como auxiliar.

### Regras do Problema


1. Apenas um disco pode ser movido por vez.


2. Somente o disco do topo de uma haste pode ser movido.


3. Um disco maior nunca pode ser colocado sobre um disco menor.


# Estrutura de Dados Utilizada

 Cada haste foi implementada utilizando uma Pilha (Stack).
 Essa escolha é ideal porque:


1. A pilha segue o modelo LIFO (Last In, First Out)


2. Apenas o elemento do topo pode ser acessado


3. As operações push e pop representam exatamente os movimentos dos discos


Dessa forma, a estrutura já impõe naturalmente as regras do problema.

# Como Compilar e Executar

## Pré-requisitos

## Ferramentas de Desenvolvimento

- **Compilador:** GCC / G++
- **Versão do GCC:** 6.3.0 (MinGW.org GCC-6.3.0-1)
- **Debugger:** GDB (opcional)
- **Terminal:** Prompt de Comando ou PowerShell
- **Editor:** Visual Studio Code (opcional)

### Compilação

Linux / Mac:
g++ main.cpp src/hanoi.cpp -I include -o main

Windows (PowerShell):
g++ main.cpp src/hanoi.cpp -I include -o main.exe

### Execução
Linux / Mac:
./main

Windows (PowerShell):
.\main.exe

# Funcionamento do Programa

O programa realiza as seguintes etapas:


1. Recebe como entrada o número de discos (n, entre 1 e 10)


2. Inicializa a haste A com os discos (do maior para o menor)


3. Executa a solução utilizando recursão


4. Exibe cada movimento realizado no formato:


Mover disco X de A para CA: [ ... ] B: [ ... ] C: [ ... ]


Ao final, mostra o total de movimentos realizados



# Estratégia Utilizada (Recursão)
O algoritmo segue a lógica:


Para mover n discos de A para C:


1. Move n-1 discos de A para B


2. Move o disco maior de A para C


3. Move n-1 discos de B para C




Essa abordagem é natural para problemas que podem ser divididos em subproblemas menores.

# Número de Movimentos

O número mínimo de movimentos necessários é dado por:

T(n) = 2^n - 1

Exemplos:


n = 3 → 7 movimentos


n = 4 → 15 movimentos


n = 10 → 1023 movimentos



# Perguntas de Análise

1. Por que a Pilha é a estrutura ideal?
A pilha é adequada porque permite acesso apenas ao elemento do topo, respeitando diretamente as regras do problema. Além disso, o comportamento LIFO garante que os discos sejam manipulados na ordem correta, evitando configurações inválidas.

2. É possível resolver sem recursão?
Sim, é possível resolver de forma iterativa.
Nesse caso, utiliza-se um laço e regras fixas de movimentação entre as hastes, que variam conforme o número de discos ser par ou ímpar. Em cada passo, realiza-se o único movimento válido possível entre duas hastes.
No entanto, essa abordagem é mais complexa e menos intuitiva.
A recursão é preferida porque o problema possui uma estrutura naturalmente recursiva, tornando a solução mais simples, elegante e fácil de entender.

# Conclusão

A Torre de Hanói é um excelente exercício para compreender:


Recursão


Estruturas de dados (pilha)


Divisão de problemas em subproblemas


Além disso, demonstra como escolher a estrutura correta pode simplificar significativamente a implementação.

Se quiser, posso deixar esse README mais “profissional ainda” (com capa, exemplos reais de execução e prints) pra você tirar nota máxima.