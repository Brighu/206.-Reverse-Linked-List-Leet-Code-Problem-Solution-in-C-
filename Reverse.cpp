class Solution {
public:
    Node* reverseList(Node* head) {
        if(head==nullptr)
            return head;
        stack<Node*> s1;
        Node* temp;
        temp=head;
        while(temp!=nullptr){
            s1.push(temp);
            temp=temp->next;
        }
        temp=s1.top();
        head=temp;
        s1.pop();
        while(!s1.empty()){
            temp->next=s1.top();
            s1.pop();
            temp=temp->next;
        }
        temp->next=nullptr;
        temp=nullptr;
        free(temp);
        return head;
    }
};
