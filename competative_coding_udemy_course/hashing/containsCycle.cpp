#include <iostream>
#include <unordered_map>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

bool containsCycle(node *head)
{
    unordered_map<node *, bool> hashtable;
    node *temp = head;
    while (temp != NULL)
    {
        // check if temp already exists in hashtable
        if (hashtable.count(temp) != 0)
        {
            return true;
        }
        hashtable[temp] = true;
        temp = temp->next;
    }
    return false;
}

void insertAtHead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    // otherwise
    node *n = new node(data);
    n->next = head;
    head = n;
}

int main()
{
    node *a = NULL;
    insertAtHead(a, 1);
    insertAtHead(a, 2);
    insertAtHead(a, 3);
    insertAtHead(a, 4);
    insertAtHead(a, 5);

    node *temp = a->next->next->next->next;
    temp->next = a->next->next;

    if (containsCycle(temp))
    {
        cout << "cycle found";
    }
    else
    {
        cout << "cycle not found";
    }
}