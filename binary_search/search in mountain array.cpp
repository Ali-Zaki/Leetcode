/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int s, MountainArray &a) {
	int m = 0;
    int ma = a.length()-1;
    int mii = 0;
    while(m+1 < ma)
    {
        int mi = (m+ma)/2;
		int p = a.get(mi);
		int p1 = a.get(mi+1);
		int p2 = a.get(mi-1);
        if ( p > p2 and  p > p1){
            // cout<<mi<<endl;
            mii = mi;
            break;
        }
        if (p > p2 and p < p1)
            m = mi;
        if (p < p2 and p > p1)
            ma = mi;
    }
    if (a.get(mii) == s)
        return mii;
    int m1 = 0;
    int ma1 = mii;
    while(m1 < ma1)
    {
        int mi = (ma1+m1)/2;
        int  p = a.get(mi);
        if (p == s)
            return mi;
        else if (p < s)
            m1 = mi+1;
        else
            ma1 = mi;
    }
    int m2 = mii+1;
    int ma2 = a.length()-1;
        while(m2 <= ma2)
    {
        int mi = (ma2+m2)/2;
        int  p = a.get(mi);
        if (ma2-m2+1 <= 5)
        {
            for (int t=m2;t<=ma2;t++)
                if (a.get(t) == s)
                    return t;
            return -1;
        }
        if (p == s)
            return mi;
        else if (p < s)
            m2 = mi+1;
        else
            ma2 = mi;
        
    }
    return -1;
        
    }
};
