class Solution {
public:

    void dijkstravector( vector<vector<long long>> &costMatrix,char &src,
    unordered_map<char,list<pair<char,int>>> &adj){
        costMatrix[src - 'a'][src - 'a'] = 0;
        set<pair<int, char>> st;
        st.insert(make_pair(0,src));

        while(!st.empty()){
             auto top = *(st.begin());
             char topnode = top.second;
             int nodecost = top.first;
             st.erase(st.begin());

             for(auto it: adj[topnode]){
              if(nodecost + it.second < costMatrix[src - 'a'][it.first - 'a']){
              auto record = st.find(make_pair(costMatrix[src - 'a'][it.first - 'a'],it.first));
            if(record != st.end()){
            st.erase(record);
             }
             costMatrix[src - 'a'][it.first - 'a'] = nodecost + it.second;
              st.insert(make_pair(costMatrix[src - 'a'][it.first - 'a'], it.first));
    }
}
        }
        return;
    }

    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        unordered_map<char,list<pair<char,int>>> adj;
        for(int i=0;i<original.size();i++){
            int u = original[i];
            int v = changed[i];
            int wt = cost[i];
            adj[u].push_back(make_pair(v,wt));
        }
        
        vector<vector<long long>> costMatrix(26,vector<long long>(26,INT_MAX));
        
        
        
        for(int i=0;i<source.length();i++){
            char src = source[i];
            dijkstravector(costMatrix,src,adj);

        }
        long long costans = 0;

        // for(int i=0;i<costMatrix.size();i++){
        //     for(int j=0;j<costMatrix.size();i++){
        //         cout<<costMatrix[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        for(int i=0;i<source.length();i++){
            if(source[i] == target[i])
            continue;

            if(costMatrix[source[i]-'a'][target[i]-'a'] == INT_MAX)
            return -1;
            else
            costans += costMatrix[source[i]-'a'][target[i]-'a'];
        }
        return costans;
    }
};