#include <iostream>
#include "solution.hpp"

int main() {
    std::string s = "abcabcbb";
    int result = lengthOfLongestSubstring(s);
    std::cout << "Length of longest substring without repeating characters: " << result << std::endl;

    // You can add more test cases as needed
    std::cout << lengthOfLongestSubstring("bbbbb") << std::endl; // 1
    std::cout << lengthOfLongestSubstring("pwwkew") << std::endl; // 3
    std::cout << lengthOfLongestSubstring("") << std::endl; // 0
    std::cout << lengthOfLongestSubstring("au") << std::endl; // 2
    return 0;
}