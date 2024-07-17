#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0 , high=nums.size()-1 ,i=0;
        //if i found 0 i'll replace it with low and if 2 replace it with high else i++
        while( i <=high){
            if(nums[i]==0){
               swap(nums[low],nums[i]);
               low++;
               i++;
            }
            else if(nums[i]==2){
                swap(nums[high],nums[i]);
                high--;
            } 
            else i++;
        }
    }
};