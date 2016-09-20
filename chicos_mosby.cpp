#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long ll;

ll compute_square(ll renglones, ll columnas){
	ll ans, aux, auxcolumnas, auxrenglones;

	ans = 0;
	if(renglones > columnas)
		auxcolumnas = renglones, auxrenglones = columnas;
	else
		auxcolumnas = columnas, auxrenglones = renglones;


	while(1){

		aux = auxcolumnas / auxrenglones;
		ans += aux;
		auxcolumnas -= (aux * auxrenglones);

		renglones = auxrenglones;
		columnas = auxcolumnas;

		if(columnas == 0)
			break;

		if(renglones > columnas)
			auxcolumnas = renglones, auxrenglones = columnas;
		else
			auxcolumnas = columnas, auxrenglones = renglones;
	}

	return ans;
}

int main(){
	ll renglones, columnas;

	while(scanf("%lld %lld",&renglones,&columnas) != EOF)
		printf("%lld\n",compute_square(renglones,columnas));
	
	return 0;
}