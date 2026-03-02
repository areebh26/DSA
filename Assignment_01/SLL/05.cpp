#include <iostream>
using namespace std;
class Node{
    public : 
    string myFriend;
    Node* next;
    Node(string data){
        this->myFriend=data;
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
    void insertAtEnd(string myFriend){
        if(this->head==nullptr){
            Node* newNode = new Node(myFriend);
            head=tail=newNode;
        }else{
             Node* newNode = new Node(myFriend);
             tail->next=newNode;
             tail=newNode;
        }
    }
    void display(){
        Node*temp = head;
        while(temp!=tail->next){
            cout << temp->myFriend << "=>";
            temp=temp->next;
        }
        cout << "NULL" ; 
    }
    void friendInTheMiddle(){
        int count = 0;
        Node* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        Node* slow = head;
        Node* fast = head;
        Node* prevOfSlow = NULL;
        while(fast!= NULL && fast->next!= NULL){
            prevOfSlow=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(count%2==0){
            cout<< "the friend in the middle is : " << prevOfSlow->myFriend;
        }
        else{
             cout<< "the friend in the middle is : " << slow->myFriend;
        }
       
    }
   

};

int main(){
    List myList = List();
    myList.insertAtEnd("areeb");
    myList.insertAtEnd("agha");
    myList.insertAtEnd("abuzar");
    myList.insertAtEnd("ali");
    myList.insertAtEnd("abdullah");
    myList.insertAtEnd("ayesha");
    myList.insertAtEnd("ayeza");
    // myList.insertAtEnd("aurangzeb");
    myList.friendInTheMiddle();
}


