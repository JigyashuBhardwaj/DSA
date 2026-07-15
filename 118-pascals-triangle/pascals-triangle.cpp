class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        int n= numRows;
        
        vector<vector<int>> v;

        v.push_back({1});

        for(int i=2; i<=n; i++){

        vector<int> arr(i, 0);
        arr[0]=1;
        arr[i-1]=1;
            for(int j=1; j<i-1; j++){
                arr[j]= v[i-2][j-1] + v[i-2][j];
            }  
        v.push_back(arr);         
        }
        return v;      
    }
};