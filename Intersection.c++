#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int> ans;
	for(int i=0; i<n; i++){
		int e = arr1[i];
		for(int j=0; j<m; j++){
			if(e==arr2[j]){
				ans.push_back(e);
				arr2[j] = -2;
				break;
			}
		}
	}
	return ans;
}