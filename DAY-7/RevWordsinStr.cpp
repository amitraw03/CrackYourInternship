class Solution {
public:
    string reverseWords(string s) {
        int i=s.length()-1;
        string ans="";
        while(i>=0){

            while(i>=0 && s[i]==' '){
                i--;
            }
            //edge case
            if(i<0) break;

            int j=i;
            while(i>=0 && s[i]!=' '){
                i--;
            }

            if(ans.empty()){
                for(int k=i+1; k<j+1 ;k++){
                    ans.push_back(s[k]);
                }
            }else{
                ans+=' ';
                 for(int k=i+1; k<j+1 ;k++){
                    ans.push_back(s[k]);
                }

            }
        }
        return ans;
    }
};