//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
    public:
    int lastSeenElement(int arr[], int n)
    {
        // Complete the function
        int ans=0,val=INT_MAX;
        unordered_map<int,int>st;
        for(int i=0;i<n;i++)
        {
            st[arr[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(st[arr[i]]<=val){
                val=st[arr[i]];
                ans=arr[i];
            }
        }
        return ans;
        
    }
 
};

//{ Driver Code Starts.

 
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    int a[n];
    
    for(int i=0;i<n;i++)
    cin >> a[i];
    Solution ob;
    cout << ob.lastSeenElement(a, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends