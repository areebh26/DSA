#include <iostream>
using namespace std;
class Node {
    public : 
    int price;
    Node* next;
    Node(int data){
        this->price=data;
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
    void insertAtEnd(int price){
        if(this->head==nullptr){
            Node* newNode = new Node(price);
            head=tail=newNode;
        }else{
             Node* newNode = new Node(price);
             tail->next=newNode;
             tail=newNode;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=tail->next){
            cout << temp->price << "=>";
            temp=temp->next;
        }
        cout << "NULL" ; 
    }

    void conversion(){
        Node* temp = head;
        cout << "Even priced friuts : " ;
        while(temp!=NULL){
            if(temp->price%2==0){
                cout << temp->price << "=>";
            }
            temp=temp->next;
        }
        cout<<"NULL";
        temp=head;
        
        cout << "   Odd priced friuts : " ;
        while(temp!=NULL){
            if(temp->price%2!=0){
                cout << temp->price << "=>";
            }
            temp=temp->next;
        }
        cout<<"NULL";
    }
    

};

int main(){
    List myList = List();
    myList.insertAtEnd(9);
    myList.insertAtEnd(5);
    myList.insertAtEnd(92);
    myList.insertAtEnd(1);
    myList.insertAtEnd(6);
    myList.insertAtEnd(7);
    myList.insertAtEnd(65);
    myList.insertAtEnd(44);
    myList.insertAtEnd(67);
    myList.insertAtEnd(9);
    myList.insertAtEnd(67);
    myList.insertAtEnd(69);
    myList.insertAtEnd(10); 
    myList.insertAtEnd(33);
    myList.insertAtEnd(35);
    myList.insertAtEnd(44);
    myList.conversion();


    
}


