#include<iostream>
using namespace std;
int main() {

    /* FOR LOOP*/

   // int i;

    //for(i = 1 ; i <=25; i+=5){

      //  cout<<"Sohail got into Deloitte " << i << " times " << endl;
   // }


   /* WHILE LOOP*/

   //int i = 5;  //initialization

  // while(i >= 1){  //Check the condition
   // cout<<"Sohail has " << i << " books " << endl;

   // i -= 1;  //Task operation
  // }

  // cout<<i;


  /* DO-WHILE LOOP*/


  //int i = 2; //initialization

  //do{

   // cout<< "Sohail " << i << endl;
   // i = i + 1;   //Operation
 // }
 // while(i <= 1);   //Condition
 // cout<< i << endl;



    int low = 1;
    int high = 5;
    int sum = 0;

    for(int i = low; i<=high; i++) {
        
        sum = sum + i;      
        cout<< sum << endl;

    return 0;

}