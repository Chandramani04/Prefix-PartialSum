#include <bits/stdc++.h> 
using namespace std;

#define ll long long 

// to find cummulative xor of 
// 1^2^3^4^........^n 

ll  findxor(ll n){

if (n<0)return 0 ;
// the formula of pattern is 
// x = ((x-1)%4)+1 ; 
// both LHS & RHS numbers will show same xor property
// 1 -> 1 , 2 -> n+1 , 3 -> 0 , 4 -> n 

ll a = ((n-1)%4) + 1 ;  
if (a==1) return 1 ;   
 else if (a==2)return (n+1) ;
else if (a==3) return 0 ;
else if (a==4)return n ; 
else return 0 ; 
}


int main() {
    
    ll num ;
    cout << "enter num"<< endl ;  // dont enter no in form of 1e18 , direct enter 10000....  
    cin >> num ; 


cout << findxor(num) ; 
    return 0;
}


