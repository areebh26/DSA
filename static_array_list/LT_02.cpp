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
        void insertValueAtTheStartOfList(int num){
            if(size==0){
                array[0]=num;
                size++;
            }
            else if(size==total_capacity){
                int* array2 = new int[total_capacity*2];
                total_capacity*=2;
                array2[0] = num;
                for(int i = 0 ; i < this->size;i++){
                    array2[i+1]=this->array[i];
                }
                
                array=array2;
                size++;
                
            }else{
                int* array2 = new int[total_capacity];
                array2[0] = num;
                for(int i = 0 ; i < this->size;i++){
                    array2[i+1]=this->array[i];
                }
                array=array2;
                size++;
             }

        }
        void insertValueAfterSpecificValue(int value , int input){
             if(size==0){
               cout << "list is empty . Initializing Array with your input";
               array[0]=input;
               size++;
            }
            else if(size==total_capacity){
                int* array2 = new int[total_capacity*2];
                total_capacity*=2;
                int indexOfValue = returnIndex(value);
                if(indexOfValue== -1){
                    cout<<"the value u entered is not found in the array.";
                }else{
                    
                    for(int i = 0 ; i <= indexOfValue;i++){
                    array2[i]=this->array[i];
                    }
                    array2[indexOfValue+1]=input;
                    for(int i = indexOfValue+1 ; i < size ; i++){
                        array2[i+1]=array[i];
                    }
                    array=array2;
                    size++;
                
                }
            }else{
                int indexOfValue = returnIndex(value);
                if(indexOfValue== -1){
                    cout<<"the value u entered is not found in the array.";
                }else{
                    int* array2 = new int[total_capacity];
                    for(int i = 0 ; i <= indexOfValue;i++){
                    array2[i]=this->array[i];
                    }
                    array2[indexOfValue+1]=input;
                    for(int i = indexOfValue+1 ; i < size ; i++){
                        array2[i+1]=array[i];
                    }
                    array=array2;
                    size++;
                }



             }
        }

         void insertValueBeforeSpecificValue(int value , int input){
             if(size==0){
               cout << "list is empty . Initializing Array with your input";
               array[0]=input;
               size++;
            }
            else if(size==total_capacity){
                int* array2 = new int[total_capacity*2];
                total_capacity*=2;
                int indexOfValue = returnIndex(value);
                if(indexOfValue== -1){
                    cout<<"the value u entered is not found in the array.";
                }else{
                    int indexOfValue = returnIndex(value);
                if(indexOfValue== -1){
                    cout<<"the value u entered is not found in the array.";
                }else{
                   
                    for(int i = 0 ; i < indexOfValue;i++){
                    array2[i]=this->array[i];
                    }
                    array2[indexOfValue]=input;
                     size++;
                    for(int i = indexOfValue+1 ; i < size ; i++){
                        array2[i]=array[i-1];
                    }
                    array=array2;
                   
                }
                   
                
                }
            }else{
                int indexOfValue = returnIndex(value);
                if(indexOfValue== -1){
                    cout<<"the value u entered is not found in the array.";
                }else{
                    int* array2 = new int[total_capacity];
                    for(int i = 0 ; i < indexOfValue;i++){
                    array2[i]=this->array[i];
                    }
                    array2[indexOfValue]=input;
                    size++;
                    for(int i = indexOfValue+1 ; i < size ; i++){
                        array2[i]=array[i-1];
                    }
                    array=array2;
                    
                }



             }
        }
        int returnIndex(int value){

                for (int i = 0 ; i < this->size ; i ++) {
                    if(array[i]==value){
                        return i;
                    }
                }
                return -1 ;
                
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
    list.insertValueAtTheEndOfList(2);
    list.insertValueAtTheEndOfList(2);

    list.insertValueAtTheEndOfList(435);
    list.insertValueAtTheEndOfList(343);
    list.insertValueAtTheEndOfList(5);
    list.insertValueAtTheEndOfList(21);
    list.insertValueAtTheEndOfList(254);
    list.insertValueAtTheEndOfList(20);
    list.insertValueAtTheEndOfList(244);
    list.insertValueAtTheEndOfList(211);
    list.insertValueAtTheEndOfList(2000);
    list.insertValueAtTheEndOfList(2112);
   
   
    list.insertValueBeforeSpecificValue(2112,1);
    

   

   
   
    list.display();

}
    

    
