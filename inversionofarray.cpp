/* what does inversion mean ->
letsay i and j are two indexes in an array
if -> arr[i]>arr[j]; 
and-> i<j ;
then we say i and j are  inverted pairs 
and total number of inversion in an array is
no of inverted pairs in the array
*/

#include <bits/stdc++.h> 
using namespace std;

int inverted(int arr[],int n){

int count = 0 ; // count of inverted pairs
for (int i=0;i<n ; i++){

    for (int j = i+1;j<n;j++)
        if (arr[i]>arr[j]){
            count ++ ;
        }

    
}
return count ;

}

int main() {
    int arr[6]={3,1,5,2,6,3} ;
    cout << "no of inversion are -> " << inverted(arr,6) ;
    
    return 0;
}