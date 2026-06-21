#include<iostream>
#include<string>
using namespace std;

//Void Function

   // void printName() {     //function with an empty parameter
     //   cout<<"Sohail";   
   // }

     //   int main() {

       //     printName();  //Calling the function





      //Parameterised function


    // void printName(string name) {

       // cout<<"hey" << endl;
    
      //}

      //int main() {

//        string name;
  //      cout<<"Enter the name: " << endl;
    //    cin>>name;
      //  cout<<"hey" << name << endl;
        //printName(name);
        
       // string name2;
  //      cout<<"Enter the name : " << endl;
    //    cin>>name2;
 //       cout<<"hey" << name2 << endl;
   //     printName(name2);



   //Take 2 numbers and print its sum

 //  void printNumber(int a, int b) {

  //  cout<<"The sum of the two numbers is: " << (a+b) << endl;

  // }

 //  int main() {

   // int a;
    //cout<<"Enter the value of a: " << endl;
    //cin>>a;
    
    //int b;
  //  cout<<"Enter the value of b: " << endl;
 //   cin>>b;

   // printNumber(a,b);
    
  //  return 0;

  // }




  //Pass by value


  //void doSomething(int num){
//    cout<<num<<endl;
//    num+=5;
//    cout<<num<<endl;
  //  num+=5;
  //  cout<< num << endl;
 // }                    //Copy function is destroyed.

 // int main() {

   // int num = 10;
   // doSomething(num);
   // cout<<num<<endl;
   // return 0;
 // }


// void Name(string &s) {
  //  s[0] = 'y';
   // cout<<s<<endl;
// }

// int main() {
  //  string s = "Sohail";
   // Name(s);
//    cout<<s<<endl;
//    return 0;
// }


void doSomething(int arr[], int n) {
  arr[0] += 100;
  cout<<"Value inside function: " << arr[0] << endl;
}

int main() {
  
  int n = 5;
  int arr[5];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }

  doSomething(arr, n);

  cout<< "Value inside int main: " << arr[0] << endl;
  return 0;

}
 
   
        