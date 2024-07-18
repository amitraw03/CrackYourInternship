#include <bits/stdc++.h>
using namespace std;
#include <map>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //    can be done by moore's voting algo too
        unordered_map<int, int> mp;
        int n = nums.size();
        int m = floor(n / 2);
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
            if (mp[nums[i]] > m)
                return nums[i];
        }
        // If no majority element found
        return nums[n - 1]; // Return the last element as it's the only
                            // remaining possibility
    }
};