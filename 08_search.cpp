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
    void printLL(){
        Node* temp = Head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int search(int key){
        Node* temp = Head;
        int idx = 0;

        while (temp != NULL)
        {
            if(temp->data == key){
                return idx;
            }

            temp = temp->next;
            idx++;
        }

        return -1;
        
    }
};
int main(){
  List ll;

  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);


  ll.printLL();
  cout << ll.search(3) << endl;
  return 0;
}