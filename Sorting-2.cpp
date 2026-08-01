#include<iostream>
#include<vector>
using namespace std;

//Merge Sort

/*

void merge(int arr[], int low, int mid, int high){

   vector<int>temp;
    int left = low;
    int right = mid + 1;

    while(left<=mid && right<=high){

    if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
    }

    else{
        temp.push_back(arr[right]);
        right++;
    }


}

 while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i<=high; i++){
        arr[i] = temp[i-low];
    }

    }
void mergeSort(int arr[], int low, int high){

    if(low >= high){
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);

    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(arr, 0 , n-1);

    cout<<"Sorted Array: ";

     for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }

    return 0;
}




//Bubble Sort(Recursion)

void Bubblesort(int arr[], int n){

    if(n==1){
        return;
    }

    for(int j=0; j<n-1; j++){

        if(arr[j]>arr[j+1]){

            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;

        }
    }

    Bubblesort(arr, n-1);
}

    int main(){

        int n;
        cout<<"Enter the value of n: ";
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        Bubblesort(arr,n);

        cout<<"The sorted array is: ";
        for(int i=0; i<n; i++){
            cout<<arr[i] << " ";
        }

        return 0;
    }


    


    //Insertion Sort(Recursion)


    void Insertion_Sort(int arr[], int n, int i){

        if(i==n){
            return;
        }

        int j=i;

        while(j>0 && arr[j-1]>arr[j]){

            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;

            j--;
        }
    

    Insertion_Sort(arr, n, i+1);
    }

    int main(){

        int n;
        cout<<"Enter the value of n: ";
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        Insertion_Sort(arr, n, 1);

        cout<<"The sorted array is: ";
         for(int i=0; i<n; i++){
            cout<<arr[i] << " ";
         }

         return 0;
        }

        */
        
    
//Quick Sort

int partition(int arr[], int low, int high){

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){

        while(arr[i]<=pivot && i<=high)
            i++;
        

        while(arr[j]>pivot && j>=low)
            j--;
    
    if(j>=i)

        swap(arr[j], arr[i]);
    }
    

    swap(arr[low],arr[j]);
    return j;
}

    


   void quickSort(int arr[], int low, int high){

    if(low<high){
        
        int pIndex = partition(arr, low, high);

        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex+1, high);
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

    quickSort(arr, 0 , n-1);

    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }

   return 0;
   }









