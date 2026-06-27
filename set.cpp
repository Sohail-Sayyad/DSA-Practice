#include<iostream>
#include<set>
using namespace std;
int main(){
 
    set<int>st;
    st.insert(3); 
    st.emplace(2);
    st.insert(3);
    st.insert(4);
    st.insert(5); //{2,3,4,5}

    auto it = st.find(3);
    auto it2 = st.find(6);

    if(it!=st.end()){
        cout<<"Element found " << *(it) << endl;
    }
    else{
        cout<<"Element not found " << endl;
    }

     if(it2!=st.end()){
        cout<<"Element found " << *(it) << endl;
    }
    else{
        cout<<"Element not found " << endl;
    } 
        

    auto it3 = st.find(2);
    auto it4 = st.find(4);

    st.erase(it3, it4);

    for(int x : st){
        cout<< x << " ";
    }

    st.erase(4);

    for(int x:st){
        cout<< x << " ";
    }



//Multiset

multiset<int>ms;
ms.insert(6);
ms.insert(2);
ms.insert(4);
ms.insert(1);
ms.insert(1);  //{1,1,2,4,6}

ms.erase(ms.find(1));

auto it = ms.find(1);  
auto it2 = it;
advance(it2, 2);

ms.erase(it, it2);


for(int x : ms){
    cout<< x << " ";
}



    return 0;
}