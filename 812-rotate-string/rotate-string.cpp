class Solution {
public:
    bool rotateString(string s, string goal) {

    int n = s.length();

    int c=0;

    for (int k = 0; k < n; k++) {

        c= 1;

        char first = s[0];

        for (int i = 0; i < n - 1; i++) {
            s[i] = s[i + 1];
        }

        s[n - 1] = first;

        for (int i=0; i<n; i++){
            if(s[i]==goal[i]){
                continue;
            }
            else{
                c=0;
                break;
            }
        }

        if(c==1){
            break;
        }
    }

    return c;
        
    }
};