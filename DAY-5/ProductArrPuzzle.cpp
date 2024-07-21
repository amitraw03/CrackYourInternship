#include <bits/stdc++.h>
#include <vector>

class Solution{
  public:
    // can be done by prefixproduct and suffix product for ans
    // return the Product vector P that hold product except self at each index
    
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here  
        vector<long long int> ans(n,1);
        long long int prefixProduct=1;
       for(int i=0 ; i<n ; i++){
            ans[i]=prefixProduct;
            prefixProduct*= nums[i];
       }
       
       long long int suffixProduct=1;
       for(int i=n-1 ; i>=0 ; i--){
            ans[i]*=suffixProduct;
            suffixProduct*= nums[i];
       }
       
       return ans;
    }