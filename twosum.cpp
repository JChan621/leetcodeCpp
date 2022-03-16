//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hmap;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            if (hmap.find(nums[i]) != hmap.end()){
                ans.push_back(i);
                ans.push_back(hmap[nums[i]]);
                return ans;
            }
            else{
                hmap[target - nums[i]] = i;
            };
        };
        return ans;
    };
};
