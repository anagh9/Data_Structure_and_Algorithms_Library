// Link : https://leetcode.com/problems/set-matrix-zeroes/
/*
Given an m x n matrix. If an element is 0, set its entire row and column to 0. Do it in-place

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

[1 1 1]        [1 0 1]
[1 0 1]  ==>   [0 0 0]
[1 1 1]		   [1 0 1]

 i/p              o/p

 Example 2 : Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(vector<vector<int> >&A ) {
	int m = A.size(), n = A[0].size();
	int r1 = 0, c1 = 0;
	for (int i = 0; i < n; i++) {
		if (A[0][i] == 0) {
			r1 = 1;
			break;
		}
	}
	for (int i = 0; i < m; i++) {
		if (A[i][0] == 0) {
			c1 = 1;
			break;
		}
	}
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			if (A[i][j] == 0) {
				A[i][0] = 0;
				A[0][j] = 0;
			}
		}
	}
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			if (A[i][0] == 0 || A[0][j] == 0)
				A[i][j] = 0;
		}
	}
	if (r1 == 1) {
		for (int i = 0; i < n; i++)
			A[0][i] = 0;
	}
	if (c1 == 1) {
		for (int i = 0; i < m; i++)
			A[i][0] = 0;
	}
}


int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int> > x(n, vector<int> (m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> x[i][j];
		}

	}

	solution(x);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}



	return 0;
}