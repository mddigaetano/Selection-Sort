//Author: amedeo39

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void SelectionSort(int v[],int n){
    int i,min,j,scambio;
    
    for(i=0;i<n;i++){
        min=i;
        
        for(j=i+1;j<n;j++){
            if(v[j]<v[min]){
                min=j;
            }
        }
        
        scambio=v[i];
        v[i]=v[min];
        v[min]=scambio;
    }
}

int main(int argc, char** argv) {
    int i,v[N];
    
    srand(time(NULL));
    
    for(i=0;i<N;i++){
        v[i]=(rand()%100)+1;
        printf("Vettore[%d]: %d\n",i,v[i]);
    }
    
    SelectionSort(v,N);
    
    for(i=0;i<N;i++){
        printf("\nVettore[%d]: %d",i,v[i]);
    }

    return (EXIT_SUCCESS);
}

