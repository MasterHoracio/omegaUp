#include <cstdio>
#include <algorithm>

#define MOD 1000000
#define MAX 1010

using namespace std;

typedef long long ll;

ll save[MAX];

ll compute(int tam){

	if(save[tam] != -1)
		return save[tam];

	if(tam == 1)
		return 1;

	save[tam] = 0;
	for(int i = 1; i < tam; i++)
		save[tam] = (save[tam]%MOD) + (compute(i)%MOD) * (compute(tam-i)%MOD);

	return save[tam]%MOD;
}

int main(){
	int n;

	scanf("%d",&n);
	fill(save, save+MAX, -1);
	printf("%lld\n",compute(n+1));

	return 0;
}
