#include <iostream>
#include <map>
#include<unordered_map>
using namespace std;
int main()
{

   
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2;  //One key, one value {1,2}
    mpp2[3] = {1, 2}; //One key, pair of values {3, {1,2}}
    mpp3[{2, 3}] = 10; //Pair of keys, one value {{2,3}, 10}

    for (auto x : mpp)
    {
        cout << x.first << " " << x.second << endl;
    }

    for (auto x : mpp2)
    {
        cout << x.first << " " << x.second.first << " " << x.second.second << " " << endl;
    }

    for (auto x : mpp3)
    {
        cout << x.first.first << " " << x.first.second << " " << x.second << " " << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[5] << endl;

    auto it = mpp.find(3);
    if (it != mpp.end())
    {
        cout << it->first << " " << it->second << endl;
    }
    else
    {
        cout << "Element not found";
    }

    cout<<endl;

    it = mpp.find(5);
    if (it != mpp.end())
    {
        cout << it->first << " " << it->second << endl;
    }
    else
    {
        cout << "Element not found";
    }

    cout<<endl;

    multimap<int,int>mm;
    //It can store multiple keys(not unique).
    //Elements are sorted.
    //Operations are same as that of Map.

    unordered_map<int,int>ump;
    //It will have unique keys.
    //Not Sorted.


    return 0;
}