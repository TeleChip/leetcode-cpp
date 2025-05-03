#include <iostream>
#include "solution.hpp"

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    auto result = twoSum(nums, target);

    if (!result.empty()) {
        std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }
    
    return 0;
}