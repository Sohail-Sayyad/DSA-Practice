/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n;
    n=5;

    for(i=1; i<=n; i++ ){   //Outer loop

        for(j=1; j<=n; j++ ){     //Inner loop
            cout<<"*";
        }

        cout<<endl;
    }
        return 0;


}
        */



//Pattern 2:

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            
            cout<<"*";
        }

        cout<<endl;

    }

    return 0;
}
*/

//Pattern 3:


/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){

            cout<< j << " ";
        }

         cout<<endl;

    }

   
        return 0;
}
        */



//Pattern 4:

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=1; i<=n; i++){

        for(j=1; j<=i; j++){

            cout<< i << " ";
        }

         cout<<endl;

    }
        return 0;
}
        */


//Pattern 5;

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    
    for(i=5; i>=1; i--){

        for(j=1; j<=i; j++){

            cout<<"*";
        }

         cout<<endl;

    }
        return 0;
}
        */



//Pattern 6:

/*

#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=5; i>=1; i--){
        for(j=1; j<=i; j++){

            cout<< j << " ";
        }

        cout<<endl;
    }

    return 0;
}

*/


//Pattern 7:

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=0; i<n; i++){

        for(j=0; j<n-i-1; j++){  
            
           cout<< " ";
        }
            for(j=0; j<2*i+1; j++ ){

                cout<<"*";

            }

            cout<<endl;
        
    }

    return 0;
}
    */



//Pattern 8:

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=0; i<n; i++){

        for(j=0; j<i; j++){  
            
           cout<< " ";
        }
            for(j=0; j<2*n-(2*i+1); j++ ){

                cout<<"*";

            }

            cout<<endl;
        
    }

    return 0;
}
*/


//Pattern 9:

/*
#include<iostream>
using namespace std;

int main() {

    int i, j;
    int n = 5;

    // Upper pyramid
    for(i = 0; i < n; i++) {

        for(j = 0; j < n - i - 1; j++)
            cout << " ";

        for(j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }

    // Lower inverted pyramid
    for(i = 0; i < n; i++) {

        for(j = 0; j < i; j++)
            cout << " ";

        for(j = 0; j < 2 * (n - i) - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
*/


//Pattern 10:

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            
            cout<<"*";
        }

        cout<<endl;

    }

   for(i=4; i>=1; i--){
    for(j=1; j<=i; j++){

        cout<<"*";
    }

    cout<<endl;
   }
   return 0;
}
   */


   //Pattern 11:

   /*
   #include<iostream>
   using namespace std;
   int main() {

    int i,j;
    int n=5;
    int start=1;

    for(i=0; i<n; i++){

        if(i%2==0) start = 1;
        else start = 0;
        for(j=0; j<=i; j++){
            cout<<start;

            start=1-start;
        }
        cout<<endl;
    }
    return 0;
}
    */

    //Pattern 12:

/*
#include<iostream>
using namespace std;
int main() {
    
    int i,j;
    int n=5;

    for(i=1; i<=n; i++){ 
    

        for(j=1; j<=i; j++){

            cout<< j;
        }

        for(j=1; j<=2*(n-i); j++){
            cout<<" ";
        }

            for(j=i; j>=1;j--){

                cout<<j;
            }

            cout<<endl;

    }

    return 0;
}

*/


//Pattern 13:

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;
    int num=1;

    for(i=1; i<=n; i++){

        for(j=1; j<=i; j++){

          cout<<num;

           num=num+1;

           cout<<" ";

        }

        cout<<endl;
    }

    return 0;
}

       */
      
       
       //Pattern 14:

       /*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=0; i<n; i++){
        for(char ch = 'A'; ch<='A' + i; ch++){

            cout<<ch<<" ";
        }

        cout<<endl;
    }

    return 0;
}

*/

//Pattern 15:

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=0; i<n; i++){
        for(char ch = 'A'; ch<='A'+(n-i-1); ch++){

            cout<<ch<<" ";
        }

        cout<<endl;
    }

    return 0;
}

*/

//Pattern 16:

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=0; i<n; i++){

        char ch = 'A'+i;

        for(j=0; j<=i; j++){

            cout<<ch<< " ";
        }

        cout<<endl;
    }
    return 0;
}
*/

//Pattern 17:

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;

    for(i=0; i<n; i++){

        //Spaces

        for(j=0; j<n-i-1; j++){
            cout<<" ";
        }
            //Increase charchters:

            for(j=0; j<=i; j++){

                cout<<char('A' + j);
            }

            //Decreasing charchters

            for(j=i-1; j>=0; j--){
                cout<<char('A' + j);
            }

            cout<<endl;
        
    }

    return 0;
}

*/



//Pattern 18:

/*
#include<iostream>
using namespace std;
int main() {
    
    int i,j;
    int n=5;

    for(i=0; i<n; i++){

        for(char ch = 'E'- i; ch<='E'; ch++){

            cout<<ch<<" ";
        }

        cout<<endl;

    }

    return 0;
}



*/


//Pattern 19:

/*
#include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=5;
    int Space = 0;

    for(i=0; i<n; i++){

        //Stars
        for(j=1; j<=n-i; j++){
            cout<<"*";
        }
            //Spaces
            for(j=0; j<Space; j++){
                cout<<" ";

            }

            //Stars
            for(j=1; j<=n-i; j++){
                cout<<"*";

        }
        Space += 2;
        cout<<endl;
    }

    //2nd Pattern:
  Space = 8;

for(i=1; i<=n; i++) {

    for(j=1; j<=i; j++)
        cout<<"*";

    for(j=1; j<=Space; j++)
        cout<<" ";

    for(j=1; j<=i; j++)
        cout<<"*";

    Space -= 2;
    cout<<endl;
}

return 0;
}

*/

//Pattern 20:

/*
#include<iostream>
using namespace std;
int main(){

    int i,j;
    int n=5;
    int Space = 8;

    for(i=1; i<=n; i++){

        //Stars
        for(j=0; j<i; j++)
            cout<<"*";

            //Spaces
            for(j=0; j<Space; j++)
            cout<<" ";

            //Stars
             for(j=0; j<i; j++)
             cout<<"*";

             Space-=2;
             cout<<endl;
}

//2nd Pattern:

Space = 2;

for(i=n-1; i>=1; i--){

    //Stars
    for(j=1; j<=i; j++)
    cout<<"*";

    //Spaces
    for(j=1; j<=Space; j++)
    cout<<" ";

    //Stars
    for(j=1; j<=i; j++)
    cout<<"*";

    Space+=2;
    cout<<endl;
}
    return 0;
}

*/

//Pattern 21:

/* 
#include<iostream>
using namespace std;
int main() {
    int i,j;
    int n=4;

    for(i=0; i<n; i++){

        for(j=0; j<n; j++){

            if(i==0||j==0||i==n-1||j==n-1){
            cout<<"*";
            }

            else
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
    */


    //Pattern 22:

    /*
    #include<iostream>
using namespace std;
int main() {

    int i,j;
    int n=4;
    int size=2*n-1;

    for(i=0; i<size; i++){

        for(j=0; j<size; j++){

            if(i==0||j==0||i==size-1||j==size-1)
            cout<<'4';


            else if(i==1||j==1||i==size-2||j==size-2)
            cout<<'3';

            else if(i==2 || j==2 || i==size-3 || j==size-3)
            cout << '2';

            else
            cout << '1';
        }
        cout<<endl;

    }

    return 0;
}

/*

//Time Complexity = O(N^2)
//Space complexity = O(1)