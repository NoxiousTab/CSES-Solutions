#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){


	string s; cin>>s;
	int n = s.size();
	unordered_map<char, int> memo;
	for(auto &i : s)memo[i]++;
	// Atmost ONE character is allowed an odd frequency, which we shall place in the middle
	int oddfreq = 0;
	for(auto &i : memo){
		oddfreq += i.second%2;
	}
	if(oddfreq > 1){
		cout<<"NO SOLUTION\n";
		return 0;
	}
		string res = "";
		string ans = "";
		for(auto &i : memo){
			if(i.second%2){
				for(int j = 0; j < i.second; j++){
					res += i.first;
				}
			}else{
				for(int j = 0; j < i.second/2; j++){
					ans += i.first;
				}
			}
		}
	
	string temp = ans; reverse(temp.begin(), temp.end());
	res = res + temp; ans = ans + res;

	cout<<ans<<"\n";

	return 0;
}
