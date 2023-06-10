class Solution {
public:
    int smallestDistancePair(vector<int> nums, int k) {
        vector<int> an(1000001);
        for (int i=0;i<nums.size();i++){
            for (int j=i+1;j<nums.size();j++){
				an[abs(nums[j]-nums[i])]+=1;
            }
        }
        int p=0;
        for(int i=0;;i++)
        {
            p+=an[i];
            if(p>=k)
            {
                return i;
            }
        }
    }
};
