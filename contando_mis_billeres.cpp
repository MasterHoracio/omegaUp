#include <cstdio>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){
	char number[100];
	string str;
	long long len, count, ans;

	scanf("%s",number);
	len = strlen(number);
	ans = count = 0;
	str = "";

	for(int i = len - 1; i >= 0; i--){
		count++;
		if(count >= 7)
			str += number[i];
		else
			ans += number[i] - '0';
	}
	reverse(str.begin(),str.end());
	ans += atoi(str.c_str());

	printf("%lld\n",ans);

	return 0;
}