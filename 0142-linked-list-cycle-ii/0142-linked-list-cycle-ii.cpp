/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<ListNode*,int> mp;
    ListNode *detectCycle(ListNode *head) {
        while(head!=NULL){
            if(mp.find(head) == mp.end()){
                mp[head]++;
            }
            else{
                break;
            }
            head=head->next;
        }
        return head;
    }
};