#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{  
    //using Hashing--
    unordered_map<char, int> count;

    for (int i = 0; i < str.length(); i++) {
        // increase the count of character str[i] by 1
        count[str[i]]++;
    }
    // iterating through the unordered map
    for (auto it : count) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second <<endl;
    }
}