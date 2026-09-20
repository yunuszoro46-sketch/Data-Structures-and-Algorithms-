#include<iostream>

using namespace std;
int main(){
    int n,option;

    cout<< "Enter queue size " <<endl;
    cin>>n; 
    int *queue =  new int [n];

    int front = -1 , int rear = -1 ;

   while (true){
              cout<< " 1. Enqueue "<<endl;              
              cout<< " 2. Dequeue "<<endl;
              cout<< " 3. Empty "<<endl;
              cout<< " 4. Full "<<endl;
       cin>>option;

     if(option == 1 ){
       if(rear = n -1 ) {
        cout<<"Overflow";
       } 
       else{
          int item;
         cout<<"Enter items in enqueue"<<endl;
         cin>>item;

         if(front==-1){
             front =0;
         }
         rear ++ ;

         queue[rear] = item ;
       }
     cout<<"current queue: ";
       if(front == -1 || rear == -1 ){
               cout<<"queue is empty "
       }else{
         
   }
  

}
