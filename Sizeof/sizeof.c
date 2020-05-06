#include <stdio.h>
#include <stdlib.h>

/*This program use the sizeof to display all the sizes in memory of the each type of datas*/
int main(){
	printf("Char:       %li", sizeof(char));
	printf("\nShort:      %li", sizeof(short));
	printf("\nInt:        %li", sizeof(int));
	printf("\nLong int:   %li", sizeof(long int));
	printf("\nLong:       %li", sizeof(long));
	printf("\nFloat:      %li", sizeof(float));
	printf("\nDouble:     %li", sizeof(double));
	printf("\nLong Double %li", sizeof(long double));
	
	return 0;
}
