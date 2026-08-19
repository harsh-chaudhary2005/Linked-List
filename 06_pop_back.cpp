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
    void pop_front(){
        if(Head == NULL){
            return;
        }

        Node* temp = Head;
        Head = Head->next;
        temp->next = NULL;

        delete temp;
    }
    void pop_back(){
        if (Head == NULL)
        {
            return;
        }

        Node* temp = Head;
        while (temp->next != Tail)
        {
            temp = temp->next;
        }
        
        temp->next = NULL;
        delete Tail;
        Tail = temp;
        
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
  ll.pop_front();
  ll.pop_back();
  ll.printLL();
  return 0;
}