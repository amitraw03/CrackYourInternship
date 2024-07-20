#include <bits/stdc++.h>
using namespace std;
#include <vector>

class Solution {
public:
    int maximumProduct(vector<int>& nums){
      //we can get the maxproduct by either by multiplyng all 3 largest no or 2 -ve smallest numbers with 1st largest number
      int max1=INT_MIN, max2=INT_MIN, max3=INT_MIN;
      int min1=INT_MAX, min2=INT_MAX;

      for(int num:nums){
             // Update the three largest values
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max3 = max2;
                max2 = num;
            } else if (num > max3) {
                max3 = num;
            }
            // Update the two smallest values
            if (num < min1) {
                min2 = min1;
                min1 = num;
            } else if (num < min2) {
                min2 = num;
            }
      }
      return max((max1*max2*max3),(min1*min2*max1));
        
    }
};