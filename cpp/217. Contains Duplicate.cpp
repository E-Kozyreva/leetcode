// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:
// Input: nums = [1,2,3,1]
// Output: true

#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> HashSet;
        for (int num : nums) {
            if (HashSet.count(num) > 0) {
                return true;
            }
            HashSet.insert(num);
        }   
        return false;
    }
};
