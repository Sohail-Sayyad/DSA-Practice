#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){

//vector<int> v = {10,20,30,40};

//vector<int>::iterator it = v.begin();
//it++;
//cout << *it << " ";

vector<int> v = {10,20,30,40};
vector<int>::iterator it = v.end();
it-=2;
cout<< *it << " ";

return 0;
}

