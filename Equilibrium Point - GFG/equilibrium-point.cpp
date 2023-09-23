//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long int sum=0;
        if(n==1)
        return n;
        for(int i=0;i<n;i++)
        sum+=a[i];
        long long int sum1=0,sum2;
        sum2=sum;
        for(int i=1;i<n;i++)
        {
            sum1+=a[i-1];
            sum=sum-sum1-a[i];
            // cout<<"sum1="<<sum1<<" sum="<<sum<<" ";
            if(sum==sum1)
            {
                return i+1;
                break;
            }
            else
            sum=sum2;
        }
        return -1;
    }

};



//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends