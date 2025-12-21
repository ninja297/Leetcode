1class Solution {
2public:
3    bool isPalindrome(int x) {       
4        if (x < 0 || (x % 10 == 0 && x != 0))
5            return false;
6        int reversedHalf = 0;
7        while (x > reversedHalf) {
8            reversedHalf = reversedHalf * 10 + x % 10;
9            x /= 10;
10        }
11        return (x == reversedHalf || x == reversedHalf / 10);
12    }
13};
14