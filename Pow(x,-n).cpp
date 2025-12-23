1class Solution {
2public:
3    double myPow(double x, int n) {
4        long long N = n;
5        if (N < 0) {
6            x = 1 / x;
7            N = -N;
8        }
9
10        double ans = 1.0;
11
12        while (N > 0) {
13            if (N % 2 == 1) {
14                ans *= x;
15            }
16            x *= x;
17            N /= 2;
18        }
19
20        return ans;
21    }
22};
23