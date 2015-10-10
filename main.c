#define N 4
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int n;
    int i = 0;
    float tempoMedio = 0;
    int vet[N]; //Vettore contenente tempi di esecuzione
    float accumulatore; //Vettore contenente tempi di attesa perogni processo.
    int scelta;
   

    // Riempo il vettore con i tempi di esecuzione
    printf("Inserisci %d processi\n",N);
    while(i < N){
        printf("Inserisci il tempo di esecuzione del %d° processo: ",i + 1);
        scanf("%d",&vet[i]);
        i++;
    }
   
    
    //Calcolo il tempo di attesa di ogni processo e lo sposto in un altro vettore.
    printf("Quale algoritmo di scheduling vuoi utilizzare ? \n1) FCFS diretto\n2) FCFS inverso\n");
    scanf("%d",&scelta);
    switch(scelta){
        case 1:
            i = 1;
            while(i < N){
                tempoMedio = tempoMedio + vet[i-1]; 
                accumulatore = accumulatore + tempoMedio;   
                i++;
            }
     
        break;
        
        case 2:
            i = N - 2;
            while(i + 1){
                tempoMedio = tempoMedio + vet[i+1]; 
                accumulatore = accumulatore + tempoMedio;   
                i--;            
            }
        
        break;
        
        default: printf("%d: scelta non valida.",scelta);
            
    }
   
    tempoMedio = accumulatore / N;
    printf("Il tempo medio di attesa e' : %f",tempoMedio);
    
    
    return (EXIT_SUCCESS);
}
