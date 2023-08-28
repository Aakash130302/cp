//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int fun(vector<int>&arr,int low,int high){
        int pivot=low;
        int i=low,j=high;
        while(i<j)
        {
            while(arr[i]<=arr[pivot] && i<=high) i++;
            
            while(arr[j]>arr[pivot] && j>=low) j--;
            
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
    void quickSort(vector<int>&arr,int low,int high){
        if(low<high){
            int partInd=fun(arr,low,high);
            quickSort(arr,low,partInd-1);
            quickSort(arr,partInd+1,high);
        }
    }
    vector<int> sortArr(vector<int>arr, int n){
    //complete the function here
    quickSort(arr,0,n-1);
    return arr;
    }
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}


// } Driver Code Ends