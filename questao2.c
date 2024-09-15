#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_CRINÇAS 50
#define NOTAS_MAX 5
void gerarNotas(int notas[], int tamanho);
void contarNotas(int notas[], int tamanho, int contagem[]);

int main() {
    int notas[NUM_CRINÇAS];
    int contagem[NOTAS_MAX] = {0};
    srand(time(NULL));
    gerarNotas(notas, NUM_CRINÇAS);
    contarNotas(notas, NUM_CRINÇAS, contagem);

    
    printf("Os resultados da pesquisa sobre o dvd da xuxa foram:\n");
    for (int i = 0; i < NOTAS_MAX; i++) {
        printf("Nota %d: %d vez(es)\n", i + 1, contagem[i]);
    }

    return 0;
}
void gerarNotas(int notas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        notas[i] = rand() % NOTAS_MAX + 1;
    }
}
void contarNotas(int notas[], int tamanho, int contagem[]) {
    for (int i = 0; i < tamanho; i++) {
        contagem[notas[i] - 1]++;
    }
}
