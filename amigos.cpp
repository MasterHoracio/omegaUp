#include <iostream>
#include <string>
#include <vector>
#include <map>

#define MAX 1010

using namespace std;

map <string,int> mp;
int Matrix[MAX][MAX];

int main(){
	int n, q;
	string str, name_one, name_two;
	while(cin>>n){
		for(int i = 0; i < n; i++){
			cin>>str;
			mp[str] = i;
		}
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin>>Matrix[i][j];
		cin>>q;
		for(int i = 0; i < q; i++){
			cin>>name_one;
			cin>>name_two;
			if(Matrix[mp[name_one]][mp[name_two]] == 1)
				printf("1\n");
			else
				printf("0\n");
		}
		mp.clear();
	}
	return 0;
}