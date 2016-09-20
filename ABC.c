#include <stdio.h>

int main(){
	int num[3], k, value;
	char str[5];
	while(scanf("%d %d %d",&num[0],&num[1],&num[2]) != EOF){
		scanf("%s",str);
		for(int i = 1; i < 3; i++){
			value = num[i];
			for(k = i - 1; k >= 0 && num[k] > value; k--)
				num[k + 1] = num[k];
			num[k + 1] = value;
		}
		for(int i = 0; i < 3; i++){
			if(str[i] == 'A')
				printf("%d",num[0]);
			else if(str[i] == 'B')
				printf("%d",num[1]);
			else
				printf("%d",num[2]);
			if(i != 2)
				printf(" ");
		}printf("\n");

	}
	return 0;
}