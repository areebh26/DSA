#include <iostream>
using namespace std;
class Node{
    public : 
    int task;
    Node* next;
    Node(int data){
        this->task=data;
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
    void  insertAtEnd(int task ){
        if(this->head==nullptr){
            Node* newNode = new Node(task);
            head=tail=newNode;
        }else{
             Node* newNode = new Node(task);
             tail->next=newNode;
             tail=newNode;
        }
    }
    void display(){
        Node*temp = head;
        while(temp!=NULL){
            cout << temp->task << "=>";
            temp=temp->next;
        }
        cout << "NULL" ; 
    }
    void swap(){
        Node*temp = head;
        Node* x = head;
        while(temp!=NULL){
           Node* anotherTemp = temp ; 
           temp=temp->next->next;
           Node* a = anotherTemp;
           Node* b = anotherTemp->next;
            a->next=temp;
            b->next=a;
          





            
           
            
        }
        
    }
   
  

};

int main(){
    List myList = List();
    myList.insertAtEnd(1);
    myList.insertAtEnd(2);
    myList.insertAtEnd(3);


    myList.insertAtEnd(4);
    myList.insertAtEnd(5);
    myList.insertAtEnd(6);
    myList.swap();
  
    myList.display();
    
}


