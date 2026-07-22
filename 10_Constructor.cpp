#include <vector>
using namespace std;
class NumArray {
public:

// defining the prefix array was necessary to declare outside the constructor, otherwise it would be a local vector, and we couldn't call it in the sumRAnge function
    vector<int> prefix;



//*******This is the CONSTRUCTOR here, which is basically a class. it is used so that the argument is called only once and then we can operate on it many a times */
    NumArray(vector<int>& nums) {
        int n= nums.size();
        prefix.resize(n+1,0);
        for(int i=1; i<n+1; i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }
    }
    

// This is the function which used the array in the constructor and a declared variable
    int sumRange(int left, int right) {
        int sum;
        sum= prefix[right+1]-prefix[left]; 
        return sum;
    }
};



/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */