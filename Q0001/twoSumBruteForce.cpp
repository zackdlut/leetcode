#include<iostream>
#include<vector>

using namespace std;


/*
 * Description: This is Brute Force approach loop each element x and try to
 * find a y that makes  x + y equals target
 *
 */
vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> result;
    for(auto x = nums.cbegin(); x != nums.cend();x++)
    {
        for(auto y = x+1; y != nums.cend(); y++)
        {
            if(*x + *y == target)
            {
                auto position = distance(nums.cbegin(),x);
                result.push_back(position);
                position = distance(nums.cbegin(),y);
                result.push_back(position);
                return result;
            }
        }
    }
}

