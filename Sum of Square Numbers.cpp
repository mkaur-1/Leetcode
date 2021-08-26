class Solution {
public:
    bool judgeSquareSum(int c) {
     unordered_map<int,int> m;
        for(int i=0;i<46340;i++)
        {
            m[(i*i)]++;
            if(m.find(c-(i*i))!=m.end())
                return true;
        }
        return false;
    }
};
