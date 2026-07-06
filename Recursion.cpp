//Base condition program
#include<iostream>
#include<vector>
using namespace std;

/*
int cnt = 0;

void countFunction(){

    if (cnt == 3){
        return;
    }

        cout<<cnt << endl;
        cnt++;
        countFunction();
}

int main() {

    countFunction();

    return 0;
}




//Print N times


void nameFunction(int i, int n){

    if(i>n){
        return;
    }

    cout<<"Sohail" << endl;
    nameFunction(i+1, n);
}

int main(){

    int n;
    cout<<"Enter the name: ";
    cin>>n;

    nameFunction(1,n);
    return 0;
}




//Print linearly from 1 to N


void nameFunction(int i, int n){

    if(i>n){
        return;
    }

    cout<< i << endl;
    nameFunction(i+1, n);
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    nameFunction(1,n);
    return 0;
}
    



//Print from N to 1



void nameFunction(int i, int n){

    if(n>i){
        return;
    }

    cout<< i << endl;
    nameFunction(i-1, n);
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    nameFunction(n,1);
    return 0;
}




//N to 1 (Backtracking)


void nameFunction(int i, int n){

    if(i>n){
        return;
    }

    nameFunction(i+1, n);
    cout<< i << endl;
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    nameFunction(1,n);
    return 0;
}




//1 to N using backtracking


void nameFunction(int i, int n){

    if(i<1){
        return;
    }

    nameFunction(i-1, n);
    cout<< i << endl;
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    nameFunction(n,1);
    return 0;
}



//Parameterized recursion


void sumFunction(int i, int sum){

    if(i<1){           //Base condition
        cout<<sum;
        return;
    }

    sumFunction(i-1, sum+i);
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    sumFunction(n,0);
}
    


//Functional Recursion(Sum of first N numbers)



int countFunction(int n){

    if(n==0){
        return 0;
    }

    else{

        return n+countFunction(n-1);
    }
    
}

    int main(){

        int n;
        cout<<"Enter the value of n: ";
        cin>>n;

        cout<<countFunction(n);

        return 0;
    }
        

    //Factorial problem

    int factorial(int n){
        if(n==0 || n==1){
            return 1;
        }

        return n * factorial(n-1);
    }

    int main(){

        int n;
        cout<<"Enter the value of n: ";
        cin>>n;

        cout<<factorial(n);
    }

    */

    //Reversing an array(parameterised function)

    void printArray(int left, int right, vector<int> &arr){  //PBR

        if(left>=right){
            return;
        }

        swap(arr[left], arr[right]);
        printArray(left+1, right-1, arr);
    }

    int main(){
        int n;
        cout<<"Enter the size of the elements: ";
        cin>>n;

       vector<int>arr(n);

        cout<<"Enter the elements: ";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

            printArray(0, n-1, arr);

            cout<<"Reversed array is: " << endl;
            for(int i=0; i<n; i++){
                cout<<arr[i] << " ";
            }

                return 0;
        }
            
        




