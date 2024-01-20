class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
       unordered_map<string,vector<int>> mpp;
       for(auto &it: access_times){
           int time = stoi(it[1]);
           mpp[it[0]].push_back(time);
       }
       for(auto &it: mpp){
           sort(it.second.begin(),it.second.end());
           for(auto it: it.second){
               cout<<it<<" ";
           }
           cout<<endl;
       }

       vector<string> ans;
       for(auto &it: mpp){
          cout<<it.first<<endl;
          vector<int> &time = it.second;
          for(int i=2;i< time.size();i++){
              cout<<"value of this employee "<<it.first<<" is "<<time[i] <<" "<<time[i-2] <<endl;
              if(time[i] - time[i-2] < 100){
                  ans.push_back(it.first);
                  break;
              }     
          }
       }
       return ans;
    }
};