#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&head, int value)
{
    if (head == NULL)
    {
        insertAtHead(head, value);
    }
    else
    {
        Node *temp = head;
        Node *newNode = new Node(value);

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void insert(Node *&head, int value, int position = -1)
{
    if (head == NULL)
    {
        insertAtHead(head, value);
        return;
    }

    if (position == -1)
    {
        insertAtTail(head, value);
        return;
    }

    Node *temp = head;
    Node *newNode = new Node(value);
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

void deleteTail(Node *&head)
{
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    Node *delNode = temp->next;
    temp->next = NULL;
    delete delNode;
}

void deleteNode(Node *&head, int position = -1)
{
    if (head->next == NULL)
    {
        deleteHead(head);
        return;
    }

    if (position == -1)
    {
        deleteTail(head);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    insert(head, 7);
    print(head);
}