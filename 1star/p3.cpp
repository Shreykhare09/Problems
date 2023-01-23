//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // n: input to count the number of set bits
    // Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            int j=i;
            while (j)
            {
                j = (j & (j - 1));
                res++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    // int t;
    // cin >> t;   // input testcases
    // while (t--) // while testcases exist
    // {
        int n;
        cin >> n; // input n
        Solution ob;
        cout << ob.countSetBits(n) << endl;
    // }
    return 0;
}

// } Driver Code Ends