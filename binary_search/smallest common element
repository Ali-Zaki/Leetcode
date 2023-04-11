class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
    int const maxn = 1e4+10;
		map<int,int> seen;
		int m = mat.size();
		int n = mat[0].size();
    for (int i=0;i<m;i++)
		{
			for (int j =0 ; j < n ;j++)
			{
				// mat[i][j];
				// cout<<mat[i][j]<<' ';
				seen[mat[i][j]] += 1;
			}
		}
	int ans = 1e4+10;
	for (auto i:seen)
	{
		if (i.second == m)
		{
			ans = min(ans , i.first);
		}
	}
	if (ans  == 1e4+10)
		ans = -1;
	return ans;

        
    }
};
