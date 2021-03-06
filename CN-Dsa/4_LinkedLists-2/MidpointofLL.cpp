#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

using namespace std;
Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}
/*--------------------------- Hare nad tortoise approach-----------*/
Node *midPoint(Node *head)
{
    Node *slow = head;
    Node *fast = head->next; //return first element of the midpoint if u want 2nd ele do fast=head
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        Node *mid = midPoint(head);
        if (mid != NULL)
        {
            cout << mid->data;
        }
        cout << endl;
    }
    return 0;
}