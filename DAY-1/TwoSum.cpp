#include <bits/stdc++.h>
using namespace std;
#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
      //using Hashing --Most Optimised {usually we can do pointer also but in this particular ques we need to return indices}
      unordered_map <int,int>mp;
      for(int i=0 ; i<nums.size(); i++){
        int compliment=t-nums[i];
        if(mp.count(compliment))return {mp[compliment],i};
        else mp[nums[i]]=i;
      }
          return {-1,-1};
 }
};