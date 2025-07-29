#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){


	int n; cin>>n;
	vector<int> arr(n);
	for(auto &i : arr)cin>>i;
	int ans = 0;
	set<int> memo;
	int l = 0;
	for(int i = 0; i < n; i++){
		while(memo.count(arr[i])){
			memo.erase(arr[l]);
			++l;
		}
		memo.insert(arr[i]);
		ans = max(ans, (int)memo.size());
	}
	cout<<ans;

	return 0;
}
