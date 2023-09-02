#include<bits/stdc++.h>
using namespace std;
void tron2mang  ( int a[] , int l , int m , int r  ){
    vector<int> x (a+l , a+m +1 ) ; 
    vector<int> y (a+m+1 , a+r+1 ) ; 
    int i = 0 , j = 0 ;
    while( i <x.size() && j<y.size() ){
        if( x[i] <= y[j] ){
            a[l] = x[i] ;
           ++l ; ++i;
        }
        else {
            a[l] = y[j] ; 
            ++l; 
            ++j ; 
        }

    }
    while( i< x.size() ){
        a[l] = x[i] ;
        ++l ; ++i ; 
    }
    while( j<y.size()   ){
        a[l] = y[j] ; 
        ++l ; ++j ; 
    }
}
void mergeSort( int a[], int l ,int r){
    int m = (l+r) /2 ; 
    if( l>= r ) return ; 
    mergeSort(a,l,m) ; 
    mergeSort(a,m+1 , r) ; 
    tron2mang(a,l,m,r) ; 
}
int main(){
    int n = 100  ; 
     
    int a[100] ; 
    for( int i = 0 ; i< n ; i++){
             a[i] = rand() % 1000  ;  
    }
    mergeSort(a,0,n-1) ; 
    for( int x : a ){
        cout << x <<" "; 
    }
}