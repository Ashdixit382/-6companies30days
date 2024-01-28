class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        vector<int> freqguess(10,0);
        vector<int> freqsecret(10,0);
        for(int i=0;i<secret.length();i++){
            if(secret[i] == guess[i])
            bulls++;
            else{
                freqguess[secret[i]- '0']++;
                freqsecret[guess[i] - '0']++;
            }
        }
        int cows = 0;
        for(int i=0;i<10;i++){
            int sum = min(freqguess[i],freqsecret[i]);
            cows += sum;
        }
        string ans = "";
        string bull = to_string(bulls);
        string cow = to_string(cows);
        ans.append(bull);
        ans.push_back('A');
        ans.append(cow);
        ans.push_back('B');
        return ans;
    }
};