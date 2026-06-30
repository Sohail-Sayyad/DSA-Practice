#include<iostream>
#include<math.h>
using namespace std;
int main() {

    /*
    int n;
    int last_digit;

    cout<<"Enter the number to be extracted: " << endl;
    cin>>n;

    while(n>0){

        last_digit = n%10;
        cout<<last_digit;

        n=n/10;
    }

    


    int n;
    int cnt = 0;

    cout<<"Enter the number: ";
    cin>>n;

    while(n>0){

        cnt = cnt + 1;
        n = n/10;
    }

    cout<<"The number of digits are : " << cnt;


  



    //Count the digits (2nd method)
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    int cnt = (int)(log10(n) + 1);

    cout<<"The number of digits are: " << cnt;

      */


      //Reverse a number (Leetcode problem)


      /*
      int n;
      int last_digit;
      int reverseNumber=0;

      cout<<"Enter the number ";
      cin>>n;

      while (n>0){

        last_digit = n%10;
        n = n/10;

        reverseNumber = (reverseNumber*10) + last_digit;
      }
      cout<<reverseNumber;

      */

      //Palindrome number (Leetcode Problem)

      int n;
      int last_digit;
      int reverseNumber=0;

      cout<<"Enter the number ";
      cin>>n;

      int palindromeNumber = n;

      while (n>0){

        last_digit = n%10;
        n = n/10;

        reverseNumber = (reverseNumber*10) + last_digit;
      }

      if(palindromeNumber==reverseNumber){
        cout<<"True";
      }
      else{
        cout<<"False";
      }

      return 0;
    }


