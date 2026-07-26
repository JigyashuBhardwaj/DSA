class Solution {
public:
    static bool cmp(pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;   // Descending frequency
    }

    string frequencySort(string s) {
        unordered_map<char, int> mp;

        // Count frequencies
        for (char c : s)
            mp[c]++;

        // Copy to vector
        vector<pair<char, int>> v(mp.begin(), mp.end());

        // Sort by frequency
        sort(v.begin(), v.end(), cmp);

        // Build answer
        string ans = "";

        for (auto p : v) {
            ans += string(p.second, p.first);
        }

        return ans;
    }
};