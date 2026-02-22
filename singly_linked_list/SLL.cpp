#include <iostream>
using namespace std;


class Node{
    public : 
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
class LinkedList{
    public : 
    Node* head;
    Node* tail;
    LinkedList(){
        this->head=this->tail=nullptr;
    }
    void insertAtEnd(int num){
        if(this->head==nullptr){
            Node* newNode = new Node(num);
            head=tail=newNode;
        }else{
             Node* newNode = new Node(num);
             tail->next=newNode;
             tail=newNode;
        }
    }
    void display(){
        Node* temp = head;
        
        while(temp!=nullptr){
            cout << temp->data << "->";
            temp=temp->next; 
        }
        cout << "NULL  ";
    }

};
int main(){
    LinkedList list = LinkedList();
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.display();
}