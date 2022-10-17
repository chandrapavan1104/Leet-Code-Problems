//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:

    int rec(int n){
        if(n == 0 || n == 2)
            return 1;
        int s = 0;
        for(int i=0;i<=n-2; i+=2)
            s += rec(i)*rec(n-2-i);
        return s;
    }
    int count(int N){
        // code here
        return rec(N);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends