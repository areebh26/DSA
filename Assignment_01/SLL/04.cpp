#include <iostream>
using namespace std;
class Node{
    public : 
    string log;
    Node* next;
    Node(string data){
        this->log=data;
        this->next=NULL;
    }
};
class List{
    public:
    Node* head;
    Node* tail;
    List(){
        this->head=this->tail=NULL;
    }
    void insertAtEnd(string log){
        if(this->head==NULL){
            Node* newNode = new Node(log);
            head=tail=newNode;
        }else{
             Node* newNode = new Node(log);
             tail->next=newNode;
             tail=newNode;
        }
    }
    void display(){
        Node*temp = head;
        while(temp!=tail->next){
            cout << temp->log << "=>";
            temp=temp->next;
        }
        cout << "NULL" ; 
    }

    bool hasCycle(){
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
    

};

int main(){
    List myList = List();
    myList.insertAtEnd("helllo");
    myList.insertAtEnd("afa");
    myList.insertAtEnd("fdf");
    cout << "the list has a loop ? " << myList.hasCycle() ;
    
}


