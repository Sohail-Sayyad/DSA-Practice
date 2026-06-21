#include<iostream>
#include<string>
using namespace std;
int main() {

   // string s1;

    //cout<<"Enter the string:" << endl;
   
  //  getline(cin, s1);  //Acts as an input from the user
                       //Also reads the entire line including spaces.

   // cout<<"The strings is: " << s1 << endl;


   string s = "Sohail";
   int len = s.size();  //Counts the number of character in a string
   cout<<len;

   s[len-1] = 'z';
   cout<<s[len-1];
   cout<<s;



    return 0;
}