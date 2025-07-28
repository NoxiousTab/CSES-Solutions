#include <bits/stdc++.h>
#define int long long
using namespace std;



vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {-1, 1, 0, 0};


void greedycolor(vector<string> &arr){
	int n = arr.size(); int m = arr[0].size();

	// first for each cell we assign its first available color, then we visit its adjacent cells and remove that color from their available colors
	// if at any point we see that the cell has no colors left it means it cannot be done
	map<pair<int, int>, set<char>> memo;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			auto curr = make_pair(i, j);
			for(char k = 'A'; k <= 'D'; k++){
				if(k != arr[i][j]){
					memo[curr].insert(k);
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			auto currP = make_pair(i, j);
			if(memo[currP].size() == 0){
				cout<<"IMPOSSIBLE\n";
				return;
			}
			char currCol = *memo[currP].begin();
			arr[currP.first][currP.second] = currCol;
			for(int k = 0; k < 4; k++){
				int nx = currP.first + dx[k];
				int ny = currP.second + dy[k];
				auto neigh = make_pair(nx, ny);

				if(memo[neigh].find(currCol) != memo[neigh].end()){
					memo[neigh].erase(currCol);
				}
			}
		}
	}

	
	for(auto &i : arr){
		for(auto &j : i){cout<<j;}
		cout<<"\n";
	}


}



int32_t main(){


	int n; int m; cin>>n>>m;

	vector<string> arr(n);
	for(auto &i : arr)cin>>i;

	greedycolor(arr);

	return 0;
}
