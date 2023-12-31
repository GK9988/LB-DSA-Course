#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node *&head, int value)
{
    Node *temp = new Node(value);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    if (head == NULL)
    {
        insertAtHead(head, value);
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
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

    Node *newNode = new Node(value);
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    newNode->next = temp->next;
    newNode->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
}

void deletion(Node *&head, int position)
{
    Node *temp = head;

    if (position == 1)
    {

        head->next->prev = NULL;
        head = head->next;
        delete temp;
        return;
    }

    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *delNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete delNode;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <--> ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{

    Node *head = NULL;

    insert(head, 1);
    print(head);
    insert(head, 2);
    print(head);
    insert(head, 4);
    print(head);
    insert(head, 3, 3);
    print(head);

    deletion(head, 1);
    print(head);
    deletion(head, 2);
    print(head);
}