/**
 * @File Name: 169 多数元素.cpp
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
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;

        for(int i = 0;i < nums.size();i++)
        {
            map[nums[i]]++;
        }
        for(auto it = map.begin();it != map.end();it++)
        {
            if(it->second > nums.size()/2)
            {
                return it->first;
            }
        }
        return 0;
    }
};