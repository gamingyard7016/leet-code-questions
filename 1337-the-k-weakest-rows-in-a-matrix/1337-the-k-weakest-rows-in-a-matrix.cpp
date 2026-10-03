class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> strength;
        
        for(int i=0; i<mat.size(); i++) {
            int soldiers = accumulate(mat[i].begin(), mat[i].end(), 0);
            strength.push_back({soldiers, i});
        }
        
        sort(strength.begin(), strength.end());
        
        vector<int> ans;
        for(int i=0; i<k; i++) {
            ans.push_back(strength[i].second);
        }
        return ans;
    }
};
