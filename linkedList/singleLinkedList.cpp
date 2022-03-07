#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
} *tail = NULL;

void insertAtHead(int d, Node *&head)
{

    Node *node1 = new Node(d);
    node1->next = head;
    head = node1;
}

void insertAtTail(int d, Node *&tail)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    // Node *tail = NULL;
    // insertAtHead(4, head);
    // insertAtHead(5, head);
    // insertAtHead(6, head);
    // insertAtHead(7, head);
    // print(head);
    insertAtTail(3, tail);
    insertAtTail(2, tail);
    insertAtTail(1, tail);
    // print(head);

    return 0;
}