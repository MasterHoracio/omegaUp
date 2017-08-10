#include <cstdio>
#include <cmath>

using namespace std;

typedef long long int lld;

lld findSum(lld a, lld b){
	lld n_numbers = (b - a) + 1, pareja, solo;

	pareja = n_numbers / 2;
	solo = n_numbers % 2;

	return (pareja * (a + b)) + (solo * ((b + a)/2) );
}

int main(){
	lld n, a, b;

	scanf("%lld",&n);

	a = ((n * (n - 1))/2) + 1;
	b = a + n - 1;

	printf("%lld\n",findSum(a, b) - findSum(a - (n - 1), a - 1));

	return 0;
}