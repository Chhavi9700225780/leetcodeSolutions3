int first(vector<int>& arr, int n, int k){
    int s=0;
    int e = arr.size() -1;
    int ans =-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid]>k){
            e = mid -1;
        }
        else{
            s=mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int last(vector<int>& arr, int n, int k){
    int s=0;
    int e = arr.size() -1;
    int ans =-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            s = mid +1;
        }
        else if(arr[mid]>k){
            e = mid -1;
        }
        else{
            s=mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    }

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int , int>p;
    p.first = first(arr , n, k);
    p.second = last(arr, n, k);
    return p;
}
