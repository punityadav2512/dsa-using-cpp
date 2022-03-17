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

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    Node *temp = head;
    // create new node;
    Node *temp1 = new Node(data);
    int count = 1;
    if (head == NULL && tail == NULL)
    {
        temp1->next = head;
        head = temp1;
        tail = temp1;
        return;
    }

    if (position == 1)
    {
        // temp1->next = temp;
        // head = temp1;
        // or
        insertAtHead(data, head, tail);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at last
    if (temp->next == NULL)
    {
        insertAtTail(data, tail, head);
        return;
    }
    temp1->next = temp->next;
    temp->next = temp1;
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
    insertAtTail(8, tail, head);
    print(head);
    // insertAtTail(5, tail, head);
    // print(head);
    // insertAtTail(7, tail, head);
    // print(head);
    insertAtPosition(head, tail, 1, 6);
    print(head);
    insertAtPosition(head, tail, 3, 9);
    print(head);
    insertAtPosition(head, tail, 7, 9);
    print(head);
    insertAtTail(7, tail, head);
    print(head);

    return 0;
}