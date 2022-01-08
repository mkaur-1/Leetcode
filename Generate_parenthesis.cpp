//n=3,number of closing brackets not more than opening
// [((())),()()(),(())(),()(()),(()())]
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> dp(n+1);
        dp[0]={""};
        for(int i=1;i<=n;i++)//inside loop
            for(int j=0;j<i;j++)//outside
                for(auto &x:dp[i-j-1])//inside parenthesis
                    for(auto &y:dp[j])//outside parenthesis 
                        dp[i].push_back("("+y+")" +x);
        
            return dp[n];
        }
};
