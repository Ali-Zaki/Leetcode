class Solution {
public:

    bool seen[110][110];

    int min_ro = INT_MAX;
    int min_col=INT_MAX;
    int max_ro = INT_MIN;
    int max_col=INT_MIN;

    bool valid(int i , int j,int n,int m,vector<vector<char>>& arr)
    {
        if (i<n and i>-1 and j<m and j>-1 and arr[i][j]=='1' and !seen[i][j])
            return 1;
        return 0;
    }


    void dfs(int i,int j,int n,int m,vector<vector<char>>& arr)
    {
        if (seen[i][j])
            return;
        seen[i][j]=1;

        min_ro = min(i,min_ro);
        min_col = min(j,min_col);
        max_ro = max(i,max_ro);
        max_col = max(j,max_col);
        if (valid(i+1,j,n,m,arr))
            dfs(i+1,j,n,m,arr);
        if (valid(i-1,j,n,m,arr))
            dfs(i-1,j,n,m,arr);
        if (valid(i,j+1,n,m,arr))
            dfs(i,j+1,n,m,arr);
        if (valid(i,j-1,n,m,arr))
            dfs(i,j-1,n,m,arr);
    }

    int minArea(vector<vector<char>>& image, int x, int y) {
        int n = image.size();
        int m = image[0].size();
        dfs(x,y,n,m,image);
        int l = (max_ro-min_ro)+1;
        int w = (max_col-min_col)+1;
        return l*w;
        
    }
};
