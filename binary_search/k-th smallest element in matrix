class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> t;
        int n = matrix.size();
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                t.push_back(matrix[j][i]);
            }
        }
        sort(t.begin(),t.end());
        return t[k-1];
    }
};
