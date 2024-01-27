class Solution {
public:
    int longestString(int x, int y, int z) {
        int ans;
        if(y>x){
           ans = (x+1)*2+(x)*2 + z*2;
        }
        else if(x>y){
           ans = (y+1)*2 + (y)*2 + z*2;
        }
        else {
            ans = (x)*2 + (y)*2 + z*2;
        }
        return ans;
    }
};