
// Write your code here.
// Return the position of K in ARR else return -1.
int getpivot(vector<int> &arr, int n) {
  int s = 0;
  int e = n - 1;
  int m = s = (e - s) / 2;
  while (s <= e) {
    if (arr[m] >= arr[0]) {

      s = m + 1;
    } else {
      e = m;
    }
    m = s = (e - s) / 2;
  }
  return s;
    }
 int binary(vector<int>& arr, int s, int e, int k){
     int start=s;
     int end= e;
     int mid = start+(end-start)/2;
     while(start<=end){
         if(arr[mid]==k){
             return mid;
         }
         else if(k>arr[mid]){
             start=mid+1;
         }
         else{
             end=mid-1;
         }
       mid = start+(end-start)/2;
     }
     return -1;
 }
 int search(vector<int> &arr, int n, int k) {
    int pivot = getpivot(arr, n);
    if(k>=arr[pivot]&& k<=arr[n-1]){
        return binary(arr, pivot , n-1, k);}
          else{
        return binary(arr, 0 , pivot, k);
        }
        }
        
        