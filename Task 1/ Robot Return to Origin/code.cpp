class Solution {
public:
    bool judgeCircle(string moves) {
        int lr=0;
        int du=0;
        int n=moves.size();
        for(int i=0;i<n;i++){
            if(moves[i]=='U'){
                du++;
            }
            else if(moves[i]=='D'){
                du--;
            }
            else if(moves[i]=='R')lr++;
            else lr--;
        } 
        if(lr==0&&du==0)return true;
        else return false;
    }
};
