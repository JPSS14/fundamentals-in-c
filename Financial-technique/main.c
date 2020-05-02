#include <stdio.h>
#include <stdlib.h>

/* this program is my presonal financial technique, take a money value and organize in some parts in fives pass
first pass take the tithe: 10% of the total value
second pass share the money in two parts 60% to guard and 40% to spend
tird pass the double fork, take 20% of guard and 20% of spend, the result is the value of costs
fourth pass the double fork, take 10% of guard and 10% of spend, the result is the value of investments
fiveth pass the gift, take 20% of the spend */

int main(int argc, char *argv[]) {
	float spend, guard, salary, investments, gift, costs, tithe;
	
	printf("Enter the value of your salary: ");
	scanf("%f",&salary);
	tithe=salary*0.1;
	salary-=salary*0.1;
	guard=salary*0.6;
	spend=salary*0.4;
	costs=(guard*0.2)+(spend*0.2);
	guard-=guard*0.2;
	spend-=spend*0.2;
	investments=(guard*0.1)+(spend*0.1);
	guard-=guard*0.1;
	spend-=spend*0.1;
	gift=spend*0.2;
	spend-=spend*0.2;
	printf("\nTithe:       R$ %.2f",tithe);
	printf("\nGuard:       R$ %.2f",guard);
	printf("\nSpend:       R$ %.2f",spend);
	printf("\nCost:        R$ %.2f",costs);
	printf("\nInvestments: R$ %.2f",investments);
	printf("\nGift:        R$ %.2f",gift);
	return 0;
}
