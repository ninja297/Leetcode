1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> mp; 
5
6        for (int i = 0; i < nums.size(); i++) {
7            int need = target - nums[i];
8
9            
10            if (mp.find(need) != mp.end()) {
11                return {mp[need], i};
12            }
13
14            
15            mp[nums[i]] = i;
16        }
17        return {};
18    }
19};