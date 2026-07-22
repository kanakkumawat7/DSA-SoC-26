/*
*************SELECTION SORT***************

1)get the minimum from the array, swap it with the first element
2)repeat the same process, for the remaining array i.e. leaving the 0th element
3)sorting process is don in n-1 steps, where n=no. of elements
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    int m=0;
    for(int i=0; i<=n-2; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                m=arr[j];
                arr[j]=arr[i];
                arr[i]=m;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

/* 
**************** BUBBLE SORT *********************

it is slightly opposite of selection sort
you push maximum to the last by "adjacent swaps"
after  one round of swapping, the max reaches the last index
*/

void bubble_sort(int arr[], int n){
    int m;
    bool swap=false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j+1]<arr[j]){
                m=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=m;
                swap=true;
            }
        }
        if(!swap){break;}   // best time complexity of bubble sort is O(N), otherwise it's O(N^2)
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}



/*
**************** INSERTION SORT ****************

*/

void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int m=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=m;
            j--;             //best case scenario O(N)
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    selection_sort(arr, n);
    cout << endl;
    bubble_sort(arr, n);
    cout << endl;
    insertion_sort(arr, n);
    return 0;
}