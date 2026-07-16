#include<iostream>
using namespace std;

//Selection Sort

/*
void selectionSort(int arr[], int n){

    for(int i=0; i<=n-2; i++){
        int mini=i;

        for(int j=i; j<=n-1; j++){

            if(arr[j]<arr[mini]){
                mini=j;
            }
        }

        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;

    }
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);

    for(int i=0; i<n;i++){
        cout<<arr[i] << " ";
    }

    return 0;

}
    */

//Bubble Sort

void BubbleSort(int arr[], int n){

    for(int i = n-1; i>=1; i--){

        for(int j=0; j<=i-1; j++){

            if(arr[j]>arr[j+1]){

               swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    BubbleSort(arr,n);

    for(int i=0; i<n;i++){
        cout<<arr[i] << " ";
    }

    return 0;

}