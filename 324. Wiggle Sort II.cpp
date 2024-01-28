class Solution {
public:
    
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
         vector<int> res(n);
         int i = 1;
         int j = n-1;
         while(i<n){
            res[i] = nums[j];
            i+=2;
            j--;
         }
         i = 0;
         while(i<n){
            res[i] = nums[j];
            i+= 2;
            j--;
         }
         for(int z=0;z<n;z++){
             nums[z] = res[z];
         }
    }
};