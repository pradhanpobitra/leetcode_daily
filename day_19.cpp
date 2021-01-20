#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int mx = 1;
        string ans;
        ans.push_back(s[0]);
        int n = s.length(), i, j, l, r;
        i = 0;
        j = 1;
        while (j < n)
        {
            l = i - 1;
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r])
            {
                l--;
                r++;
            }
            l++;
            if (r - l > mx)
            {
                mx = r - l;
                ans = s.substr(l, mx);
            }
            if (s[i] == s[j])
            {
                l = i - 1;
                r = j + 1;
                while (l >= 0 && r < n && s[l] == s[r])
                    l--, r++;
                l++;
                if (r - l > mx)
                {
                    mx = r - l;
                    ans = s.substr(l, mx);
                }
            }
            j++;
            i++;
        }
        return ans;
    }
};