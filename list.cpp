#include<iostream>
#include<utility>
#include<vector>
#include<list>
#include<deque>
#include<queue>
#include<stack>
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




//Deque


deque<int>dq;
dq.push_back(1);
dq.emplace_back(2);
dq.push_front(4);
dq.emplace_front(2);

dq.pop_back();
dq.pop_front();

dq.back();
dq.front();

for(auto x : dq){
    cout<< x << " ";
}



// Stack(LIFO)


stack<int>st;

st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.emplace(8);

cout<<st.top();
st.pop();

cout<<st.top();
cout<<st.size();
cout<<st.empty();




//Queue(FIFO)

queue<int>q;
q.push(4);
q.push(3);
q.emplace(2);

q.back()+=5;
cout<< q.back();
cout<<q.front();

q.pop();
cout<<q.front();

return 0;
}