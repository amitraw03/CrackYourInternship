#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
       //using Hashtable is easy but this is best time complexityyy mathenatically
        vector<int> res;
        for(int i=0 ; i<nums.size() ; i++){
            int index=abs(nums[i])-1;  //-1 so that we can access elem acc to 0 indexing
            if(nums[index] <0){
                res.push_back(index+1);
            }
            else{
                nums[index]=-nums[i]; //mark that elem -ve on that index so if that elem encountered twice so our if condn will return the ans
            }
        }
        return res;
    }
};