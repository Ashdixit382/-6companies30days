class Solution {
public:
    bool checkOverlap(int r, int h, int k, int x1, int y1, int x2, int y2) {
        // O(n^2) time complexity
        // for(int x=x1;x<=x2;x++){
        //     for(int y=y1;y<=y2;y++){
        //         if(((x-h)*(x-h) + (y-k)*(y-k)) <= r*r){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        int x,y;
        if(x1 > h) x = x1;
        else if(x2 < h) x = x2;
        else x = h;

        if(y1 > k) y = y1;
        else if(y2 < k) y = y2;
        else y = k;

        if( ((x-h)*(x-h) + (y-k)*(y-k)) <= r*r){
           return true;
        }
        return false;
    }
};