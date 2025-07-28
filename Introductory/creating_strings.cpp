#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){


	string s; cin>>s;
	sort(s.begin(), s.end());
	set<string> memo;
	do{
		memo.insert(s);
	}while(next_permutation(s.begin(), s.end()));
	cout<<memo.size()<<"\n";
	for(auto &i : memo)cout<<i<<"\n";

	return 0;
}
