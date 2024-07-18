#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //most optimised near to O(n^2) -- pointer Approach without any external space hash and set
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0 ; i<nums.size() ;i++){
            //imp step to prevent wasteless traversing
            if(i>0 && nums[i]==nums[i-1]) continue;

            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum <0){
                    j++;
                }
                else if(sum> 0){
                     k--;
                }
                else{
                     ans.push_back({nums[i],nums[j],nums[k]});
                     j++;
                     k--;
                     while(j<k && nums[j]==nums[j-1]) j++; 
                     while(j<k && nums[k]==nums[k+1]) k--; 
                }
            }
        }
        return ans;

    }
};