/**
 * @File Name: 03 数组中重复的数字.cpp
 * @Brief : 哈希表
 * @Author : hewei (hewei_1996@qq.com)
 * @Version : 1.0
 * @Creat Date : 2022-04-13
 *
 */

#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

// 找出数组中重复的数字。
// 在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
// 数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
// 请找出数组中任意一个重复的数字。

class Solution
{
public:
    // 定义一个函数，用于找出数组中重复的数字
    int findRepeatNumber(vector<int> &nums)
    {
        // 定义一个无序映射，用于存储数组中的数字
        unordered_map<int, bool> res;
        // 遍历数组中的每个数字
        for (int num : nums)
        {
            // 如果该数字已经存在于映射中，则说明该数字重复，返回该数字
            if (res[num])
                return num;
            // 否则将该数字添加到映射中
            res[num] = true;
        }
        // 如果数组中没有重复的数字，则返回-1
        return -1;
    }
};