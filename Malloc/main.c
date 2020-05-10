#include <stdio.h>
#include <stdlib.h>

/* This program is a malloc exemple, read 3 integers numbers and do a dynamic save, and print all values */

int main(int argc, char *argv[]){
	int *t,i;
	t = malloc(sizeof(int)*3);
	for(i=0;i<3;i++){
		printf("Enter a integer number: ");
		scanf("%d",&t[i]);
	}
	for(i=0;i<3;i++){
		printf("\n%d",t[i]);
	}
	free(t);
	return 0;
}
