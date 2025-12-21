1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if (nums.empty()) return 0;
5
6        int i = 0; 
7
8        for (int j = 1; j < nums.size(); j++) {
9            if (nums[j] != nums[i]) {
10                i++;
11                nums[i] = nums[j];
12            }
13        }
14        return i + 1; 
15    }
16};
17