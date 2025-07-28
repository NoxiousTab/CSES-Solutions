#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){


	int n; cin>>n;
	int tot = n*(n+1)/2;
	if(tot%2 != 0){
		cout<<"NO\n";
	}else{
		set<int> s1, s2;
		for(int i = 1; i <= n; i++)s1.insert(i);
		int x = tot/2;
		for(int i = n; i >= 1; i--){
			if(i <= x){
				x-=i;
				s1.erase(i);
				s2.insert(i);
			}
		}
		cout<<"YES\n";
		cout<<s1.size()<<"\n";
		for(auto &i : s1)cout<<i<<" ";
		cout<<"\n"<<s2.size()<<"\n";
		for(auto &i : s2)cout<<i<<" ";
		
	}


	return 0;
}
