#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        if (n == 0)
            return;
        int k = m + n;
        k--;
        int i = m - 1;
        int j = n - 1;
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i--];
            }
            else
                nums1[k] = nums2[j--];
            k--;
        }
        while (i >= 0)
        {
            nums1[k--] = nums1[i--];
        }
        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
};