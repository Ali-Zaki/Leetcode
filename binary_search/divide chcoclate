bool check_swe(vector<int> a , int max_swe , int che_swe){
    int curr_swe  =0 , chunk = 0;
    for (auto j : a){
        curr_swe+=j;
        if (curr_swe>=che_swe){
            chunk++;
            curr_swe=0;
        }
    }
        return chunk>= max_swe+1;
}
int maximizeSweetness(vector<int>& a , int k){
        int maxi = 1e9+10;
        int mini = 0;
        while(maxi > mini+1){
            int mid  = (maxi+mini)/2;
            if (check_swe(a, k ,mid)){
                mini = mid;
            }
            else{
                maxi = mid;
            }
        }
        return mini;
}
