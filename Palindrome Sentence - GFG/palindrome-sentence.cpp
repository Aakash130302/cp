//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	    int start=0,end=s.length()-1;
	    while(start<=end){
	        if(!isalnum(s[start])) start++;
	        else if(!isalnum(s[end])) end--;
	        else{
	            if(tolower(s[start++])!=tolower(s[end--]))
	            return false;
	        }
	    }
	    return true;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends