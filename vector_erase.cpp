/*
You are provided with a vector of  integers. Then, you are given  queries. 
For the first query, you are provided with  integer, which denotes a position 
in the vector. The value at this position in the vector needs to be erased. 
The next query consists of  integers denoting a range of the positions in the 
vector. The elements which fall under that range should be removed. The second 
query is performed on the updated vector which we get after performing the 
first query.

Completed: 3/13/2022
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    vector<int> v;
    cin>>N;
    for (int i=0; i<N; i++) {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int first_query;
    cin>>first_query;
    v.erase(v.begin() + first_query-1);
    
    int second_query_0, second_query_1;
    cin>>second_query_0>>second_query_1;
    v.erase(v.begin()+second_query_0-1, v.begin()+second_query_1-1);
    
    int size = N-1-second_query_1 + second_query_0;
    cout<<size<<endl;
    for (int i=0; i<size; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}
