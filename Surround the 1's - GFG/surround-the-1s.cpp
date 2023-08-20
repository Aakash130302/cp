//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int c=0;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==1)
                {
                    int z=0;
                    for(int k=-1;k<=1;k++)
                    {
                        for(int l=-1;l<=1;l++)
                        {
                            int newr=i+k;
                            int newc=j+l;
                            if(newr>=0 && newc>=0 &&newr<n && newc<m && matrix[newr][newc]==0)
                            {
                                z++;
                            }
                        }
                    }
                    if(z>0 && z%2==0) c++;
                }
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends