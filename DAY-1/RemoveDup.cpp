#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1,j=0;
        while( i <nums.size()){
             if(nums[i]==nums[j]) i++;
             else{
                swap(nums[i],nums[j+1]);
                i++;
                j++;
             }
        }
        return j+1;
    }
};