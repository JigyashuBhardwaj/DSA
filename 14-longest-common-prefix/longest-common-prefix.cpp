class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();
        int c =1;

        string ans ="";
        
        int minLen = INT_MAX;

        for (int i = 0; i < strs.size(); i++) {
            minLen = min(minLen, (int)strs[i].length());
        }

        for (int j=0; j<minLen; j++){
            char one;
            for (int i=0; i<n; i++){
                one = strs[0][j];
                if (one == strs[i][j]){
                    continue;
                }
                else{
                    c=0;
                    break;
                }
            }
            if (c==1){
                ans.push_back(one);
            }
            else if(c==0){
                break;
            }
        }
    return ans;       
    }
};