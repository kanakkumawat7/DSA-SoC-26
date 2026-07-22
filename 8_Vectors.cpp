/*
arrays are constant in size
while  the size of the vectors can be changed
supose if we had to add one more element in the array, then what😒
vector<int> v;    //  this creates an  empty container named v
*/

#include <bits/stdc++.h>
using namespace std;

int main(){


    // ************ declarations **********
    vector<int> v;    //  this creates an  empty container named v
    // v={}
    v.push_back(1); // the first element of the vector takes the value 1 
    // v={1}
    v.emplace_back(2); // this is similar to push_back the only difference is that this is faster
    // v ={1,2}
    vector<pair<int, int>> v1;   // vector of pair data type
    v1.push_back({1,2}); // u have to  explicitly tell that the input is a pair
    v1.emplace_back(1,2); //emplace back automatically will take the input as a pair, and thats how its a lil bit diff from push_back
    
    vector<int> v2(5, 20); //  a vector of size 5 is initialized by 20s as every value in it 
    vector<int> v3(6); // by default a vector of size 6 with values zeroes in it
    vector<int> v4(v2); //  if we had to copy the vector v2 in v4

    cout << v2[1] << endl; //to access the element of a vector (similar to array)
    v = {10,11,12,13,14,15};

    // ************* iterators *************
    vector<int> :: iterator it = v.begin();  // this points to the address/memory of the values stored in the vector
    it ++;
    cout << *(it) << endl; // you have to add * to access the element in the memory.
    //prints 11
    it +=2; 
    cout << *(it) << endl; // prints 13

    //  some more iterators 
    vector<int> ::iterator it1 = v.end(); // this doesn't point to the end of the vector, it points to something just outside the vector's memory, when u do it1-- then you will get to the end of the vector
    
    //these things are never ever used// vector<int> ::iterator it2 = v.rbegin();  these are just the reverse
                                      // vector<int> ::iterator it3 = v.rend();  it++ will move in the reverse direction
    for(vector<int>::iterator it=v.begin(); it<v.end(); it++){
        cout << *(it) << endl;
    }
    // auto automatically assigns the variable type to the variable 
    // ex. auto a= "raj"; here a automatically becomes the "string" variable type
    for(auto it= v.begin(); it< v.end(); it++){
        cout << *(it) << endl;
    }
    for(auto it:v){
        cout << it << endl;
    }

    // how to delete in a vector? 
    v={12,13,14,15,16};
    v.erase(v.begin()+1); // erases the second element of teh vector
    // now v becomes {12,14,15,16}
    v.erase(v.begin(), v.begin()+2); // erase elements in [start, end)
    // now v becomes {15,16}

    // ******insert function*******
    v={2,2,2,2};
    v.insert(v.begin()+1, 2, 10);
    // now v becomes {2, 10, 10, 2, 2, 2}
    v.insert(v.begin(), 300);
    // v becomes {300, 2, 10, 10, 2, 2, 2}
    vector<int> v5={30,40};
    // inserting a vector into another
    v.insert(v.begin(), v5.begin(), v5.end());
    // now tthe vector becomes {30, 40, 300, 2, 10, 10, 2, 2, 2}

    v.pop_back(); // deletes the last element, if v was {10,20}, it is now {10}

    // if v1 is {1,2} and v2 is {3,4}
    // after v1.swap(v2); v1 becomes {3,4} and v2 becomes {1,2}

    v.clear(); // erases the entire vector

    cout << v.empty(); // if v is empty it says true otherwise false
    return 0;
}

/*
Lists
list<int> ls;
ls.push_back(2); ls ={2}
ls.emplace_back(4); ls= {2,4}
ls.push_front(3); ls = {3,2,4}

rest functions are same as vectors 

*/