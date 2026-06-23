#include<iostream>
#include<vector>
using namespace std;

void explainVector() {

    vector<int> v; //Creates an empty container
    v.push_back(1); //Adds '1' to the container
    v.emplace_back(2); //Adds '2' after '1'

    cout << "v: " << v[0] << " " << v[1] << endl;


    vector <pair <int,int>> vec;

    vec.push_back({1,2}); //Inserts a temporary pair
    vec.emplace_back(1,2); //Constructs objects directly inside container

    cout << "vec: ";
    cout << "(" << vec[0].first << "," << vec[0].second << ") ";
    cout << "(" << vec[1].first << "," << vec[1].second << ")" << endl;

    //Size of instances
    vector<int> v1(5,100);
    vector<int> v4(5);

    //To copy the instances
    vector<int> v2(5,20);
    vector<int> v3(v2);
    cout << "v2: "
         << v2[0] << " "
         << v2[1] << " "
         << v2[2] << " "
         << v2[3] << " "
         << v2[4] << endl;

    cout << "v3: "
         << v3[0] << " "
         << v3[1] << " "
         << v3[2] << " "
         << v3[3] << " "
         << v3[4] << endl;
}

    int main(){
        explainVector();
        return 0;
    }


