#include <cstdio>
#include <algorithm>

#define MAX 1000002

using namespace std;


int main(){
	int N, T, ans;
	int *Cajas;
	while(scanf("%d",&N) != EOF){
		ans = 0;
		Cajas = new int[MAX];
		for(int i = 0; i < N; i++){
			scanf("%d",&T);
			if(Cajas[T] == 0){
				Cajas[T]++;
				++ans;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}