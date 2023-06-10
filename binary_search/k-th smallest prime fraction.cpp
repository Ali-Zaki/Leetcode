class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& a, int k) {
        vector<pair<long double,pair<int,int>>> vec;
        int n=a.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                long double f = (long double)a[i]/a[j];
                vec.push_back({f,{a[i],a[j]}});
            }
        }        
        sort(vec.begin(),vec.end());
        vector<int> ans;
        ans.push_back(vec[k-1].second.first);
        ans.push_back(vec[k-1].second.second);
        return(ans);

    }
};
