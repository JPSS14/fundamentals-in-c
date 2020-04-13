#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* BUSCA BINÁRIA */

int main(int argc, char *argv[]) {
	int vetor[10], chave, i=0,tam=10;
	for (i=0;i<10;i++){
		vetor[i]=(i+1)*2;
		printf("%d ",vetor[i]);
	}
	printf("\nEnter an even number between 2 and 20: ");
	scanf("%d",&chave);
	int sup=tam-1, inf=0,meio;
	LARGE_INTEGER inicio, fim, freq;
	QueryPerformanceCounter(&inicio);
	while(inf<=sup){
		meio=(sup+inf)/2;
		if(vetor[meio]==chave){
			printf("\nThe number is in position %d",meio);
			QueryPerformanceCounter(&fim);
			float tempo_total = (float)(fim.QuadPart - inicio.QuadPart)/freq.QuadPart;
			printf("\nTime: %f ",tempo_total);
			return meio;
		}
		if (vetor[meio]>chave){
			sup=meio-1;
		}else{
			inf=meio+1;
		}
	}
	printf("Number not found!");
	return 0;
}
