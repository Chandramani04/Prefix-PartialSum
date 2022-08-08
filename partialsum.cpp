#include <bits/stdc++.h> 
using namespace std;
// QUESTION -->
// given an array of size n , initally all with value 0 ;
//there are Q queries of the form -> 
//LRX -> add x to all the index in the range of l to r 
// after all the queries , give final array ?

// APPROACH -->
/*  step1- create a new  array P of size n
step2- for each query +LRX - 
  do->
  1st   p[L] += x;
  2nd   p[r+1]-= x;  
  when we do this x will be inserted only between l ans r 

  step3- after all queries, build prefix sum array of p 
  */
 
int main() {
    int q,n, x ,l ,r ;       // lets say q=3 ,n =6,x = 8 , l = 2 , r= 4 ; 
    cout << "enter no of queries and size of array" << endl ; 
    cin >> q >> n ; 
    int arr[n] = {0}; 
    int p[n] = {0};
    while (q--){
        cin >> x >> l >> r ;
     p[l] += x ; 
     p[r+1]-=x ; 
    for (int i=0;i<n;i++){
        cout << p[i] << " ";
    }

    }


    return 0;
}