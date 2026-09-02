/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverse(ListNode * head)
    {
        ListNode* curr=head; 

        ListNode* prev=NULL; 

        ListNode* next; 

        while(curr!=NULL)
        {
            next=curr->next; 
            curr->next=prev; 
            prev=curr; 
            curr=next; 
        }
    return prev; 
    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        cout.tie(NULL); 


        //  Always going to add from LSD - Least Significant digit ... 
        ListNode* temp1=l1; 
        ListNode* temp2=l2; 

        ListNode* Dummy = new ListNode(-1); 
        ListNode* curr= Dummy ; 
        int carry=0; 

        while(temp1 !=NULL || temp2!=NULL  || carry!=0)
        {
            int sum=carry ; 
            if(temp1!=NULL)
            {
                sum+=temp1->val; 
                temp1=temp1->next; 
            }

            if(temp2!=NULL)
            {
                sum+=temp2->val; 
                temp2=temp2->next; 
            }

            carry=sum / 10 ;
            curr->next= new ListNode(sum % 10); 
            curr=curr->next; 

        }
        return Dummy->next; 

    }
};

// T.C-> O(n + m)   n = no of nodes in 1st LL , m = no of nodes in 2nd LL
// S.C-> O( max ( n , m ))