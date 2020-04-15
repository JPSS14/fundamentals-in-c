#include <stdio.h>
#include <stdlib.h>

/*Do a program of presidential election, with thre candidates and 10 votes, each candidate have a number
more two options white and null, white -> the cadidate tha have more votes gain this vote, if two cadidates equals we 
have a second round between two candidates, if another equals other round, null -> nobody gain this vote
Finish the election ranking the cadidates, if equals the we have the new round*/

int main(int argc, char *argv[]){
	int candidate1=0, candidate2=0, candidate3=0, white=0, i, op, null=0,r=0;
	
	for(i=0;i<10;i++){
			
			printf("1 - Candidate 1");
			printf("\n2 - Candidate 2");
			printf("\n3 - Candidate 3");
			printf("\n4 - White");
			printf("\n0 - Null");
			printf("\nEnter a option: ");
			
			scanf("%d",&op);
			system("cls");
			
			switch (op){
				case 1: candidate1++; break;
				case 2: candidate2++; break;
				case 3: candidate3++; break;
				case 4: white++; break;
				case 0: null++; break;
				default: null++;
			}
		}
	if ((candidate1==candidate2)&&(candidate2==candidate3)){
		while((candidate1==candidate2)&&(candidate2==candidate3)){
			r++;
			for(i=0;i<10;i++){
				printf("New round %d:",r);
				printf("\n1 - Candidate 1");
				printf("\n2 - Candidate 2");
				printf("\n3 - Candidate 3");
				printf("\n4 - White");
				printf("\n0 - Null");
				printf("\nEnter a option: ");
				
				scanf("%d",&op);
				system("cls");
				
				switch (op){
					case 1: candidate1++; break;
					case 2: candidate2++; break;
					case 3: candidate3++; break;
					case 4: white++; break;
					case 0: null++; break;
					default: null++;
				}
			}
		}
	}
	printf ("Candidato 1 = %d \nCandidato 2 = %d \nCandidato 3 = %d \nWhite = %d \nNull = %d\n",candidate1,candidate2,candidate3,white,null);
	if ((candidate1>candidate3)&&(candidate2>candidate3)&&(candidate1==candidate2)){
		while(candidate1==candidate2){
			system("cls");
			printf ("Candidato 1 = %d \nCandidato 2 = %d \nWhite = %d \nNull = %d\n",candidate1,candidate2,white,null);
			for(i=0;i<10;i++){
				printf("New round");
				printf("\n1 - Candidate 1");
				printf("\n2 - Candidate 2");
				printf("\n4 - White");
				printf("\n0 - Null");
				printf("\nEnter a option: ");
				
				scanf("%d",&op);
				system("cls");
				
				switch (op){
					case 1: candidate1++; break;
					case 2: candidate2++; break;
					case 4: white++; break;
					case 0: null++; break;
					default: null++;
				}
			}
		}
	}
	if ((candidate1>candidate2)&&(candidate3>candidate2)&&(candidate1==candidate3)){
		while(candidate1==candidate3){
			system("cls");
			printf ("Candidato 1 = %d \nCandidato 3 = %d \nWhite = %d \nNull = %d\n",candidate1,candidate3,white,null);
			for(i=0;i<10;i++){
				printf("New round");
				printf("\n1 - Candidate 1");
				printf("\n2 - Candidate 3");
				printf("\n4 - White");
				printf("\n0 - Null");
				printf("\nEnter a option: ");
				
				scanf("%d",&op);
				system("cls");
				
				switch (op){
					case 1: candidate1++; break;
					case 3: candidate3++; break;
					case 4: white++; break;
					case 0: null++; break;
					default: null++;
				}
			}
		}
	}
	if ((candidate2>candidate1)&&(candidate3>candidate1)&&(candidate2==candidate3)){
		while(candidate2==candidate3){
			system("cls");
			printf ("Candidato 2 = %d \nCandidato 3 = %d \nWhite = %d \nNull = %d\n",candidate2,candidate3,white,null);
			for(i=0;i<10;i++){
				printf("New round");
				printf("\n2 - Candidate 2");
				printf("\n3 - Candidate 3");
				printf("\n4 - White");
				printf("\n0 - Null");
				printf("\nEnter a option: ");
				
				scanf("%d",&op);
				system("cls");
				
				switch (op){
					case 2: candidate2++; break;
					case 3: candidate3++; break;
					case 4: white++; break;
					case 0: null++; break;
					default: null++;
				}
			}
		}
	}
	system("cls");
	printf("Ranking: ");
	if ((candidate1>candidate2)&&(candidate1>candidate3)&&(candidate2>candidate3)){
		candidate1+=white;
		printf("\n1st - Candidate 1: %d votes (Winner)",candidate1);
		printf("\n2nd - Candidate 2: %d votes",candidate2);
		printf("\n3rd - Candidate 3: %d votes",candidate3);
		printf("\nWhite: %d votes",white);
		printf("\nNull: %d votes",null);
	}
	else if ((candidate1>candidate2)&&(candidate1>candidate3)&&(candidate3>candidate2)){
		candidate1+=white;
		printf("\n1st - Candidate 1: %d votes (Winner)",candidate1);
		printf("\n2nd - Candidate 3: %d votes",candidate3);
		printf("\n3rt - Candidate 2: %d votes",candidate2);
		printf("\nWhite: %d votes",white);
		printf("\nNull: %d votes",null);
	}
	else if ((candidate2>candidate1)&&(candidate2>candidate3)&&(candidate1>candidate3)){
		candidate2+=white;
		printf("\n1st - Candidate 2: %d votes (Winner)",candidate2);
		printf("\n2nd - Candidate 1: %d votes",candidate1);
		printf("\n3rt - Candidate 3: %d votes",candidate3);
		printf("\nWhite: %d votes",white);
		printf("\nNull: %d votes",null);
	}
	else if ((candidate2>candidate1)&&(candidate2>candidate3)&&(candidate3>candidate1)){
		candidate2+=white;
		printf("\n1st - Candidate 2: %d votes (Winner)",candidate2);
		printf("\n2nd - Candidate 3: %d votes",candidate3);
		printf("\n3rt - Candidate 1: %d votes",candidate1);
		printf("\nWhite: %d votes",white);
		printf("\nNull: %d votes",null);
	}
	else if ((candidate3>candidate1)&&(candidate3>candidate2)&&(candidate1>candidate2)){
		candidate3+=white;
		printf("\n1st - Candidate 3: %d votes (Winner)",candidate3);
		printf("\n2nd - Candidate 1: %d votes",candidate1);
		printf("\n3rt - Candidate 2: %d votes",candidate2);
		printf("\nWhite: %d votes",white);
		printf("\nNull: %d votes",null);
	}
	else if ((candidate3>candidate1)&&(candidate3>candidate2)&&(candidate2>candidate1)){
		candidate3+=white;
		printf("\n1st - Candidate 3: %d votes (Winner)",candidate3);
		printf("\n2nd - Candidate 2: %d votes",candidate2);
		printf("\n3rt - Candidate 1: %d votes",candidate1);
		printf("\nWhite: %d votes",white);
		printf("\nNull: %d votes",null);
	} 
	printf ("\n\nCandidato 1 = %d \nCandidato 2 = %d \nCandidato 3 = %d \nWhite = %d \nNull = %d",candidate1,candidate2,candidate3,white,null);
	
	return 0;
}
