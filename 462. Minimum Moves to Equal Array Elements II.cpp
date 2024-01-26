class Solution {
public:
    int minMoves2(vector<int>& nums) {
        // long long mini = INT_MAX;

        // time complexity = O(n^2);
        // for(int i=0;i<nums.size();i++){
        //     long long value = 0;
        //     for(int j=0;j<nums.size();j++){
        //         value += abs(nums[i]-nums[j]);
        //     }
        //     if(mini > value){
        //         mini = value;
        //     }
        // }
        // return mini;

        // time complexity = O(nlogn)
        // int n = nums.size();
        sort(nums.begin(),nums.end());

        // int median = n%2 == 0?(nums[n/2]+nums[n/2-1])/2 : nums[n/2];
        // int steps = 0;

        // for(auto num: nums){
        //     steps += abs(num-median);
        // }
        // return steps;

        // time complexity O(nlogn)

        int i = 0;
        int j = nums.size()-1;
        int cnt = 0;
        while(i<j){
             cnt += abs(nums[j] - nums[i]);
             i++;
             j--;
        }
        return cnt;
    }
};