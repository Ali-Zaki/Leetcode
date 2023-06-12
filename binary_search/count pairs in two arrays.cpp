class Solution {
public:
    long long countPairs(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        int n = nums1.size();
        for (int i=0;i<n;i++)
            a.push_back(nums1[i]-nums2[i]);
        sort(a.begin(),a.end());
        long long ans = 0; 
        for (int i=0;i<n;i++)
        {
            if (a[i] > 0)
            {
            int ans2 =lower_bound(a.begin(),a.end(),-a[i]+1)-a.begin();
            // w-=a.begin();
            ans+=i-ans2;;
            }
        }
        return ans;
    }
};
