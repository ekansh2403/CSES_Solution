#include<bits/stdc++.h>
using namespace std;


//Reverse iterate karna hai graph mein 

int find(int x,vector<int>&parent) {
	if (x == parent[x]) return x;
	return parent[x] = find(parent[x],parent);
}
void Union(int x, int y,vector<int>&parent,vector<int>&rank) {
	int x_parent = find(x,parent);
	int y_parent = find(y,parent);

	if (x_parent == y_parent) {
		return;
	}
	if (rank[x_parent] > rank[y_parent]) {
		parent[y_parent] = x_parent;
	}
	else if (rank[y_parent] > rank[x_parent]) {
		parent[x_parent] = y_parent;
	}
	else {
		parent[x_parent] = y_parent;
		rank[y_parent]++;
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
    vector<int>parent;
    vector<int>rank;
	//resize parent and rank vector
	//initialize parent wiht the nodes
	// for(int i=0;i<V;i++){
	//         parent[i]=i;
	//     }




	return 0;
}