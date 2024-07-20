#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string res="";
        while(i>=0 || j>=0 || carry){ //carry in while condn so if i and j both reaches 0 but there is a carry
            int sum=0;
            if(i>=0) sum+=a[i--]-'0'; //subtracting 0 to make that char conversion in int
            if(j>=0) sum+=b[j--]-'0';

            sum+=carry;
            //updating carry and new sum
            carry=sum/2;
            sum%=2;

            res=to_string(sum)+res; //here string concatenation happening
        }
        return res;
        
    }
};