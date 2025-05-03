#pragma once
#include <string>
#include <unordered_map>
#include <algorithm>

int lengthOfLongestSubstring(const std::string& s) {
    std::unordered_map<char, int> last_seen;
    int max_len = 0;
    int start = 0;
    for (int i = 0; i < s.size(); ++i) {
        // Move start forward to avoid duplicate character in current window
        if (last_seen.count(s[i]) && last_seen[s[i]] >= start) {
            start = last_seen[s[i]] + 1;
        }
        last_seen[s[i]] = i;
        max_len = std::max(max_len, i - start + 1);
    }
    return max_len;
}