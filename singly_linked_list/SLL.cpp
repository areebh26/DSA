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
    void display(){
        cout << this->data;
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
    void insertAtStart(int num){
         if(this->head==nullptr){
            Node* newNode = new Node(num);
            head=tail=newNode;
        }
        else{
                Node* newNode = new Node(num);
                newNode->next=head;
                head=newNode;
        }
    }
    void deleteFirstNode(){
        if(this->head==nullptr){
           cout << "list is empty";
        }
        else{
            Node* temp=head;
            head=head->next;
            // temp->next=nullptr;
            delete temp;
            }
    }
    void search(int key){
        if(key>length() || key < 0){
            cout << "no node at this position";
        }
        else{
            Node* temp = head;
            int count=0;
            Node* secondTemp;
        
            while(temp!=nullptr){
                if(count==key){
                    secondTemp=temp;
                    break;
                }
                temp=temp->next;
                count++;
            }
            cout << "The data at " << key << " index is : " << secondTemp->data ;
        }
    }
    int length(){
        Node* temp = head;
        int count=0;
        
        while(temp!=nullptr){
            temp=temp->next;
            count++; 
        }
        return count;
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
    list.insertAtStart(0);
    list.deleteFirstNode();
    list.deleteFirstNode();
    // cout << list.length();
    // list.search(0);
    list.display();
}