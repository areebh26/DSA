// Write the computer program to apply the concepts of Array List. The array list will include the following
// functions:
// 1. Insert the value at end of the list
// 2. Insert the value at start of the list
// 3. Insert the value after specific value
// 4. Insert the value before specific value
// 5. Display the array list
// 6. Delete the value from end of the list
// 7. Delete the value from start of the list
// 8. Delete specific value



#include <iostream>
using namespace std;

class ArrayList{
        int total_capacity;
        int* array;
        int size;
     public :    ArrayList(){
            size=0;
            total_capacity=10;
            array=new int[total_capacity];
        }
        void insertValueAtTheEndOfList(int num){
            if(size==0){
                array[0]=num;
                size++;
            }
            else if(size==total_capacity){
                int* array2 = new int[total_capacity*2];
                total_capacity*=2;
                for(int i = 0 ; i < this->size;i++){
                    array2[i]=this->array[i];
                }
                array2[size]=num;
                array=array2;
                size++;
                
            }else{
                array[size]= num;
                this->size+=1;
            }

        }
        void display(){
            cout << "{ ";
            for (int i = 0 ; i < this->size ; i++){
                cout << array[i] << " " ;  
            };
            cout << "}";
        }
};
int main(){
    ArrayList list = ArrayList();
    list.insertValueAtTheEndOfList(55);
    list.insertValueAtTheEndOfList(99);
    list.insertValueAtTheEndOfList(65);
    list.insertValueAtTheEndOfList(22);
    list.insertValueAtTheEndOfList(23);
    list.insertValueAtTheEndOfList(67);
    list.insertValueAtTheEndOfList(69);
    list.insertValueAtTheEndOfList(45);
    list.insertValueAtTheEndOfList(21);
    list.insertValueAtTheEndOfList(99);
    list.insertValueAtTheEndOfList(100);
     list.insertValueAtTheEndOfList(100);
      list.insertValueAtTheEndOfList(100);
       list.insertValueAtTheEndOfList(100);
        list.insertValueAtTheEndOfList(100);
   
   
    list.display();

}
    

    
