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
    void insert(int val, int pos){
        if(pos < 0){
            cout << "invalid pos\n";
            return;
        }

        if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node* temp = Head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "invalid pos\n";
                return;
            }
            
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        
        
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

  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  
  ll.insert(4, 1);
  ll.printLL();
  return 0;
}