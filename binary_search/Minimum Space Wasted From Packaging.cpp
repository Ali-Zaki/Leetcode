#define int1 long long
class Solution {
public:
    int minWastedSpace(vector<int>& a, vector<vector<int>>& b) {
        sort(begin(a),end(a));
        int1 ans=LLONG_MAX;
        int1 pre[a.size()+2];
        pre[0]=0;
        for(int i=0;i<a.size();i++)
        {
            pre[i+1]=pre[i]+a[i];
        }
        for(auto vec:b)
        {
            sort(begin(vec),end(vec));
            if(a[a.size()-1]>vec[vec.size()-1])
            {
                continue;
            }
            int1 ans2=0;
            int1 e=-1;
            int1 i=0;
            while(e!=(a.size()-1) and i<vec.size())
            {
                int1 u=upper_bound(begin(a),end(a),vec[i])-begin(a)-1;
                if(u>-1)
                {
                    ans2+=(vec[i]*(u-e))-(pre[u+1]-pre[e+1]);
                    e=u;
                }
                i+=1;
            }
            if(e==(a.size()-1))
            {
                ans=min(ans,ans2);
            }
        }   
        if(ans==LLONG_MAX)
        {
            ans=-1;
        }
        ans%=((int1)pow(10,9)+7);
        return ans;
    }
};
