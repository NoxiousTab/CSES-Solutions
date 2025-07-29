#include <bits/stdc++.h>
#define int long long
using namespace std;


void dfs(int u, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &arr){
	if(visited[u])return;
	visited[u] = true;
	arr.push_back(u);
	for(auto &i : adj[u]){
		if(!visited[i]){
			dfs(i, adj, visited, arr);
		}
	}
}



int32_t main(){


	int n; int m; cin>>n>>m;
	vector<vector<int>> adj(n);
	for(int i = 0; i < m; i++){
		int u, v; cin>>u>>v;
		--u; --v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	// we just wanna find the connected components, then add an edge from any node to any other node in the components
	vector<vector<int>> components;
	vector<bool> visited(n, false);
	for(int i = 0; i < n; i++){
		if(!visited[i]){
			vector<int> temp;
			dfs(i, adj, visited, temp);
			components.push_back(temp);
		}
	}
	cout<<components.size() - 1<<"\n";
	for(int i = 0; i < components.size() - 1; i++){
		cout<<components[i][0] + 1<<" "<<components[i + 1][0] + 1<<"\n";
	}


	return 0;
}
