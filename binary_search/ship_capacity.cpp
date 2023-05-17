bool ispossible(vector<int>& weights , int days , int capacity){
    int day=1;
    int curr=0;
    for (int we:weights){
        if (we > capacity){
            return false;
        }
        else if (curr+we > capacity){
            curr=we;
            day++;
        }
        else{
            curr+=we;
        }
    }
    return day<=days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int maxv = 0;
        for (auto l:weights)
            maxv+=l;
        int minv = 1;
        while(maxv >= minv){
            int mid = (maxv+minv)/2;
            if (ispossible(weights,days,mid)){
                maxv = mid;
            }
            else{
                minv = mid;
            }
        }
        return minv;
    }
