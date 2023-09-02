#include<bits/stdc++.h>
using namespace std;
//int first ( int a[] , int  l,int r , int x){
//    
//    int res = -1 ;
//    while( l<=  r){
//        int  m = (l+r )/2 ; 
//        if( a[m] == x){
//            res = m; 
//            r = m- 1; 
//        }
//        else if ( a[m] <x) r = m-1; 
//        else l = m+1 ; 
//    }
//    return res; 
////
//    
//}
//int last ( int a[] , int l,int r  , int x){
//    
//    int res = -1 ;
//    while( l<=  r){
//        int  m = (l+r )/2 ; 
//        if( a[m] == x){
//            res = m; 
//            l= m + 1; 
//        }
//        else if ( a[m] <x) r = m-1; 
//        else l = m+1 ; 
//    }
//    return res; 
//    
//    
//}
//// ham ti vi tri cuoi cung cua mot so cong a[i] nho hon k trong mang
//int last1( int a[], int l ,int r ,int x ){
//    int res =-1 ; 
//    while( l<= r){
//        int m = (l+r)/2 ; 
//        if( a[m] > x ){
//            res = m ;
//            r = m-1 ;
//        }
//        else l= m-1; 
//    }
//    return res;
//
//} 
// int x; 
// int a[100001] ;
// bool cmp( int a , int b){
//     return abs( a-x) < abs( b-x ) ;
// }
int main(){
  string  s ;
  int a[10] = {0} ; 
  cin.ignore();
  getline(cin ,s) ; 
  for( char c : s ){
    if( isdigit(c)){
      a[c-'0'] = 1; 
    }
  }
  for( int i  =0 ;i<10 ; i++){
    if( a[i]) {
      cout << i <<" " ; 
    }
  }



}
