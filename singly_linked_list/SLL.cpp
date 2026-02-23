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
    void insertAfterSpecifiedValue (int num , int toAdd ){
            if(this->head==nullptr){
            cout << "list is empty";

        }else{
             Node* temp = head;
             Node* tempSecond = head;
             bool isFound=false;
             while(temp!=nullptr){

                if(temp->data==num){
                    isFound=true;
                    if(temp==head){
                        Node* newNode = new Node(toAdd);
                        Node* temp=head->next;
                        head->next=newNode;
                        newNode->next=temp;
                    }
                    else if(temp==tail){
                        insertAtEnd(toAdd);
                    }
                    else{
                        Node* newNode = new Node(toAdd);
                        Node* anotherTemp = temp->next;
                        temp->next=newNode;
                        newNode->next=anotherTemp;
                    }
                }
                tempSecond=temp;
                temp=temp->next;
            }
            if(!isFound){
                cout << "Node given by user is not found";
            }
        }
    }
     void insertBeforeSpecifiedValue (int num , int toAdd ){
            if(this->head==nullptr){
            cout << "list is empty";

        }else{
             Node* temp = head;
             Node* tempSecond = head;
             bool isFound=false;
             while(temp!=nullptr){

                if(temp->data==num){
                    isFound=true;
                    if(temp==head){
                        insertAtStart(toAdd);
                        Node* newNode = new Node(toAdd);
                        
                    }
                    else if(temp==tail){
                         Node* newNode = new Node(toAdd);
                         tempSecond->next=newNode;
                         newNode->next=tail;
                        }
                    else{
                        Node* newNode = new Node(toAdd);
                        tempSecond->next=newNode;
                        newNode->next=temp;

                        
                    }
                }
                tempSecond=temp;
                temp=temp->next;
            }
            if(!isFound){
                cout << "Node given by user is not found";
            }
        }
    }
        
    
    void deleteFirstNode(){
        if(this->head==nullptr){
           cout << "list is empty";
        }
        else{
            Node* temp=head;
            head=head->next;
            temp->next=nullptr;
            // delete temp;
            }
    }
    void deleteLastNode(){
        if(this->head==nullptr){
           cout << "list is empty";
        }else{
            Node*temp = head;
            while(temp!=nullptr){
                if(temp->next==tail){
                    tail=temp;
                    temp->next=nullptr;
                    break;
                }
                temp=temp->next;
            }
            
        }
    }
    void deleteNodeGivenByUser(int num){
        if(this->head==nullptr){
            cout << "list is empty";

        }else{
             Node* temp = head;
             Node* tempSecond = head;
             bool isFound=false;
             while(temp!=nullptr){

                if(temp->data==num){
                    isFound=true;
                    if(temp==head){
                        deleteFirstNode();
                    }
                    else if(temp==tail){
                        deleteLastNode();
                    }
                    else{
                        tempSecond->next=temp->next;
                    }
                }
                tempSecond=temp;
                temp=temp->next;
            }
            if(!isFound){
                cout << "Node given by user is not found";
            }
        }
       
    }
    void deleteList(){
        Node* temp = head;
        while(temp!=nullptr){
            Node* secondTemp = temp;
            temp=temp->next;
            delete secondTemp;
        }
        this->head=nullptr;
        this->tail=nullptr;
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
    static LinkedList merge(LinkedList l1 , LinkedList l2){
        LinkedList list = LinkedList();
        Node* temp = l1.head;
        while(temp!=nullptr){
            list.insertAtEnd(temp->data);
            temp=temp->next;
        }
        Node* anotherTemp = l2.head;
         while(anotherTemp!=nullptr){
            list.insertAtEnd(anotherTemp->data);
            anotherTemp=anotherTemp->next;
        }
        return list;

    }
    void display(){
        Node* temp = head;
        
        while(temp!=nullptr){
            cout << temp->data << "->";
            temp=temp->next; 
        }
        cout << "NULL  ";
    }
    void displayReverse(){
        Node* temp = head;
        LinkedList list = LinkedList();

        while(temp!=nullptr){
            list.insertAtStart(temp->data);
            temp=temp->next;
        }
        list.display();
    }

};
int main(){
    LinkedList list = LinkedList();
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    LinkedList list2 = LinkedList();
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    LinkedList myList = LinkedList::merge(list,list2);
    myList.display();
    
   
    
}