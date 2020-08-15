#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int h[10], m[10], s[10], ms[10], v[10],i,j,piloto[10];
	float t[10], d=4309;
	srand( (unsigned)time(NULL) );
	for (i=0;i<10;i++){
			h[i]=0;
			m[i]=0;
			s[i]=0;
			ms[i]=0;
			v[i]=0;
			t[i]=0;
			piloto[i] = 100+i;
		}
	for (j=0;j<10;j++){
		for(i=0;i<4;i++){
			v[i]=222+(rand() % 10);
			t[i]+= (d/v[i])*3600;
			while(t[i]>=1000){
				t[i]-=1000;
				ms[i]=t[i];
				s[i]++;
			};
			while(s[i]>=60){
			s[i]-=60;
			m[i]++;
			};
			while(m[i]>=60){
				m[i]-=60;
				h[i]++;
			};
			printf("%d %d h . %d m . %d s . %d ms %d\n",piloto[i], h[i], m[i], s[i], ms[i], v[i]);
		}
		printf ("\n\n");
	}
	return 0;
}
