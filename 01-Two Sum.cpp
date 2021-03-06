/*
Given an array of integers, find two numbers such that they add up to a specific target number.
The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
*/
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
       map<int, int> m;
       vector<int> res;
       int i = 0;
       for(i = 0; i < nums.size(); i++){  //�����ӳ�䵽map��
        m[nums[i]] = i;
       }

       for( i  = 0; i < nums.size(); i++){
        int mid_res = target - nums[i];
        if( m.find(mid_res) != m.end() && m[mid_res] > i){
            res.push_back(i+1);
            res.push_back(m[mid_res] + 1);
            break;
        }
       }
       return res;
    }
};

int main()
{
    vector<int> vec;
    //{2, 7, 11, 15}
    vec.push_back(2);
    vec.push_back(7);
    vec.push_back(11);
    vec.push_back(15);
   // vec.push_back(7);
   // vec.push_back(9);

    vector<int> vec2;
    Solution s;
    vec2 = s.twoSum(vec, 9);

    vector<int>::iterator it;
    for(it = vec2.begin(); it != vec2.end(); it++)
    {
        cout<< *it <<endl;
    }

    return 0;
}
