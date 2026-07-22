#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//4 types of functions
//void - doesn't return anything
//return
//parameterised
//non parameterised

void printName(){
    cout << "hello kitty"<< endl; // this is the non parameterised void function
}

void printName1(string name){
    cout << "hey " << name << endl; // this is the parameterised void function
}

int sum1(int a, int b){
    int c;
    c = a+b;  // this is the parameterised int function
    a +=5;
    return c;  // the variable type of the function will be same as the return value
}

// ******pass by refernce, & lagane se the original variable value will be changed, here the a and b are not copies, they are original.
// arrays are by default passed by reference
int sum2(int &a, int &b){
    int c;
    c = a+b;  // this is the parameterised int function
    a +=5;
    return c;  // the variable type of the function will be same as the return value
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    printName(); // calling non parameterised void function
    printName1("kanak"); // calling parameterised void function
    int x, y;
    cin >> x >> y;
    cout << sum1(x,y) << endl;
    cout << x << endl; // ****pass by value ki vajah se jo function me variable gya tha vo copy tha of original x, hence agar ab variable ko main function me firse bulayenge toh that would have the value as it has in the main function.
    cout << sum2(x,y) << endl;
    cout << x << endl; // is baar jab x print hoga tog voh x+5 hoga because of pass by reference in sum2
    return 0;
}