#include<iostream>
using namespace std;

/*
int largestElement(int arr[], int n){

    int largestElement = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>largestElement){
            largestElement=arr[i];
        }
    }

    return largestElement;
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];

     for(int i=0; i<n; i++){
        cin>>arr[i];
}

int largest=largestElement(arr, n);


cout<< "Largest element is : " << largest;

return 0;

}



//Second largest Element


int SecondLargest(int arr[], int n){


int largest = arr[0];
int slargest = -1;

for(int i=0; i<n; i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }

    else if(arr[i]<largest && arr[i]>slargest){
        slargest = arr[i];
    }
}

return slargest;
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];

     for(int i=0; i<n; i++){
        cin>>arr[i];
}

int slargest = SecondLargest(arr, n);


cout<< " Second largest element is : " << slargest;

return 0;

}



//Sorted Array(II)

bool SortedArray(int arr[], int n){

    for(int i=1; i<n; i++){

        if(arr[i] >= arr[i-1]){

        }

        else{

            return false;
        }
    }

    return true;
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sort = SortedArray(arr, n);

     return sort;

}

*/

//Remove duplicates 


int duplicateArray(int arr[], int n){

int i = 0;

for(int j=1; j<n; j++){

    if(arr[j]!=arr[i]){
        arr[i+1] = arr[j];

        i++;
    }
}

return arr[i];

}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int newSize = duplicateArray(arr,n);

    cout<<"Unique elements are: ";
    for(int i=0; i<newSize; i++){
        cout<< arr[i] << " ";
    }

    return 0;

}


