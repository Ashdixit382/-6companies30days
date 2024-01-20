class Solution {
public:
    vector<vector<int>>ans;

    void solve(int k, int n,vector<int>&temp,int idx){
        if(n==0 && k==0){
            ans.push_back(temp);
            return;
        }

        for(int i=idx; i<=9; i++){
            if(k==0) break;
            temp.push_back(i);
            solve(k-1,n-i,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        solve(k,n,temp,1);
        return ans;
    }
};