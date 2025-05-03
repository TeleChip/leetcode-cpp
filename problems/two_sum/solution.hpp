#pragma once
#include <vector>
#include <unordered_map>

// Returns indices of the two numbers such that they add up to target.
// Uses a hash map for efficient lookup.
std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> num_to_index;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        auto it = num_to_index.find(complement);

        if (it != num_to_index.end()) {
            return {it->second, i};
        }
        
        num_to_index[nums[i]] = i;
    }

    return {};
}