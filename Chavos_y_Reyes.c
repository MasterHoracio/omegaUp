#include <stdio.h>
#define MAX 30005

int MEM[MAX];

void compute(){
	MEM[0] = 1;
	for(int i = 1; i < MAX; i++)
		MEM[i] = i + MEM[i - 1];
}

int main(){
	int N, Q, K, I, D, SUM;
	compute();
	while(scanf("%d %d %d",&N,&Q,&K) != EOF){
		for(int i = 0; i < Q; i++){
			scanf("%d %d",&I,&D);
			SUM = MEM[D] - MEM[I - 1];
			if(SUM > K)
				printf("Chavos :)\n");
			else if(SUM < K)
				printf("Rey :(\n");
			else
				printf("Tablas\n");
		}
	}
	return 0;
}