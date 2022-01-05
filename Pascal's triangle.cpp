class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        set <int> rows,cols;
        int r = (int)arr.size(),c = (int)arr[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(arr[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }        
        for(int i=0;i<r;i++){
            if(rows.find(i)!=rows.end()){
                vector <int> vec(c,0);
                arr[i] = vec;
            }
        }
        for(int x : cols){
            for(int i=0;i<r;i++){
                arr[i][x] = 0;                
            }
        }
    }
};
