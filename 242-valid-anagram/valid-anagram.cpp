class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char, int> mps;
        map<char, int> mpt;

        for (char c : s) {
            mps[c]++;
        }
        for (char c : t) {
            mpt[c]++;
        }

        if( mps==mpt){
            return 1;
        }

        return 0;
    }
};