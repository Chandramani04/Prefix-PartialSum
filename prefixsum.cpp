#include <bits/stdc++.h> 
using namespace std;

// to find sum between given range of index ?

int main() {
    int a[] = {4,2,3,1,-5,6};
    int n = 6;
    int p[1] ; // temp array to store sum of prefix of a[]
    for (int i = 0; i <n; i++)
    {
       p[i] = p[i-1] + a[i] ; // storing prefix sum
    }

    int L,R ; // l-starting index ,R- ending index 
    cin >> L >> R ; 
    cout << p[R]- p[L-1] ; // ;-1 because that index was also included in the range
    
    return 0;
}