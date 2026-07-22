#include <iostream>
#include <bits/stdc++.h>
using namespace std;



/*
****Stack overflow or segmentation error:
when the memory gets filled up by calling numerous functions like in recursion

****Base condition
the condition where calling the function stops
return over a condition, the function call gets terminated



*/

//Prints name 5 times
int a=0;
void r1(string name){
    if(a==5){return;}
    cout << name << endl;
    a++;
    r1(name);
}

int b=1;
void r2(int n){
    if(b==n+1){return;}
    cout << b << endl;
    b++;
    r2(n);
}

/*
********* Backtracking **********
*/


//Parametrised Recursion
//sum of first n naturals
void r3(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }
    r3(i-1, sum+i);
}

//Functional Recursion
int r4(int n){
    if(n==0){return 0;}  
    return n+r4(n-1);
}

//factorial
int r5(int n){
    if(n==1){return 1;}
    return n*r5(n-1);
}

//reversing an array
vector<int> r6(vector<int>& arr, int s, int e){
    if(s>=e){
        return arr;
    }
    swap(arr[s], arr[e]);
    r6(arr, s+1, e-1);
}

/* Print Subsequences*/
// contiguous/ non-contiguous sequences, which follows the order
// [3,1,2] = {(),(3),(1),(2),(3,1),(3,2),(1,2),(3,1,2)}
// TC= n*2^n
void r7(int i, vector<int> &ds, int arr[], int n){
    if(i==n){
        for(auto it: ds){
            cout << it << " ";
        }
        if(ds.size()== 0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    //take the particular index into the subsequence
    ds.push_back(arr[i]);
    r7(i+1, ds, arr, n);
    ds.pop_back();
    //not take condition, this element is not added to your subsequence
    r7(i+1, ds, arr, n);
}





int main(){
    // string name="Kanak";
    // r1(name);
    //r2(5);
    //cout << r4(3);

    // vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    // int n= arr.size();
    // r6(arr, 0, n-1);
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << endl;
    // }

    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    r7(0, ds, arr, n);
    return 0;
}
