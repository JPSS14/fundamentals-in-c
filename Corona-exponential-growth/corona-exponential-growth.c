#include <stdio.h>
#include <stdlib.h>

int main(){
	float n_exposed=30, chance_contagion=0.002, n_cases=1;
	int i;
	for (i=0;i<75;i++){
		if(i%4==0){
			n_cases += n_cases*(1+n_exposed*chance_contagion);
			n_exposed-=n_exposed*0.028;
		}
		printf("Dia %d  = %.0f \n",i+1,n_cases);
	
	}
	printf("\n\nTotal = %.0f\n",n_cases);
	return 0;
}
