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

    Node *n2 = new Node();
    n2->data = 98;
    n2->next = NULL;

    HEAD->next = n2;

    Node *n3 = new Node();
    n3->data = 100;
    n3->next = NULL;

    n2->next = n3;

    Node *n4 = new Node();
    n4->data = 105;
    n4->next = NULL;

    n3->next = n4;

    Node *n5 = new Node();
    n5->data = 110;
    n5->next = NULL;

    n4->next = n5;

    Node *n6 = new Node();
    n6->data = 120;
    n6->next = NULL;

    n5->next = n6;

    Node *n7 = new Node();
    n7->data = 125;
    n7->next = NULL;

    n6->next = n7;


    cout << "N2:" << n2->data << endl;
    cout << "N2:" << n2->next << endl;
    cout << "N3:" << &n3 << endl;
    cout << endl;

    cout << "N3:" << n3->data << endl;
    cout << "N3:" << n3->next << endl;
    cout << "N4:" << &n4 << endl;
    cout << endl;

    cout << "N4:" << n4->data << endl;
    cout << "N4:" << n4->next << endl;
    cout << "N5:" << &n5 << endl;
    cout << endl;

    cout << "N5:" << n5->data << endl;
    cout << "N5:" << n5->next << endl;
    cout << "N6:" << &n6 << endl;
    cout << endl;

    cout << "N6:" << n6->data << endl;
    cout << "N6:" << n6->next << endl;
    cout << "N7:" << &n7 << endl;
    cout << endl;

    cout << "N7:" << n7->data << endl;
    cout << "N7:" << n7->next << endl;
    cout << "N7:" << &n7 << endl;
    cout << endl;
}