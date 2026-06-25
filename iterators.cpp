#include<iostream>
#include<utility>
#include<vector>
#include<list>
using namespace std;
int main(){

vector<int> v1 = {10,20,30,40};
vector<int> v2 = {1,2,3,4};


vector<int>::iterator it = v.begin();
it++;
cout << *it << " ";

vector<int> v = {10,20,30,40};
vector<int>::iterator it = v.end();
it-=2;
cout<< *it << " ";


//Range based for loops

for(auto it = v.begin(); it!= v.end(); it++){

    cout<<*(it)<<" " << endl;
}

for(auto it : v){
    cout<< it << " " << endl;
}


//Deleting 

v.erase(v.begin() + 2, v.begin() + 4);
for(auto it:v){
    cout<< it << " ";
}

//Inserting


v.insert(v.begin(), 300);
v.insert(v.begin() + 1, 2,10);
for(auto it:v){
    cout<< it << " ";
}





//Basic functions 


cout<<v1.size() << endl;

v1.pop_back();


 v1.swap(v2);


for (auto x : v1) {
        cout << x << " ";
    }


    cout<< endl;

    for (auto x : v2) {
        cout << x << " ";
    }














return 0;
}

