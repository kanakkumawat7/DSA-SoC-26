#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    getline(cin, str);
    int len = str.size();
    cout << str[2] << endl; // string also have indexing including the spaces starting from 0 
    cout << str[len-1] << endl;
    // Syntax: s.erase(starting_index, number_of_characters);
    str.erase(2, 1);

    //To make substrings of a string: use substr
    // s.substr(start_index, length)
    // note that the 2nd arguement is not the final index, its the length
    string s= "competitive";
    cout << s.substr(1,3);
    return 0;
}

/*
********passing a custom lambda function
[](const strings& a, const strings& b){
    return a+b>b+a; 
    }

it can be used in sorting just like the 179 question of leetcode making largest number from the array
        sort(arr.begin(), arr.end(), [](const string& a, const string& b){
            return a+b>b+a;
        });
*/