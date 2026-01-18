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

int main(){

    ListNode* n = new ListNode(10);
    cout << n->val << endl;

    ListNode* m = new ListNode(20);
    n->next = m;

    if(n->next == NULL){
        cout << "n pointer does NOT point to any next node" << endl;
    }
    else{
        cout << "n pointer points to a next node" << endl;
    }

    return 0;
}
