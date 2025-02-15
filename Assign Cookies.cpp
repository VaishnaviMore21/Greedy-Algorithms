//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        // Your Code goes here.
        
        int n=greed.size();
        int m=cookie.size();
        int l=0;
        int r=0;
         sort(greed.begin(), greed.end());

    // Sort the cookie sizes in ascending
    // order to use the smallest cookies first
    sort(cookie.begin(), cookie.end());

      
        while(l<m && r<n)
        {
            if(greed[r]<=cookie[l])
            {
                 r++;
            }
              l++;
        }
         return r;
    }
};
