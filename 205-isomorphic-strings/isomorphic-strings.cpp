class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int n = s.length();

        char one;
        char two;
        int c =1;

        for(int i=0 ; i<n ; i++){
            one = s[i];
            two = t[i];
            for(int j=0; j<n; j++){
                if (s[j]==one && t[j]==two){
                    continue;
                }
                else if(s[j]==one && t[j]!=two){
                    c=0;
                    break;
                } 
                else if(s[j]!=one && t[j]==two){
                    c=0;
                    break;
                }               
            }
        }

        return c;
        
    }
};