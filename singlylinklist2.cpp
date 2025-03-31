#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    // HEAD
    Node *HEAD = NULL;
    HEAD = new Node();

    //    1st Node
    HEAD->data = 25;
    HEAD->next = NULL;

    Node *current = new Node();
    current->data = 98;
    current->next = NULL;

    HEAD->next = current;

    current= new Node();
    current->data = 100;
    current->next = NULL;

    HEAD->next->next = current; 

    current= new Node();
    current->data = 105;
    current->next = NULL;

    HEAD->next->next->next = current;
    
    current= new Node();
    current->data = 110;
    current->next = NULL;

    HEAD->next->next->next->next = current;

    Node *ptr = NULL;
    ptr = HEAD;

    while (ptr != NULL)
    {

        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    // Node *n6 = new Node();
    // n6->data = 120;
    // n6->next = NULL;

    // n5->next = n6;

    // Node *n7 = new Node();
    // n7->data = 125;
    // n7->next = NULL;

    // n6->next = n7;

    // cout << "N2:" << n2->data << endl;
    // cout << "N2:" << n2->next << endl;
    // cout << "N3:" << &n3 << endl;
    // cout << endl;

    // cout << "N3:" << n3->data << endl;
    // cout << "N3:" << n3->next << endl;
    // cout << "N4:" << &n4 << endl;
    // cout << endl;

    // cout << "N4:" << n4->data << endl;
    // cout << "N4:" << n4->next << endl;
    // cout << "N5:" << &n5 << endl;
    // cout << endl;

    // cout << "N5:" << n5->data << endl;
    // cout << "N5:" << n5->next << endl;
    // cout << "N6:" << &n6 << endl;
    // cout << endl;

    // cout << "N6:" << n6->data << endl;
    // cout << "N6:" << n6->next << endl;
    // cout << "N7:" << &n7 << endl;
    // cout << endl;

    // cout << "N7:" << n7->data << endl;
    // cout << "N7:" << n7->next << endl;
    // cout << "N7:" << &n7 << endl;
    // cout << endl;
}