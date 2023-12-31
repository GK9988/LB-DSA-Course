#include <bits/stdc++.h>
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
};

void insert(Node *&head, int value, int position = -1)
{

    Node *newNode = new Node(value);
    Node *temp = head;

    if (head == NULL)
    {
        head = newNode;
        head->next = head;
        return;
    }
    if (position == -1)
    {
        do
        {
            temp = temp->next;
        } while (temp->next != head);

        newNode->next = temp->next;
        temp->next = newNode;
        return;
    }

    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    if (position == 1)
    {
        head = newNode;
    }
}

void deletion(Node *&head, int position)
{
    Node *temp = head;

    if (position == 1)
    {
        if (head->next == head)
        {
            head = NULL;
            return;
        }

        while (temp->next != head)
        {
            temp = temp->next;
        }

        Node *delNode = temp->next;
        temp->next = temp->next->next;
        head = temp->next;
        delete delNode;
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
    delete delNode;
}

void print(Node *&head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    Node *head = NULL;

    insert(head, 2);
    print(head);
    insert(head, 1, 1);
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