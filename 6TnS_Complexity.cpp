// ***********TC is the rate at which time taken increases with respect to the input size
// calculating teh actual time taken by the code in execution is machine dependent and hence not very accurate way
// ***** Big-O Notation ********
// O()   --- barckets me hypothetical time taken
// total number of steps in the code

// 3 rules to calculate time complexity
// 1.) always calculate time complexity in worst case scenario
// 2.) avoid constants 
        // ex. O(4N^3 + 3N^2 +8) now if assume N=10^5, the 8 won't have any significance
// 3.) avoid lower values
        // ex. in the previous example you can ignore the N^2 term against the N^3

// big-O is the upper bound complex
// Omega is the lower bound i.e. the best case
// Theta is average complexity




//***********SC is the memory space that the program takes in
// Auxiliary space(to solve the problem) + input space(to store the problem)
// Big-O notation here as well
// arr[N] has Big-O of O(N)
// Never ever change the inputs by storing any other value in them just to save space
// Ths servers that are used in CP take 1 second for roughly 10^8 operations i.e. if time limit is 1 second, the Big-O is should be roughly O(10^8)