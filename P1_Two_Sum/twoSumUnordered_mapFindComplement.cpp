#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


/*
 *
 * Description: store all elements and position in hashmap; 
 * loop each element x and try to find  (target - x) in hash map
 *
 */
vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> result;
    unoredered_map<int,int> nums_map;
    for(auto it = nums.cbegin(); it != nums.cend();it++)
        nums_map.emplace(*it,distance(nums.cbegin(),it));
    for(auto x = nums.cbegin(); x != nums.cend();x++)
    {
        auto complement = target - x;
        if((y = nums_map.find(complement))!= nums_map.cend())
        {
            auto position = distance(nums.cbegin(),x);
            result.push_back(position);
            result.push_back(y->second);
            return result;
        }
    }
}

