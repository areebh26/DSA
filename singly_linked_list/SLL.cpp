class Node{
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
class LinkedList{
    Node* head;
    Node* tail;
    LinkedList(){
        this->head=this->tail=nullptr;
    }
    
}