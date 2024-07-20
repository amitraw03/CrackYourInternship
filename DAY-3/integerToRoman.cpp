#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        //kind of mapping with  indices by setting 2 vector arrays of enough to get the ans
        static vector <int> val={1000 , 900 , 500 , 400 , 100 , 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1};
        static vector <string> sym={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";

        for(int i=0 ; i<val.size() ; i++){
            if(num==0) break;

            int times=num/val[i];
            while(times--){
                ans+=sym[i];
            }
            num%=val[i]; //so to continuosly get the roman symbol of next digit of a number
        }
        return ans;
    }
};