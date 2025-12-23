1class Solution {
2public:
3    ListNode* mergeKLists(vector<ListNode*>& lists) {
4
5        priority_queue<
6            pair<int, ListNode*>,
7            vector<pair<int, ListNode*>>,
8            greater<pair<int, ListNode*>>
9        > pq;
10
11        for (auto list : lists) {
12            if (list != nullptr) {
13                pq.push({list->val, list});
14            }
15        }
16
17        ListNode* dummy = new ListNode(0);
18        ListNode* tail = dummy;
19
20        while (!pq.empty()) {
21            auto [val, node] = pq.top();
22            pq.pop();
23
24            tail->next = node;
25            tail = tail->next;
26
27            if (node->next != nullptr) {
28                pq.push({node->next->val, node->next});
29            }
30        }
31
32        return dummy->next;
33    }
34};
35