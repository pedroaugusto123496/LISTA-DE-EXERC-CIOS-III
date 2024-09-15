#include <stdio.h>

#define NUM_CONTAS 100

int buscaBinaria(int contas[], int tamanho, int contaBusca, int *comparacoes) {
    int esquerda = 0;
    int direita = tamanho - 1;
    *comparacoes = 0;  

    while (esquerda <= direita) {
        (*comparacoes)++;  
        int meio = esquerda + (direita - esquerda) / 2;

        if (contas[meio] == contaBusca) {
            return meio;  
        }

        if (contas[meio] < contaBusca) {
            esquerda = meio + 1;  
        } else {
            direita = meio - 1;  
        }
    }

    return -1;  
}

int main() {
    
    int contas[NUM_CONTAS];
    for (int i = 0; i < NUM_CONTAS; i++) {
        contas[i] = 1000 + i;  
    }

    int contaBusca;
    int comparacoes;

 
    printf("Digite o número da conta para verificar: ");
    scanf("%d", &contaBusca);

   
    int resultado = buscaBinaria(contas, NUM_CONTAS, contaBusca, &comparacoes);


    if (resultado != -1) {
        printf("Conta %d encontrada na posição %d.\n", contaBusca, resultado);
    } else {
        printf("Conta %d não encontrada.\n", contaBusca);
    }
 
    printf("Número de comparações realizadas: %d\n", comparacoes);

    return 0;
}
