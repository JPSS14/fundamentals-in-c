#include <stdio.h>
#include <stdlib.h>

/* Example of pointer function*/

int main(int argc, char *argv[]) {
	int x,*p,**pp,***ppp;
	// *p is a pointer, pointer save the addres of a variable, the * represents that variable is a pointer
	// **pp is a pointer of pointer, this pointer save the addres of the other pointer
	// ***ppp is a pointer of pointer of pointer, this pointer save the addres of the other pointer, and
	// the other pointer have a addres of the variable
	x=10;
	// this form the pointer *p gain the addres of the x
	p=&x;
	// this form the pointer **pp gain the addres of the pointer *p
	pp=&p;
	// this form the pointer ***ppp gain the addres of the pointer **pp
	ppp=&pp;
	printf("P\nThe value of x is: %d\n",x);
	printf("The addres of x is: %x\n",&x);
	printf("The value of *p is: %x\n",p);
	printf("The addres of *p is: %x\n",&p);
	
	//if you want change the x value by the pointer *p?
	*p= *p + 5;
	printf("The value of x is: %d\n\n\n",x);
	
	printf("PP\nThe value of x is: %d\n",x);
	printf("The addres of x is: %x\n",&x);
	printf("The value of **pp is: %x\n",pp);
	printf("The addres of **pp is: %x\n",&pp);
	
	//if you want change the x value by the pointer **pp?
	**pp= **pp + 5;
	printf("The value of x is: %d\n\n\n",x);
	
	printf("PPP\nThe value of x is: %d\n",x);
	printf("The addres of x is: %x\n",&x);
	printf("The value of ***ppp is: %x\n",ppp);
	printf("The addres of ***ppp is: %x\n",&ppp);
	
	//if you want change the x value by the pointer ***ppp?
	***ppp= ***ppp + 5;
	printf("The value of x is: %d\n\n\n",x);
	
	printf("The value of x is: %d\n",x);
	printf("The addres of x is: %x\n",&x);
	printf("The value of *p is: %x\n",p);
	printf("The addres of *p is: %x\n",&p);
	printf("The value of **pp is: %x\n",pp);
	printf("The addres of **pp is: %x\n",&pp);
	printf("The value of ***ppp is: %x\n",ppp);
	printf("The addres of ***ppp is: %x\n",&ppp);
	
	return 0;
}
