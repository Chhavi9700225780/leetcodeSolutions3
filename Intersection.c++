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
//Two Pointer approach
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int> ans;
	int i=0, j=0;
	while(i<n && j<m){
		if(arr1[i] == arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i] < arr2[j]){
           i++;
		}
		else{
			j++;
		}
	}
	return ans;
}