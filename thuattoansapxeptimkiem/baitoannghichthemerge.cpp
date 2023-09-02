#include<bits/stdc++.h>
using namespace std;
int merge ( int a[] , int l , int m  , int r){
    vector<int> x (a+l  , a+m+1 ) ; 
    vector<int> y (a+m+1  ,a+r+1) ; 
    int i = 0 , j = 0 , cnt = 0 ; 
    while( i < x.size()  && j < y.size() ){
        if( x[i] <= y[j] ){
            a[l]  = x[i] ;
            ++l ; ++i ; 
        }
        else {
            cnt+= x.size()  - i ;
            a[l] = y[j] ;
            ++l ; ++j ; 
        }

    }
    while( i<x.size() ){
        a[l] = x[i] ;
        ++l ; ++i ; 
    }while( j <y.size()){
        a[l] = a[j] ; 
        ++l ; ++j; 
    }
    return cnt ; 
}
int mergesort( int a[] , int l , int r){
    int dem = 0 ; 
    if( l<r ){
        int m = (l+r)/2 ;
        dem+= mergesort( a,l,m ) ;
        dem+= mergesort(a,m+1,r) ; 
        dem+= merge(a,l,m,r) ;  
    }
    return dem ; 
}
    // vd input 6 
    //        8 7 1 9 2 3 
    //         out put 9 


int main(){
    int a[6]  ={8,7,1,9,2,3} ; 
    cout << mergesort(a,0,5) ; 
}
