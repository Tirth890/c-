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

class Linkedlist
{
public:
    Node *Head;
    int count;

    Linkedlist()
    {
        this->Head = NULL;
        count = 0;
    }

    void insert_at_beginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->Head;
        this->Head = newNode;
        count++;
    }

    void deleteAtAnyPosition(int position)
    {
        if (this->Head == NULL || this->count == 0)
        {
            cout << "List is already empty" << endl;
            return;
        }

        Node *prev = this->Head;
        Node *current = this->Head;

        for (int i = 0; i < position; i++)
        {
            current = current->next;
        }

        for (int i = 0; i < position - 1; i++)
        {
            prev = prev->next;
        }

        prev->next = current->next;
        delete current;
        current = NULL;
        prev = NULL;
        delete prev;

        this->count--;
    }

    void DisplayNodes()
    {
        Node *ptr = this->Head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }

    void Search(int data)
    {
        Node *current = this->Head;
    int position = 0;
    while (current != NULL)
    {
        if (current->data == data)
        {
            cout << "Element is present at position: " << position << endl;
            return;
        }
        current = current->next;
        position++;
    }
    cout << "Element is not present in the list" << endl;
    }

    void ReversedLinkedList()
    {
        Node *prev = NULL;
        Node *current = this->Head;
        Node *next = NULL;
        
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        this->Head=prev;

    }
};

int main()
{
    Linkedlist list;
    int element;
    int Position;
    int choice;
    do
    {
        cout << "Press 0 for Exit" << endl;
        cout << "Press 1 to Insert a node at beginning" << endl;
        cout << "Press 2 to Search an element from list" << endl;
        cout << "Press 3 to Delete a node at any position in the list" << endl;
        cout << "Press 4 to Reverse linked list" << endl;
        cout << "Press 5 to Display elements" << endl;

        cout << "enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            exit;
            break;

        case 1:
            cout << "Enter data: ";
            cin >> element;
            list.insert_at_beginning(element);
            cout << "Data added successfully!";
            break;

        case 2:
            cout << "Enter the data: " << endl;
            cin >> element;
            list.Search(element);
            break;

        case 3:
            cout << "Enter Position: ";
            cin >> Position;
            list.deleteAtAnyPosition(Position);
            cout << "Data deleted Successfully!" << endl;
            break;

        case 4:
            list.ReversedLinkedList();
            cout << "Linked List Revesed successfully";
            break;

        case 5:
            list.DisplayNodes();
            break;

        default:
            cout << "Enter valid choice";
        }
    } while (choice != 0);

    return 0;
}