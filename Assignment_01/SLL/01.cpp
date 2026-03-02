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
        if(this->head==nullptr){
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
    void reverseDisplay(){
        Node* first = head;
        Node* last = tail;
        while(last!=head){
            first=head;
            cout<< last->log << "=>";
            while(first->next!=last){
                first=first->next;
            }
            last=first;
        }
        cout<<head->log<<"=>NULL";
         
    }

};

int main(){
    List myList = List();
    myList.insertAtEnd("helllo");
    myList.insertAtEnd("afa");
    myList.insertAtEnd("fdf");
    myList.reverseDisplay();
}


