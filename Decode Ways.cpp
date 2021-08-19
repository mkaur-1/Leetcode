class Solution
{
  public:
  int n;
  vector<int> dp;
  int helper(string s,int index)
  {
    if(index>=n)
      return 1;
  }
  if(dp[index]!=-1)
  {
    return dp[index];
  }
  if(s[index]=='0')
    return 0;
  dp[index]=helper(s,index+1);
  if(index+1<n)
  {
    int number=0;
    number+=(s[index]-'0');
    number*=10;
    number+=(s[index+1]-'0');
    if(number>=10 && number<=26)
    {
      dp[index]+=helper(s,index+2);
    }
  }
  return dp[index];
}
int numDecodings(string s)
{
  n=s.size();
  dp.resize(n+1,-1);
  return helper(s,0);
}
};

