#include <bits/stdc++.h>
using namespace std;
#include <stack>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;
        stack<int> st;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                st.push(nums1[i]);
                i++;
            }

            else if (nums1[i] > nums2[j]) {
                st.push(nums2[j]);
                j++;
            }
        }
        nums1.clear();
        while (i < m) {
            st.push(nums1[i]);
            i++;
        }
        while (j < n) {
            st.push(nums2[j]);
            j++;
        }
        while (!st.empty()) {
            nums1.push_back(st.top());
            st.pop();
        }
        return reverse(nums1.begin(),nums1.end());
    }
};