#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        
        int answer1 = 0, answer2 = 0;
        
        // Count answer1
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(nums1[i] == nums2[j]){
                    answer1++;
                    break; // ek match mil gaya toh break kar do
                }
            }
        }
        
        // Count answer2
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums2[i] == nums1[j]){
                    answer2++;
                    break;
                }
            }
        }
        
        return {answer1, answer2};
    }
};
