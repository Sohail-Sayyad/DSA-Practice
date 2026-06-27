#include<iostream>
#include<utility>
#include<vector>
#include<list>
#include<deque>
#include<queue>
#include<stack>
#include<set>
using namespace std;
int main(){

  //List
    
 
list<int>ls;
ls.push_back(2);
ls.emplace_back(1);

ls.push_front(2);
ls.emplace_front(3);

for(int x : ls){
    cout<< x << " ";
}

return 0;
}
