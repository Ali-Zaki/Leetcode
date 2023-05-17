/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
int search(const ArrayReader& reader, int target) {
        int mini = 0 , maxi = 1e4+10;
        while(mini <= maxi ){
            int mid = (mini+maxi)/2;
            if (reader.get(mid) == target){
                return mid;
            }
            else if (reader.get(mid) > target){
                maxi = mid-1; 
            }
            else{
                mini = mid+1;
            }
        }
        return-1;
    }

};
