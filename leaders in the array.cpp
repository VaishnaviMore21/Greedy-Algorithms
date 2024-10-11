class Solution {
    // Function to find the leaders in the array.
    static ArrayList<Integer> leaders(int n, int arr[]) {
        // Your code here
        ArrayList<Integer> result = new ArrayList<>();
        
        
        for (int i = 0; i < n; i++) {
            int j;
          
            // Check elements to the right
            for (j = i + 1; j < n; j++) {
              
                // If a larger element is found
                if (arr[i] < arr[j])
                    break;
            }
            
            // If no larger element was found
            if (j == n)
                result.add(arr[i]);
        }
        
        return result;
    
}}
