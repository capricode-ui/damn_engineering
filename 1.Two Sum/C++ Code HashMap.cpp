#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex; // maps value to its index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (numToIndex.find(complement) != numToIndex.end()) {
                return {numToIndex[complement], i};
            }

            numToIndex[nums[i]] = i;
        }

        return {}; // No solution found
    }
};