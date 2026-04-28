/**
 * @File Name:  56 ºÏ²¢Çø.cpp
 * @Brief :
 * @Author : hewei (hewei_1996@qq.com)
 * @Version : 1.0
 * @Creat Date : 2024-01-14
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

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        if (intervals.size() == 0)
            return {};

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        for (int i = 0; i < intervals.size(); i++)
        {
            int left = intervals[i][0];
            int right = intervals[i][1];

            if (!res.size() || res.back()[1] < left)
            {
                res.push_back({left, right});
            }
            else
            {
                res.back()[1] = max(res.back()[1], right);
            }
        }
        return res;
    }
};
