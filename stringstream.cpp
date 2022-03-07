/*
Complete the parseInts function in the editor below.

parseInts has the following parameters:

string str: a string of comma separated integers

Returns:
- vector<int>: a vector of the parsed integers.

Input Format:
- There is one line of integers separated by commas.


Completed: 3/7/2022

*/



#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    int a;
    char ch;
    vector<int> output;
    while (ss >> a) {
        output.push_back(a);
        ss >> ch;
    }
    return output;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
