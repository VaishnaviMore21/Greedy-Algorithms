N meetings in one room
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool cmp(pair<int,int> a, pair<int,int> b) {
        return a.second < b.second;
    }

    int maxMeetings(int n, int start[], int end[]) {
        vector<pair<int,int>> meetings;

        // Create a vector of pairs (start, end)
        for (int i = 0; i < n; i++) {
            meetings.push_back(make_pair(start[i], end[i]));
        }

        // Sort meetings based on their end time
        sort(meetings.begin(), meetings.end(), cmp);

        int count = 1; // At least one meeting can be attended
        int ansEnd = meetings[0].second;

        // Iterate through the sorted meetings
        for (int i = 1; i < n; i++) {
            if (meetings[i].first > ansEnd) {
                count++;
                ansEnd = meetings[i].second; // Update the end time
            }
        }
        return count;
    }
};
   



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
