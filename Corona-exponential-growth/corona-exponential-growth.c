#include <stdio.h>
#include <stdlib.h>

int main(){
	float n_exposed=18, chance_contagion=0.028, n_cases=1, result=0;
	int i;
	for (i=0;i<30;i++){
		n_cases += n_cases*(1+n_exposed*chance_contagion);
		printf("Dia %d = %.0f\n",i+1,n_cases);
	}
	printf("\n\nTotal = %.0f\n",n_cases);
	return 0;
}
