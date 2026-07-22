/*
The array should be sorted for binary search to work
For Ex. [3,4,6,7,9,12,16,17], target=6
low is the 0th index, high is the (n-1)th index
mid=(low+high)/2 = (0+n-1)/2 = low +(high-low)/2
here mid= 3.5~ 3rd index that is 7
now 6 can be on the left side of 7 only, so search space is trimmed down
now high = mid-1 i.e 6
again mid =(low+high)/2 = (0+2)/2 = 1 i.e 4
but now 6 must be on the right side of 4
so now low = mid+1 i.e. 6
and when high==low==6, we found it
*/

/********** ITERATIVE CODE **********/
int Search(int arr[], int n, int target){
    int low=0, high=n-1, mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){return mid;}
        else if(target>arr[mid]){
            low=mid+1;
        }
        else high=mid-1;
    }
    return -1;
}


/**************** RECURSIVE CODE *******************/
int RecursiveSearch(int arr[], int low, int high, int target){
    if(low>high){return -1;}
    int mid=(low+high)/2;
    if(arr[mid]==target){return mid;}
    else if(target>arr[mid]){
        return RecursiveSearch(arr,mid+1,high,target);
    }
    else return RecursiveSearch(arr, low, mid-1, target);
}

/*Time Complexity
           O(log2(n))


Overflow Case:
when the searchspace reaches INT_MAX
instead of (low+high)/2, we can do [low+ (high-low)/2], coz here if both hogh and low are INT_MAX, it won't have an impact
or we can just use long long instead of int
*/

