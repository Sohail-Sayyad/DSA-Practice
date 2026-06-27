#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
int main(){


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




//Priority Queue

priority_queue<int>pq;  //Max Heap
pq.push(3);
pq.push(4);
pq.push(2);
pq.emplace(1);

cout<<pq.top();
pq.pop();

cout<<pq.top();


priority_queue<int, vector<int>, greater<int>>pq2; //Min Heap
pq2.push(3);
pq2.push(4);
pq2.push(2);
pq2.emplace(1);

cout<<pq2.top();

pq2.pop();

cout<<pq2.top() << endl;
cout<<pq2.size() << endl;
cout<<pq2.empty() << endl;

return 0;
}

