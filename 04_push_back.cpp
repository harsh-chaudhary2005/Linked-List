#include<iostream>
using namespace std;
class Node {
public : 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List {
    Node* Head;
    Node* Tail;
public: 
    List(){
        Head = Tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(Head == NULL){
            Head = Tail = newNode;
            return;
        } else {
            newNode->next = Head;
            Head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if (Head == NULL)
        {
           Head = Tail = newNode; 
        } else
        {
            Tail->next = newNode;
            Tail = newNode;
        }
        
        
    }
    void printLL(){
        Node* temp = Head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main(){
  List ll;

  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);

  ll.push_back(4);

  ll.printLL();
  return 0;
}