#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){


	string s; cin>>s;
	int ans = 0;
	int n = s.size();
	for(int i = 0; i < n; i++){
		int curr = 1;
		char c = s[i];
		int j = i + 1;
		while(j < n && s[j] == c){
			++j;
			++curr;
		}
		i = j - 1;
		ans = max(ans, curr);
	}
	cout<<ans;


	return 0;
}
