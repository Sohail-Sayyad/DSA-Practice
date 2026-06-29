#include<iostream>
#include<algorithm>
using namespace std;

/*bool comp(pair<int,int>p1, pair<int,int>p2){

        if(p1.second>p2.second) return true;
        if(p1.second<p2.second) return false;

        if(p1.first>p2.first) return true;
        else return false;
    }
        */

int main() {

    /*
    int a[] = {1,3,8,7};
    int n=4;

    sort(a, a+n); //Ascending order
    sort(a+2, a+4); //Ascending order
    sort(a, a+n, greater<int>());  //descending order

    for(int i=0; i<n; i++){
        cout<<a[i]<< " ";
    }

    

    int n=3;
    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};
    //sort it according to the second element.
    //if the second elements are same,
    //sort it according to the first element

    sort(a, a+n, comp);

    for(auto x : a){
        cout<<x.first <<" " << x.second << endl;
    }


 


    //Built in popcount

    int num = 57;
    int cnt = __builtin_popcount(num);
    cout<<cnt;

       

       //Permutation

       string s = "123";
       sort(s.begin(), s.end());
       do{
        cout<<s<<endl;
       }
        while(next_permutation(s.begin(), s.end()));

        */

        //Maximum element

        int a[] = {1,3,8,7};
        int n=4;

        int maxi = *max_element(a, a+n);
        cout<<maxi<<endl;


    return 0;
}