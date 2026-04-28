/**
 * @File Name: 27 移除元素.cpp
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
    int removeElement(vector<int>& nums, int val) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {

            if (nums[left] == val) {

                nums[left] = nums[right];

                right--;

            } else {

                left++;

            }

        }

        return left;
    }
};