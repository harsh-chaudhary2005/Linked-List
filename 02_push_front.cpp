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
};
int main(){
  List ll;

  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  return 0;
}