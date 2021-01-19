#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int l,h,c;
        l = c = 0;
        h = nums.size() - 1;
        sort(nums.begin(),nums.end());
        while(l < h) {
            if(nums[l]+nums[h]==k) {
                l++;
                h--;
                c++;
            }
            else if(nums[l]+nums[h] < k) l++;
            else h--;
        }
        return c;
    }
};