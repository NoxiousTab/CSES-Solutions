#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){


	int n; cin>>n;
	int arr[n]; for(int i = 0; i < n; i++)cin>>arr[i];

	set<int> memo(arr, arr + n);
	cout<<memo.size()<<"\n";


	return 0;
}
