//Number of times the element appearing

#include<iostream>
using namespace std;
int main(){

/*
int f(int number, int a[], int n){

    int cnt = 0;

    for(int i=0; i<n; i++){

        if(a[i]==number)
        cnt=cnt+1;
    }

    return cnt;
}

int main(){

    int n;
    cout<<"Enter the size of the elements: ";
    cin>>n;

    int a[n];

    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int number;
    cout<<"Enter the value of number: ";
    cin>>number;

   int cnt = f(number, a, n);

     cout << "The number appears " << cnt << " times.";


    return 0;
}



int n;
cout<<"Enter the value of n: ";
cin>>n;
int arr[n];
for(int i=0; i<n;i++){
    cin>>arr[i];
}

//precompute

int hash[13] = {0};
for(int i=0; i<n;i++){
    hash[arr[i]]+=1;
}


int q;
cout<<"Enter the value of q: ";
cin>>q;
while(q--){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    //fetch

    cout<<hash[number]<<endl;
}

return 0;
}

*/
int n;
string s;
cout<<"Enter the value of string: ";
cin>>s;

//precompute

int hash[26]={0};
for(int i=0; i<s.size(); i++){
    hash[s[i] - 'a']++;
}

int q;
cout<<"Enter the value of q: ";
cin>>q;

while(q--){
    char c;
    cout<<"Enter the charachter: ";
    cin>>c;

cout<<hash[c-'a']<<endl;
}

return 0;
}
