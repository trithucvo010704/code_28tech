#include<bits/stdc++.h>
using namespace std;
// ban chat quicksort la chia va tri dung phan hoach
// code theo lomuto patision

int lomuto( int a[] , int l  , int r){
     int x = a[r] ; 
     int i = l-1 ; 
     for( int j = l ; j <= r-1 ; j++){
         if( a[j] <= x ){
             i = i +1 ; 
             swap(a[i] , a[j]) ; 
         }
     }
     swap(a[i+1] , a[r]);
     return i+1 ; 
}

// phan hoach hoare 
int hoare( int a[] , int l , int r ){
    int p = a[l] ; 
    int i = l-1 ; 
    int j = r+1 ; 
    while( 1){
        do{
            ++i ;
        }
        while( a[i] <  p ) ; 
        do{
            --j ; 
        }
        while( a[j] > p ) ; 
        if( i <j ) {
            swap( a[i] , a[j]) ; 
        }
        else return j ; 
    }
}// phan hoach lomuto k lay chot 
void quicksort( int a[] , int l , int r){
    if (l>= r) return ; 
    int p =hoare(a,l,r) ; 
    quicksort( a,l,p) ; 
    quicksort(a,p+1,r) ; 
}
int main(){
    int n = 50 ; 
    int a[50] ; 
    for( int i = 0 ; i< n ; i++){
        a[i] = rand() %2000 ; 
    }
    quicksort( a,0,n-1) ; 
    for( int i = 0 ; i< n; i++){
        cout <<a[i] <<" " ; 
        
    }
}