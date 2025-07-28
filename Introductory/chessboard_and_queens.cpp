#include <bits/stdc++.h>
#define int long long
using namespace std;


void backtrack(vector<vector<char>> &arr, int row, vector<bool> &occCol, vector<bool> &occPrim, vector<bool> &occSec, int &cnt){
	if(row == 8){
		++cnt;
		return;
	}

	for(int i = 0; i < 8; i++){
		if(arr[row][i] == '*' || occCol[i] || occPrim[row - i + 8] || occSec[row + i]){
			continue;
		}
		occCol[i] = occPrim[row - i + 8] = occSec[row + i] = true;
		backtrack(arr, row + 1, occCol, occPrim, occSec, cnt);
		occCol[i] = occPrim[row - i + 8] = occSec[row + i] = false;
	}

}

int32_t main(){

	int n = 8;
	vector<vector<char>> arr(n, vector<char>(n));
	for(int i = 0; i < n; i++)for(int j = 0; j < n; j++)cin>>arr[i][j];

	vector<bool> occCol(10, false);
	vector<bool> occPrim(20, false);
	vector<bool> occSec(20, false);
	int ans = 0;

	backtrack(arr, 0, occCol, occPrim, occSec, ans);
	cout<<ans;


	return 0;
}
