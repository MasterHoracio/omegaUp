#include <stdio.h>

int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		if(n > 8)
			printf("10\n");
		else if(n <= 8 && n >= 4)
			printf("7\n");
		else
			printf("0\n");
	}
}