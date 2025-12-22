1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        char result = 0;
5
6        for (char c : s) {
7            result ^= c;
8        }
9
10        for (char c : t) {
11            result ^= c;
12        }
13
14        return result;
15    }
16};
17