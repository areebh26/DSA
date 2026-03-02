#include <iostream>
using namespace std;
class Node{
    public : 
    string song;
    Node* next;
    Node(string data){
        this->song=data;
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
    void insertAtEnd(string song){
        if(this->head==nullptr){
            Node* newNode = new Node(song);
            head=tail=newNode;
        }else{
             Node* newNode = new Node(song);
             tail->next=newNode;
             tail=newNode;
        }
    }
    void display(){
        Node*temp = head;
        while(temp!=tail->next){
            cout << temp->song << "=>";
            temp=temp->next;
        }
        cout << "NULL" ; 
    }
    void reverseDisplay(Node* n){
        if(n==NULL){
            
            return;
        }
        reverseDisplay(n->next);
        cout<<n->song << "=>";
}
       
};

int main(){
    List myList = List();
    myList.insertAtEnd("helllo");
    myList.insertAtEnd("afa");
    myList.insertAtEnd("fdf");
    myList.reverseDisplay(myList.head);
}


