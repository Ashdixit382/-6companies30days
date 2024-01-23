class Solution{   
public:
    string printMinNumberForPattern(string S){
        string ans = "";
        int cnt = 1;
        stack<int> s;
        for(int i=0;i<S.length();i++){
            if(S[i] == 'D'){
               s.push(cnt);
               cnt++;
            }
            else{
                s.push(cnt);
                cnt++;
                while(!s.empty()){
                    int front = s.top();
                    ans.push_back(front + '0');
                    s.pop();
                }
            }
        }
        s.push(cnt);
        while(!s.empty()){
                    int front = s.top();
                    ans.push_back(front + '0');
                    s.pop();
                }
                return ans;
    }
};