#include <stdio.h>
#include <stdlib.h>

/* This program generate a 3 random numbers between 1 and 10 */

int main(int argc, char *argv[]) {
	int i;
	for (i=0;i<3;i++){
		printf ("\nNumber: %d ",(rand() % 10)+1);
	}
	return 0;
}
