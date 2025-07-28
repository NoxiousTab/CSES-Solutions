#include <bits/stdc++.h>
#define int long long
using namespace std;



int recurse(int i, vector<int> &arr, int g1, int g2, int n){
	if(i >= n){
		return abs(g1 - g2);
	}
	int puting1 = recurse(i + 1, arr, g1 + arr[i], g2, n);
	int puting2 = recurse(i + 1, arr, g1, g2 + arr[i], n);
	return min(puting1, puting2);
}



int32_t main(){


	int n; cin>>n;
	vector<int> arr(n); for(auto &i : arr)cin>>i;

	// at every index, we can either put it in g1 or g2, we try all combinations and take the minimum
	// its just recursion
	cout<<recurse(0, arr, 0, 0, n)<<"\n";

	return 0;
}
