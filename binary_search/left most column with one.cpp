/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &vec) {
        vector<int> arr = vec.dimensions();
        int n = arr[0] , m = arr[1];
        int ans = 1e8+10;
        for (int i=0;i<n;i++)
        {
            int mini = -1;
            int maxi = m;
            bool flag = 0;
            while(mini+1 < maxi)
            {
                int mid = (mini+maxi)/2;
                if (vec.get(i,mid))
                {
                    flag =1;
                    maxi = mid;
                }
                else
                {
                    mini = mid;
                }
            }
            if (flag)
            {
                ans = min(ans , maxi);
            }

        }
        if (ans!=(1e8+10))
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }
};
