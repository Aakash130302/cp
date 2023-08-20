//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int first=-1,last=-1;
	    int low=0,high=n-1;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        if(arr[mid]==x)
	        {
	            if(arr[mid-1]==x)
	            high=mid-1;
	            else
	            {
	                first=mid;
	                break;
	            }
	        }
	        else if(arr[mid]>x)
	        high=mid-1;
	        else
	        low=mid+1;
	    }
	    low=0,high=n-1;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        if(arr[mid]==x)
	        {
	            if(mid+1<n && arr[mid+1]==x)
	            low=mid+1;
	            else
	            {
	                last=mid;
	                break;
	            }
	        }
	        else if(arr[mid]>x)
	        high=mid-1;
	        else
	        low=mid+1;
	    }
	    if((last!=-1 && first!=-1)) return (last-first+1);
	    return 0;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends