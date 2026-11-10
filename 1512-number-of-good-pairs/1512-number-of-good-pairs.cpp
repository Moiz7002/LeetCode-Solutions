class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        std::unordered_map<int, int> countMap;
        int totalPairs = 0;
        int n = nums.size();

        for (int i =0 ; i<n ;i++) {
            int num = nums[i];
            if (countMap.find(num) != countMap.end()) {
                totalPairs += countMap[num];
            }
            countMap[num]++;
        }
        return totalPairs;
    }
};
