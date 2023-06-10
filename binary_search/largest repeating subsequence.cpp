class Solution {
public:
    int longestRepeatingSubstring(string s) {
        
        unordered_map<string,bool> m;
        int n = s.size();
        int ans = 0;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<=i-ans;j++)
            {
                string ss = s.substr(j,i-j+1);
                // cout<<ss<<endl;
                if (m[ss])
                {
                    ans = i-j+1;
                    break;
                }
                else
                    m[ss]=true;
            }
        }
        return ans;
    }
};
