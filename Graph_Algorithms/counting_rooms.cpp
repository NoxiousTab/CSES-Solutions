#include <bits/stdc++.h>
#define int long long
using namespace std;


vector<int> dx = {0, 0, -1, 1};
vector<int> dy = {-1, 1, 0, 0};

void dfs(int i, int j, int n, int m, vector<vector<int>> &grid, vector<vector<bool>> &visited){
	if(i < 0 || j < 0 || j >= m || i >= n){
		return;
	}
	if(grid[i][j] == 0){
		return;
	}
	if(visited[i][j])return;
	visited[i][j] = true;
	for(int k = 0; k < 4; k++){
		int nx = i + dx[k];
		int ny = j + dy[k];
		dfs(nx, ny, n, m, grid, visited);
	}
}


int32_t main(){


	int n; int m; cin>>n>>m;
	// this is the same as finding the number of connected components (or number of islands), just map # to 0 and . to 1
	vector<vector<int>> grid(n, vector<int>(m));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			char c; cin>>c;
			grid[i][j] = (c == '#' ? 0 : 1);
		}
	}
	int res = 0;
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(grid[i][j] == 1 && !visited[i][j]){
				++res;
				dfs(i, j, n, m, grid, visited);
			}
		}
	}

	cout<<res;


	return 0;
}
