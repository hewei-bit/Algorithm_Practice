/**
 * @File Name: 80 删除有序数组中的重复项 II.cpp
 * @Brief :
 * @Author : hewei (hewei_1996@qq.com)
 * @Version : 1.0
 * @Creat Date : 2024-01-13
 *
 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if(n == 0)return 0;

        int slow = 2,fast = 2;
        while(fast < n)
        {
            if(nums[fast] != nums[slow-2])
            {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};