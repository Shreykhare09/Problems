//{ Driver Code Starts
//Initial Template for C++

// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // while(n){
        // if(n&1){
        //     n=n>>1;
        //     if(n&1){
        //         return false;
        //     }
        // }
        // n=n>>1;
        // }
        // return true;
        //we perform Right shift on n by 1 bit.
        //then perform AND operation on n and n/2
        //(obtained by right shifting n by 1 bit). 
        //returning true if we get 0 as result otherwise false.
        return (n & (n >> 1)) == 0;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}

// } Driver Code Ends