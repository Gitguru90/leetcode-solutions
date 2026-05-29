// Problem: Two Sum
// LeetCode: https://leetcode.com/problems/two-sum/
// Difficulty: Easy

// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {

            for (int j = i + 1; j < n; j++) {

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

int main() {

    Solution s;

    vector<int> nums = {2, 7, 11, 15};

    int target = 9;

    vector<int> ans = s.twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}