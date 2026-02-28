class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            int k=i;
             vector<int>rows;
             double res=1;
             for(int j=0;j<=i;j++){
                if(j==0||j==i)
                rows.push_back(1);
                else{
                    res*=(double)k/j;
                    long long int res2=lround(res);
                    rows.push_back(res2);
                    k--;
                }
             }
             ans.push_back(rows);
        }
        return ans;

    }
};
