#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isPalindrome(string &s, int left,int right){
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }


    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
            }
            i++;
            j--;
        }
        return true;
    }
};