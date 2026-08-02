class Solution {
public:
    double myPow(double x, int n) {

        double ans =1;

        long long b=n;

        if (b<0){
            b = -b;
        }

        if(n<0){
            x= (1/x);
        }

        for (b; b>0; b/=2){
            if (b%2==1){
                ans*=x;
            }
            x*=x;
        }

        return ans;        
    }
};