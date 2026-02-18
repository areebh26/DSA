// Write down a program that find ∑X2
//  , where input for X and starting and stopping value is entered by
// the user.


#include <iostream>
using namespace std;
int main(){
    int start;
    int stop;
    int result=0;
    bool boolean=false;
    do{
        boolean=false;
        cout<<"Enter the starting value :  " <<endl;
        cin >> start;
        cout<<"Enter the stopping value : " << endl;
        cin>>stop;
        if(stop < start){
            cout<<"Stopping value must be greater then starting value ! " << endl;
            boolean=true;
        }else{
            while (start<=stop) {
                result+=start*start;
                start++;
            }
            
        }


    } while (boolean);
    cout<<"∑X2 is : "<< result << " ";
    
   
}