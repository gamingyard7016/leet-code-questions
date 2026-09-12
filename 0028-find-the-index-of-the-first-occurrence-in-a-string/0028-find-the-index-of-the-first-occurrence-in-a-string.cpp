class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int left = 0,i=0;
        int ans =-1;
        int count =0;
        while(i<n){
            if(haystack[i] == needle[left]) {
                count++;
                left++;
                if(count == needle.size()) return  (i+1 - needle.size());
            }
            else {
                i=i-left;
                count = 0;
                left =0;
            }
            i++;
        }
        return ans;
    }
};