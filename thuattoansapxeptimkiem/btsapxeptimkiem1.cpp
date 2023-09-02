#include<bits/stdc++.h>
using namespace std;
int timdau( int a[] , int n , int x){
    int res = -1 ; 
    int l = 0 , r= n-1 ; 
    while( l<= r ){
        int m = (l+r ) / 2 ; 
        if( a[m]== x ){
            res = m  ; 
            r = m-1 ; 
        }
        else if ( a[m] <= x  ){
            r = m-1 ;
        }
        else l = m+1 ; 
    }
    return res ; 
}
int timcuoi( int a[] , int n , int x){
    int res = -1 ; 
    int l = 0 , r= n-1 ; 
    while( l<= r ){
        int m = (l+r ) / 2 ; 
        if( a[m] ==x ){
            res = m ; 
            l = m+ 1 ; 
        }
        else if ( a[m] <= x  ){
            r = m-1 ;
        }
        else l = m+1 ; 
    }
    return res ; 
}

// bai tap khieu vu 
// bai tap nha gan nhat 
// xep gach
// vat sua bo
// tim doi cho  ( dung quicksort)
void qs ( int a[] , int l, int r){
    int i  = l ; int j = r ;
    int x = a[r] ; 
    while( i<= j ){
        while(a[i ] < x ) ++i ; 
        while( a[j] > x ) --j ; 
        if( i <= j ){
            swap( a[i], a[j]); 
            if( i != j ) cout << i+ 1 << " "<<j+1 << endl ; 
        }
        ++i ; --j ; 
    }
    if( l< j ) qs(a,l,j) ; 
    if ( i< r ) qs( a,i ,r) ; 
}
int main(){
    int n ;cin >> n ; 
    int a[n] ; 
    for( int &x : a ) cin >> x ;
    qs(a,0,n-1) ; 
}
