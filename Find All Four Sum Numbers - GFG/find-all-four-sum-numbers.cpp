//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &a, int target) {
        // Your code goes here
        
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        for(int i=0;i<a.size();i++)
        {
            if(i==0 || (i>0 && a[i]!=a[i-1]))
            {
                long long s1=target-a[i];
                for(int j=i+1;j<a.size();j++)
                {
                    if(j==i+1 || (j>i+1 && a[j]!=a[j-1]))
                    {
                        int lo=j+1,hi=a.size()-1;
                        long long s2=s1-a[j];
                        while(lo<hi)
                        {
                            if(a[lo]+a[hi]==s2)
                            {
                                vector<int>arr;
                                arr.push_back(a[i]);
                                arr.push_back(a[j]);
                                arr.push_back(a[lo]);
                                arr.push_back(a[hi]);
                                ans.push_back(arr);

                                while(lo<hi && a[lo]==a[lo+1]) lo++;
                                while(lo<hi && a[hi]==a[hi-1]) hi--;

                                lo++;hi--;
                            }
                            else if(a[lo]+a[hi]<s2) lo++;
                            else 
                            hi--;
                        }
                    }
                    
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends