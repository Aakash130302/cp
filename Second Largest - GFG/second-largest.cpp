//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int m1=arr[0],m2=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>m1)
	        {
	            m2=m1;
	            m1=arr[i];
	        }
	        else if(arr[i]!=m1 && arr[i]>m2)
	        {
	            m2=arr[i];
	        }
	    }
	    if(m2<0) return -1;
	    return m2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends