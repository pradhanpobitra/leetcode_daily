#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[51][6];
    int solve(int i, int no)
    {
        if (i == 1)
            return 1;
        if (dp[i][no] != -1)
            return dp[i][no];
        int ans;
        if (no == 5)
            ans = solve(i - 1, 1) + solve(i - 1, 2) + solve(i - 1, 3) + solve(i - 1, 4) + solve(i - 1, 5);
        else if (no == 4)
            ans = solve(i - 1, 1) + solve(i - 1, 2) + solve(i - 1, 3) + solve(i - 1, 4);
        else if (no == 3)
            ans = solve(i - 1, 1) + solve(i - 1, 2) + solve(i - 1, 3);
        else if (no == 2)
            ans = solve(i - 1, 1) + solve(i - 1, 2);
        else if (no == 1)
            ans = solve(i - 1, 1);
        return dp[i][no] = ans;
    }
    int countVowelStrings(int n)
    {
        memset(dp, -1, sizeof(dp));
        int ans = solve(n, 1) + solve(n, 2) + solve(n, 3) + solve(n, 4) + solve(n, 5);
        return ans;
    }
};