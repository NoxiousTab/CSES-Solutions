#include <bits/stdc++.h>
#define int long long
using namespace std;


int g(int n){
	return n^(n>>1);
}

string getbin(int n, int maxi){
	string res = "";
	for(int i = 0; i < maxi; i++)res+='0';
	int ptr = 0;
	while(n){
		res[ptr++] = (n%2 ? '1' : '0');
		n/=2;
	}
	reverse(res.begin(), res.end());
	return res;
}


int32_t main(){


	int n; cin>>n;

	// there will obviously be 2^n such strings
	// the way to generate these strings are that
	for(int i = 0; i < (1ll << n); i++){
		cout<<getbin(g(i), n)<<"\n";
	}

	return 0;
}
