//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ind,ans;
        ind.push_back(n-1);
        int num=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=num)
            {
                ind.push_back(i);
                num=a[i];
            }
        }
        // for(auto x:ind)
        // cout<<x<<" ";
        // cout<<endl;
        for(int i=ind.size()-1;i>=0;i--)
        {
            ans.push_back(a[ind[i]]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends