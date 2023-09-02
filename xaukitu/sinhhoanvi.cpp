#include <bits/stdc++.h>
using namespace std ; 
// thuat toan sinh hoan vi tu 1 den n 
// int n , k , a[100] , ok ; 
// void ktao(){
//     for( int i=1 ; i<=n ; i++ ){
//         a[i] = i ; 
//         // khoi tao bit dau  tien 
//     }

// }
// void sinh(){
//     int i = n -1 ; 
//     while( i>= 1  && a[i] >a[i+1]){
//         --i ; 
//     }
//     if( i== 0 ){
//         ok = 0 ;// cau hinh cuoi cung 
//     }
//     else{ 
    

//         int j = n ; 
//         while( a[i] >a[j]){
//             --j ; 
//         }
//         swap( a[i] ,a[j] ) ; 
//         int  l = i+1  ; int r = n ; 
//         while( l< r){
//             swap( a[l] ,a[r] ) ;
//             ++l ; --r; 

//         }
//         // cach 2 neu k dung 2 con tro 
//         //reverse( a+i+1 , a+n+1 ) ;
//     }
// }
// dung ham next_permutation ( ham tu sinh hoan vi ) 
// hamn prev_permutation ( ham sinh haon vi nguoc ) 

int main(){
    int n ; cin >> n ;
    int a[n] ; 
    for( int i=0 ; i<n ; i++ ) a[i] = n- i ;// tu khoi tao cau hinh dau tien 
    do{
        for( int i=0 ; i<n ; i++ ){
            cout << a[i] ; 
        }
        cout << endl; 
    }
    while( prev_permutation(a, a+n) ) ;
   
}