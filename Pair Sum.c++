#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   for(int i=0; i<arr.size()-1; i++){
      for(int j=i+1; j<arr.size(); j++){
         if(arr[i]+arr[j]==s){
         vector<int> temp;
         temp.push_back(min(arr[i] , arr[j]));
          temp.push_back(max(arr[i] , arr[j]));
          ans.push_back(temp);

         }
      }
   }
   sort(ans.begin() , ans.end());
   return ans;
}

//===============Geeks of Geeks==============
  
  // Your code goes here  
        vector<pair<int,int>> ans;
   for(int i=0; i<N; i++){
      for(int j=0; j<M; j++){
         if(A[i]+B[j]==X){
        
          ans.push_back({A[i],B[j]});

         }
      }
   }
   sort(ans.begin() , ans.end());
   return ans;