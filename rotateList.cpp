class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }

        int len=1;
        ListNode* tail= head;
        while(tail->next !=NULL){
            tail= tail->next;
            len++;
        }

        k= k%len;
        if(k%len==0){
            return head;
        }
        int cnt= len-k;
        ListNode* temp= head;
        while((cnt-1)>0){
            temp= temp->next;
            cnt--;
        }
        tail->next = head;
        

        //Changing head
        head= temp->next;
        temp->next= NULL;

        return head;
    }
};
