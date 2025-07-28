#include <bits/stdc++.h>
#define int long long
using namespace std;


int f(int n){
	return ((n-1)*(n+4))*(n*n - 3*n + 4)/2;
}



int32_t main(){


	int n; cin>>n;
	for(int i = 1; i <= n; i++)cout<<f(i)<<"\n";


	return 0;
}
