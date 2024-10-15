class Solution {
    static int canReach(int[] A, int N) {
        // code here
        int  maxIndex=0;
        for(int i=0;i<N;i++)
        {
            if(i>maxIndex)
            {
                return 0;
            }
            maxIndex=Math.max(maxIndex,i+A[i]);
        }
        return 1;
    }
};
