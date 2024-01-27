class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> ans;
        map<int,vector<vector<int>>> mp;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int dist = abs(i-rCenter) + abs(j-cCenter);
                mp[dist].push_back({i,j});
            }
        }
        for(auto i:mp){
			for(auto j : i.second) 
            ans.push_back(j);
		}
		return ans;
    }
};