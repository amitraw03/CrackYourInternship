
#include <bits/stdc++.h>
using namespace std;

   long long findMinDiff(vector<long long> a, long long n, long long m){
    
       vector <long long> temp;
       sort(a.begin(),a.end());  //helps in maintaining the minimum diffrence
       long long ans=INT_MAX;   //var to stored min difference
       long long x=m-1;    

       for(int i=0 ; i<=n-m ;i++){
           long long val=a[x++]-a[i];
           
           ans=min(ans,val);
       }
       return ans;
    }   