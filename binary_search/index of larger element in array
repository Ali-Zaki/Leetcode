/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     // Compares the sum of arr[l..r] with the sum of arr[x..y] 
 *     // return 1 if sum(arr[l..r]) > sum(arr[x..y])
 *     // return 0 if sum(arr[l..r]) == sum(arr[x..y])
 *     // return -1 if sum(arr[l..r]) < sum(arr[x..y])
 *     int compareSub(int l, int r, int x, int y);
 *
 *     // Returns the length of the array
 *     int length();
 * };
 */

class Solution {
public:
    int getIndex(ArrayReader &a) {
		int n = a.length();
		int mini = 0;
		int maxi = n-1;
		while(mini < maxi)
		{
			int mid = (mini+maxi)/2;
			int mid1 = mid -1;
			int mid2 = mid+1;
			if ((maxi - mini +1) %2==0)
			{
				mid1 = mid;
				mid2 = mid+1;
			}

			int ans = a.compareSub(mini,mid1,mid2,maxi);

			if (ans==1)
			{
				maxi = mid;
			}
			else if (ans == -1)
			{
				mini = mid+1;
			}
			else
			{
				return mid;
			}
		}
			return mini;
	}

};
