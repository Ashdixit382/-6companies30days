class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> st;
        for(auto it: words){
            st.insert(it);
        }
 
        for(auto it: st){
            string top = it;
            for(int i=0;i<top.length();i++){
              string record = top.substr(i+1,top.length());
              if(st.find(record) != st.end()){
                 st.erase(record);
              }
            }
        }
        string ans = "";
        while(!st.empty()){
            string top = *(st.begin());
            st.erase(st.begin());
            ans.append(top);
            ans.push_back('#');
        }
        cout<<ans<<endl;
        return ans.length();
    }
};