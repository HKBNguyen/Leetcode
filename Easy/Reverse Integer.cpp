#include <iostream>
#include <string>
class Solution 
{
public:
    int reverse(int x) 
    {
       string curr;
       string reverse;
       curr = to_string(x);
       for (int i = curr.size()-1; i >= 0; i--)
       {
       		if(curr[i] != '0')
       			reverse+=curr[i];
       }
       int final = stoi(reverse);
       return final;
     }
};