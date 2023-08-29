//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {
        // Complete the function
        vector<int>ans;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            while(i<n && arr[i+1]==arr[i]){i++;}
            int mini=arr[i];
            for(int j=i+1;j<n;j++){
                if(arr[j]-mini>0){
                    ans.push_back(n-j);
                    break;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}
// } Driver Code Ends