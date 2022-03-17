#include <iostream>
using namespace std;

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

void insertAtTail(int data, Node *&tail, Node *&head)
{
    // create new node
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
    }
    if (tail != NULL)
    {

        tail->next = temp;
    }
    tail = temp;
}

void insertAtHead(int data, Node *&head, Node *&tail)
{
    // create new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    if (tail == NULL)
    {
        tail = temp;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(3, head, tail);
    print(head);
    insertAtHead(5, head, tail);
    print(head);
    insertAtHead(7, head, tail);
    print(head);
    insertAtTail(3, tail, head);
    print(head);
    insertAtTail(5, tail, head);
    print(head);
    // insertAtTail(7, tail, head);
    // print(head);

    return 0;
}