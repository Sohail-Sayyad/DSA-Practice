#include<iostream>
#include<algorithm>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second > p2.second) return true;
    if(p1.second < p2.second) return false;

    return p1.first > p2.first;
}

int main()
{
    // Sorting integer array
    int arr[] = {1,3,8,7};
    int n = 4;

    sort(arr, arr+n);
    sort(arr+2, arr+4);
    sort(arr, arr+n, greater<int>());

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    cout << endl;

    // Sorting pair array
    pair<int,int> p[] = {{1,2},{2,1},{4,1}};
    int n3 = 3;

    sort(p, p+n3, comp);

    for(auto x : p)
        cout << x.first << " " << x.second << endl;

    // Popcount
    int num = 57;
    cout << __builtin_popcount(num) << endl;

    // Permutations
    string s = "123";

    sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    }
    while(next_permutation(s.begin(), s.end()));

    // Maximum element
    int arr2[] = {1,3,8,7};
    int n2 = 4;

    int maxi = *max_element(arr2, arr2+n2);
    cout << maxi << endl;

    return 0;
}