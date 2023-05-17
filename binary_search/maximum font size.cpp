/**
 * // This is the FontInfo's API interface.
 * // You should not implement it, or speculate about its implementation
 * class FontInfo {
 *   public:
 *     // Return the width of char ch when fontSize is used.
 *     int getWidth(int fontSize, char ch);
 *     
 *     // Return Height of any char when fontSize is used.
 *     int getHeight(int fontSize)
 * };
 */
class Solution {
public:
    int maxFont(string text, int w, int h, vector<int>& fonts, FontInfo fi) {
        int mini =0;
        int maxi = fonts.size();
        int pre =0;
        while(mini < maxi){
            int mid = (mini+maxi)/2;
            long long f = fi.getHeight(fonts[mid]);
            long long p = fonts[mid];
            long long wi = 0;
            for (auto l:text){
                wi+=fi.getWidth(p,l);
            }
            if (f > h or wi >w){
                maxi = mid;
            }
            else{
                pre = fonts[mid];
                mini = mid+1;
            }
        }
        
            if (!pre){
                return -1;
            }
            else{
                return pre;
            }
    }
};
