//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int n=0;
        for(int i=0;i<nums.size();i++)
        n=n^nums[i];
        
        int setbit=(n& ~(n-1));
        int r1=0,r2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(setbit & nums[i])
            r1=r1^nums[i];
            else
            r2=r2^nums[i];
        }
        if(r1<r2)
        return {r1,r2};
        return {r2,r1};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends