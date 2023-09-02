#include<bits/stdc++.h>
using namespace std;
typedef  long long  ll  ;
// tron mang 
// dem so ptu mang a nho hon ptu mang b 
//  6 7
//  1 6 9 13 18 18 
//  2 3 8 13 15 21 25
// // out put  
//  1 1 2 3 4 6 6 
// bai tiep theo la dem so cap cua mang a va b
// 8 7 
// 1 3 3 3 5 8 8 
// 1 3 3 4 5 5 5 
int main(){
    int n ;  cin >> n ; 
    int m ; cin >> m ; 
    int a[n] ,b[m] ; 
    int i =0,j=0; 
    for( int &x :a ) cin >> x ;
    for( int &y :b ) cin >> y ;
    ll ans = 0 ; 
    while( i < n && j< m ){
        
        if( a[i] < b[j]) {
            ++i ;continue;  
        }
        if( a[i] > b[j]){
            ++j ;continue; 
        }
        int dem1 = 0 , dem2 =0 ; 
        while(i<n && a[i] == b[j] ){
            dem1++ ; ++i ; 
        }
        int tmp =a[i-1 ] ; 
        while( j<m &&  b[j] == tmp ){
            dem2++; ++j ;
        }
        ans +=  1ll* dem1*dem2 ; 
    }

   cout <<ans<<endl ; 
    
}