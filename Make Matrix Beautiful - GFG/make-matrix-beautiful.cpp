//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int s=0;
        vector<int>row,col;
        bool rowr=false,colc=false;
        for(int i=0;i<n;i++){
            int sum=0,suc=0;
            for(int j=0;j<n;j++)
            {
                sum+=matrix[i][j];
                suc+=matrix[j][i];
            }
            row.push_back(sum);
            col.push_back(suc);
            if(sum>s){
                rowr=true;
                s=sum;
                colc=false;
            }
            if(suc>s){
                colc=true;
                s=suc;
                rowr=false;
            }
        }
        // for(auto x:col)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        int ans=0;
        if(colc){
            for(int i=0;i<n;i++)
            {
                ans+=(s-col[i]);
            }
        }
        else if(rowr){
            for(int i=0;i<n;i++){
                ans+=(s-row[i]);
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends