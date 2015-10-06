#define N 10
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int n;
    int i = 0;
    float tempoMedio = 0;
    int vet[N]; //Vettore contenente tempi di esecuzione
    int ris[N]; //Vettore contenente tempi di attesa per ogni processo.
   

    // Riempo il vettore con i tempi di esecuzione
    while(i < N){
        printf("Inserisci il tempo di esecuzione del %d° processo: ",i + 1);
        scanf("%d",&vet[i]);
        i++;
    }
    
    i = 1;
    
    //Calcolo il tempo di attesa di ogni processo e lo sposto in un altro vettore.
    while(i < N){
            tempoMedio = tempoMedio + vet[i-1]; 
            ris[i-1]=tempoMedio;   
        i++;
    }
    
    //Sommo i tempi di attesa per fare la media.
    i = 0;
    tempoMedio = 0;
    while(i < N - 1){
        tempoMedio = tempoMedio + ris[i];
        i++;
    }
    tempoMedio = tempoMedio / N;
    printf("Il tempo medio di attesa e' : %f",tempoMedio);
    
    
    return (EXIT_SUCCESS);
}