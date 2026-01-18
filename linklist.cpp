#include<iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};

void inserthead(ListNode*& head, int val){
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;
}

void deleteAthead(ListNode*& head){
    if(head == NULL){
        return;
    }
    ListNode* temp = head;
    head = head->next;
    delete temp;
}

int findLength(ListNode* head){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}

int findLengthRecursive(ListNode* head){
    if(head == NULL){
        return 0;
    }
    return 1 + findLengthRecursive(head->next);
}

ListNode* reverseLinkedList(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(curr != NULL){
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

ListNode* getTail(ListNode* head){
    while(head->next != NULL){
        head = head->next;
    }
    return head;
}

void insertTail(ListNode*& head, int val){
    if(head == NULL){
        head = new ListNode(val);
        return;
    }
    ListNode* tail = getTail(head);
    tail->next = new ListNode(val);
}

void deleteAtTail(ListNode*& head){
    if(head == NULL){
        return;
    }

    if(head->next == NULL){
        deleteAthead(head);
        return;
    }

    ListNode* cur = head;
    ListNode* prev = NULL;

    while(cur->next != NULL){
        prev = cur;
        cur = cur->next;
    }

    prev->next = NULL;
    delete cur;
}

void printLinkedlist(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    ListNode* head = NULL;

    inserthead(head, 50);
    inserthead(head, 40);
    inserthead(head, 30);
    inserthead(head, 20);
    inserthead(head, 10);

    printLinkedlist(head);

    deleteAthead(head);
    printLinkedlist(head);

    cout << findLength(head) << endl;
    cout << findLengthRecursive(head) << endl;

    head = reverseLinkedList(head);
    printLinkedlist(head);

    insertTail(head, 60);
    printLinkedlist(head);

    deleteAtTail(head);
    printLinkedlist(head);

    return 0;
}
