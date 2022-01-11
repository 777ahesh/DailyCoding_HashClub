class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         int h1[1001] = {0},h2[1001] = {0},n = nums1.size(),m = nums2.size();
        for(int i = 0;i < n ;i++){
            h1[nums1[i]] = 1;
        }
        for(int i = 0;i < m ;i++){
            h2[nums2[i]] = 1;
        }
        vector<int> ans;
        for(int i = 0;i<1001;i++){
            if(h1[i] && h2[i])
            ans.emplace_back(i);
        }
        return ans;
    }
    
};