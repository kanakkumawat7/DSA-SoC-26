/*
Standard Template library
Pairs stores a pair of 2, to call them, use p.first and p.second

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void kanak(){
    pair<int, int> p={1,2};
    cout << p.first << endl << p.second << endl;
    //nested pair to store more than 2 elements 
    pair<int, pair<int, int>> p1={3,{1,2}};
    cout << p1.first << endl << p1.second.second << endl << p1.second.first << endl;
    //pair array😊
    pair<int, int> arr[]= {{1,2}, {3,4}, {5,6}}; //lies in the utility library
    cout << arr[1].first << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    kanak();
    return 0;
}



/* 
******************** Stack ****************
LIFO = last in first out

*/
void explainStack(){
    // for explanation go to draw.excalidraw
    // all operations are O(1)
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top(); // prints 5 "st[2] is invalid"
    st.pop(); //{3,3,2,1}
    cout << st.size(); // 4

    cout << st.empty(); // prints false
    stack <int> st1, st2;
    st1.swap(st2);
}

void explainQueue(){
    // FIFO = first in first out
    // again all operations O(1)
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(2); //{1,2,2}
    q.emplace(3); //{1,2,2,3}

    q.back() +=5;  
    cout << q.back(); // prints 8
    cout << q.front(); // prints 1
    q.pop(); // {2,2,8}

    // size, swap, empty same as stack

}

void explainPQ(){
    //*********** MAX HEAP *******/
    priority_queue<int> pq;
    // first element is the largest element i.e. they are sorted in descending manner
    // it is not linearly stored, it's in tree form actually
    // push=O(logn), top=O(1), pop=O(logn)
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    pq.pop(); // {8,5,2}
    cout << pq.top(); // prints 8

    // size, swap empty are same as others

    //***** Min Heap******* */
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout << pq.top(); // prints 2
}

void explainSet(){
    //sorted and unique
    //not a linear container, a tree is maintained
    //everything takes log(n)
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2} i.e. no insertion
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as vector
    auto it = st.find(3); //iterator which points to the address of 3
    auto it =st.find(6); //if element not present, gives st.end() ka address
    st.erase(4); // erases 4, takes logarithmic time
    int cnt =st.count(1); // give 1 if exists or 0 if not
    
    //st = {1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1, it2); // after erase {1,4,5}
    //erasing the iterator takes constant time

    auto it =st.lower_bound(2); //Finds the first element that is greater than or equal to (>=) the value.
    auto it =st.upper_bound(3); //Finds the first element that is strictly greater than (>) the value.

    /*Why this is useful in Competitive Programming:
    If you have a set with duplicates (like a std::multiset), these two functions define the "equal range":

    1) lower_bound gives you the start of all instances of a number.
    2) upper_bound gives you the position just after the last instance.
    */
}

void explainMultiSet(){
    //same as set except the fact that it stores duplicate elements also
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); // all 1's erased
    int cnt = ms.count(1);

    //only a single 1 erased coz it erases the address
    ms.erase(ms.find(1));
    ms.erase(ms.find(1), ms.find(1)+2);

    //rest all functions are same as set
}

void explainUSet(){
    unordered_set<int> st;
    //same as set but not sorted
    //lower_bound and upper_bound doesn't work
    //O(1) for all operations
    //in a very rare case, the TC goes to O(n)
}

void explainMap(){
    map<int, int> mp;
    //unique key in sorted order, but can have duplicate values, for ex. two keys can have same value
    //it can also map like map<int, pair<int,int>> mpp; 
    mp[1]=2;
    mp.emplace({3,1});
    mp.insert({2,4});
}