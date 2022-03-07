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

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;

    // Node *temp1 = head;
    // while (temp1 != NULL)
    // {
    //     temp1 = temp1->next;
    // }
    // temp1->next = temp;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    Node *temp1 = new Node(d);
    temp1->next = temp->next;
    temp->next = temp1;
}

// void deleteNode(int position, Node *&head)
// {
//     if (position == 1)
//     {
//         Node *temp = head;
//         head = temp->next;
//         temp->next = NULL;
//         delete temp;
//     }
//     else
//     {
//         Node *temp = head;
//         Node *temp1 = NULL;
//         int count = 1;
//         while (count < position)
//         {
//             temp1 = temp;
//             temp = temp->next;

//             count++;
//         }
//         temp1->next = temp->next;
//         temp->next = NULL;
//         delete temp;
//     }
// }

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *current = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
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
    Node *node1 = new Node(5);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    InsertAtHead(head, 7);
    InsertAtHead(head, 11);
    InsertAtHead(head, 14);
    InsertAtTail(tail, 44);
    InsertAtPosition(tail, head, 1, 5);
    InsertAtPosition(tail, head, 7, 5);
    cout << "Linked list is: " << endl;
    deleteNode(3, head);
    print(head);

    return 0;
}