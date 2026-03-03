#include <iostream>
using namespace std;
class Node{
    public : 
    int num;
    Node* next;
    Node(int data){
        this->num=data;
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
    void insertAtEnd(int num ){
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
        Node*temp = head;
        while(temp!=tail->next){
            cout << temp->num << "=>";
            temp=temp->next;
        }
        cout << "NULL" ; 
    }
    void organize(){
        Node* slow = head;
        Node* fast = head;
        Node* prevOfSlow = NULL;
        while(fast!=NULL && fast->next!= NULL ){
            prevOfSlow=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* first = head;
        Node* last = prevOfSlow;
        while(last!=head){
            first=head;
            cout << last->num << " => " ; 
            while(first->next!=last){
                first=first->next;
            }
            last=first;

        }
        cout << head->num << "=>";


        Node* anotherFirst = slow->next;
        Node* anotherLast = tail;
        while(anotherLast!=slow->next){
            anotherFirst=slow->next;
            cout << anotherLast->num << " => " ; 
            while(anotherFirst->next!=anotherLast){
                anotherFirst=anotherFirst->next;
            }
            anotherLast=anotherFirst;

        }
        cout << slow->next->num << " =>" << slow->num << " =>" << " NULL" ;

        

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
    myList.insertAtEnd(7);
    myList.insertAtEnd(8);
    myList.organize();
    
}


