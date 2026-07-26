class Solution {
public:
    int maxDepth(string s) {
        int ans = INT_MIN;
        int num=0;
        for( char c :s){
            if(c=='('){
                num++;
            }
            if(c==')'){
                num--;
            }

            ans= max(ans, num);

        }
        return ans;       
    }
};