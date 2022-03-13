/*
You are given N integers in sorted order. Also, you are given Q queries. 
In each query, you will be given an integer and you have to tell whether 
that integer is present in the array. If so, you have to tell at which 
index it is present and if it is not present, you have to tell the index 
at which the smallest integer that is just greater than the given number 
is present.

Completed: 3/13
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int N, temp, Q, Y;
    vector<int>::iterator low;
    vector<int> v;
    cin>>N;
    for (int i=0; i<N; i++) {
        cin>>temp;
        v.push_back(temp);
    }
    cin>>Q;
    for (int i=0; i<Q; i++) {
        cin>>Y;
        low = lower_bound(v.begin(), v.end(), Y);
        cout<<((*low == Y) ? "Yes " : "No ")<<low-v.begin()+1<<"\n";
    }
      
    return 0;
}
