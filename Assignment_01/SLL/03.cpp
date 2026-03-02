#include <iostream>
using namespace std;
class Node{
    public : 
    string contact;
    Node* next;
    Node(string data){
        this->contact=data;
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
    void insertAtEnd(string contact){
        if(this->head==nullptr){
            Node* newNode = new Node(contact);
            head=tail=newNode;
        }else{
             Node* newNode = new Node(contact);
             tail->next=newNode;
             tail=newNode;
        }
    }
    void display(){
        Node*temp = head;
        while(temp!=NULL){
            cout << temp->contact << "=>";
            temp=temp->next;
        }
        cout << "NULL" ; 
    }
    void removeDuplicates(){
        Node* temp = head;
        while(temp!=NULL){
            Node* secondTemp = temp->next;
            Node* previousOfSecondTemp = temp;
            
            while(secondTemp!=NULL){
               
                if(temp->contact==secondTemp->contact){
                    if(secondTemp==tail){
                        tail=previousOfSecondTemp;
                    }
                    previousOfSecondTemp->next=secondTemp->next;
                    secondTemp=previousOfSecondTemp->next;



                    // delete secondTemp;
                    // secondTemp->next=NULL;
                    // secondTemp=anoterTemp;
                    // anoterTemp=anoterTemp->next;


                }else{
                    secondTemp=secondTemp->next;
                    previousOfSecondTemp=previousOfSecondTemp->next;
                    
                }
               
                
            
            }
            temp=temp->next;    

        
        }
    }
   

};

int main(){
    List myList = List();
    myList.insertAtEnd("hello");
    myList.insertAtEnd("my");
    myList.insertAtEnd("name");
    myList.insertAtEnd("is");
    myList.insertAtEnd("areeb");
    myList.insertAtEnd("my");
    myList.insertAtEnd("I");
    myList.insertAtEnd("am");
    myList.insertAtEnd("good");
    myList.insertAtEnd("boy");
    myList.insertAtEnd("boy");
    
    // myList.display();
    myList.removeDuplicates();
    myList.display();

}


