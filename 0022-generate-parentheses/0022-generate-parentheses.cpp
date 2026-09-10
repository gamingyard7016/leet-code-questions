class Solution {
public:
    void bracket(string s,int oppning, int cloosing, vector<string>& ans,int n){
        if(cloosing == n){
            ans.push_back(s);
            return;
        }
        if(oppning<n) bracket(s+"(",oppning+1,cloosing,ans,n);
        if(cloosing<oppning) bracket(s+")",oppning,cloosing + 1 ,ans, n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        bracket("",0,0,ans,n);
        return ans;
    }
};