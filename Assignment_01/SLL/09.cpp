#include <iostream>
using namespace std;
class Node{
    public : 
    int id;
    Node* next;
    Node(int data){
        this->id=data;
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
    void insertAtEnd(int id ){
        if(this->head==nullptr){
            Node* newNode = new Node(id);
            head=tail=newNode;
        }else{
             Node* newNode = new Node(id);
             tail->next=newNode;
             tail=newNode;
        }
    }
    void display(){
        Node*temp = head;
        while(temp!=tail->next){
            cout << temp->id << "=>";
            temp=temp->next;
        }
        cout << "NULL" ; 
    }
    void deleteBooks(int id){
        Node* temp = head;
        Node* prev = NULL;
        Node* prev2=NULL;
        bool isDeleted = false;
        while(temp!= NULL){
            if(temp->id==id){
                isDeleted=true;
                if(temp==head){
                    Node* anotherTemp=temp->next;

                    temp->next=NULL;
                    temp=head=anotherTemp;
                    
                }
                else if(temp==tail){
                    tail=prev;
                    tail->next=NULL;
                    temp->next=NULL;
                }else{
                    prev->next=temp->next;
                    temp=prev;
                    prev=prev2;
                }
            }
            else{
                prev2=prev;
                prev=temp;
                temp=temp->next;
            }
            
        }
        if(!isDeleted){
            cout << "Book not found\n" ; 
        }else{
             cout << "Deletion done " ; 
        }
    }
  

};

int main(){
    List myList = List();
    myList.insertAtEnd(1);
    myList.insertAtEnd(1);
    myList.insertAtEnd(1);


    myList.insertAtEnd(2);
    myList.insertAtEnd(3);
    myList.insertAtEnd(4);
    myList.insertAtEnd(5);
    myList.insertAtEnd(3);
    myList.insertAtEnd(3);

    myList.insertAtEnd(3);

    myList.insertAtEnd(6);
    myList.insertAtEnd(7);
    myList.insertAtEnd(8);
    myList.insertAtEnd(8);
    myList.insertAtEnd(8);
    myList.insertAtEnd(8);
    cout << "Before deletion : " ;
    myList.display(); 
    cout << "\nEnter id for the book you want to delete : " ;
    int x ;
    cin >> x;
    
    myList.deleteBooks(x);
    myList.display();
    
}


