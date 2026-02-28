    class Solution {
    public:
        bool isValid(string s) {
        int n=s.size();
        vector<int> k;
        vector<int> k2;
        if(s.size()==1||(s[0]=='}'||s[0]==')'||s[0]==']'))
            return false;
        for(int i=0;i<n;i++){
           
            if(s[i]=='{'||s[i]=='['||s[i]=='('){
                k.push_back(i);
            }
            else{
                 if(k.size()==0)
                return false;
                if((s[k.back()]=='['&&s[i]!=']')||(s[k.back()]=='{'&&s[i]!='}')||(s[k.back()]=='('&&s[i]!=')')){
                    return false;
                }
                else{
                    
                    k.pop_back();
                }
            }
        }
        if(k.size()==0)
        return true;
        else{
            return false;
        }

        }
    };
