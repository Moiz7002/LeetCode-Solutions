class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }

            num_map[nums[i]] = i;
        }   
        return {}; 
    }
};
