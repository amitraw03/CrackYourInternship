
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int j=0;
        for(int i=0 ; i<n ; i++){
            if(needle[j]==haystack[i]){
                j++;
            }
            //very imp step for updation
            else{
                i=i-j;
                j=0;
            }
            if(j==m) return i-j+1;
        }
        return -1;
    }
};