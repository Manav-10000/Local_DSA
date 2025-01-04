//counting stairs(Leetcode)
#include<iostream>
// #include<vector>
using namespace std;
int ClimbStairs(int n){
if(n==0||n==1){
    return 1;
}
int ans= ClimbStairs(n-1)+ClimbStairs(n-2);
return ans;
}
int main(){
int n;
cout<<"Enter the number of stairs:"<<endl;
cin>>n;
int ans=ClimbStairs(n);
cout<<"Total of of ways to reach "<<n<<" stairs: "<<ans<<endl;
return 0;
}


//optimal solution is as follows
// int countWays(int n, vector<int>& memo) {
//     // Base cases
//     if (n == 0) return 1; // One way to stay at the ground
//     if (n == 1) return 1; // One way to take a single step
    
//     // Check if the result is already computed
//     if (memo[n] != -1) return memo[n];
    
//     // Recursive relation
//     memo[n] = countWays(n - 1, memo) + countWays(n - 2, memo);
//     return memo[n];
// }

// int countWays(int n) {
//     vector<int> memo(n + 1, -1); // Initialize memoization array with -1
//     return countWays(n, memo);
// }

// int main() {
//     int n; // Number of stairs
//     cout<<"Enter the number of stairs: "<<endl;
//     cin>>n;
//     cout << "Number of ways to climb " << n << " stairs: " << countWays(n) << endl;
//     return 0;
// }

// Explanation:

// Base Cases:
// n=0: One way to stay at the ground (do nothing).
// n=1: Only one way to climb one stair.

// Recursive Relation:
// ways(n)=ways(n−1)+ways(n−2).

// Memoization:
// The memo array stores the results of previously computed subproblems.
// If memo[n] != -1, the value has already been computed, and we return it.

// Helper Function:
// The recursive helper function countWays(int n, vector<int>& memo) computes the result using memoization.
