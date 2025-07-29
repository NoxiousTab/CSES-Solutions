#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){


	int n; cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)cin>>arr[i];
	sort(arr, arr + n);


	int res = 1;
	for(int i = 0; i < n; i++){
		if(res < arr[i]){
			break;
		}else res += arr[i];
	}
	cout<<res;


	return 0;
}
