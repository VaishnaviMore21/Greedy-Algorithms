class Solution {
public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        string ans = "";
        string temp = "";
        
        for (int i = str.length() - 1; i >= 0; i--) {
            if (str[i] == '.') {
                reverse(temp.begin(), temp.end());
                ans += temp; // Concatenate reversed word
                ans.push_back('.'); // Add the dot
                temp = ""; // Reset temp for the next word
            } else {
                temp.push_back(str[i]); // Build the current word
            }
        }

        // Handle the last word (after the last dot)
        reverse(temp.begin(), temp.end());
        ans += temp;

        return ans; // Return the final result
    }
};
