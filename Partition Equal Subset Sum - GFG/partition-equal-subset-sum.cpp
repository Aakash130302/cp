//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int fun(int arr[],int N,int ind,int sum,vector<vector<int>>&dp)
    {
        if(ind==0) return (arr[0]==sum);
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int notTake=fun(arr,N,ind-1,sum,dp);
        int take=0;
        if(sum>=arr[ind])
        take=fun(arr,N,ind-1,sum-arr[ind],dp);
        
        return dp[ind][sum]=(take | notTake);
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int s=0;
        for(int i=0;i<N;i++) s+=arr[i];
        if(s%2==1) return 0;
        vector<vector<int>>dp(N,vector<int>(s+1,-1));
        return fun(arr,N,N-1,s/2,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends