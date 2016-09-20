#include <stdio.h>

int main(){
	int cases, year;
	scanf("%d",&cases);
	while(cases--){
		scanf("%d",&year);
		if(year % 4 == 0){
			if(year % 100 == 0){
				if(year % 400 == 0){
					printf("S\n");
				}else{
					printf("N\n");
				}
			}else{
				printf("S\n");
			}
		}else{
			printf("N\n");
		}
	}
	return 0;
}