#include<bits/stdc++.h>
using namespace std; 
// moois quan he giua chi so cha va con
// cha = i thi con ben trai = 2i+1 
//                 ben phai = 2i+2 
// tu con tinh ra cha thi se la : 
//                 (i-1) /2 day la vi tri  
// thuat toan heapsort 
// b1 xay dung hepify va maxheap 
void heapify ( int a[] , int n , int i ){
    int l = 2*i +1 ; // con ben trai cua i  

    int r = 2*i +2 ; // con ben phai cua i 
    int max = i ;
    if( l< n  && a[l] > a[max]){
        max  = l ; 
    }
    if( r< n  && a[r] >  a[max]){
        max = r ; 
    }
    if( max != i ){
        swap( a[i] , a[max]) ;
        heapify(a,n,max) ;
    }
}
void heapsort( int a[] , int n ){
    // xay dung max heap 
    for( int i = n/2 -1 ; i>= 0 ;i--){
        heapify(a,n,i) ; 
    }
    for( int i = n -1 ; i>= 0 ;i--){
        swap( a[i] , a[0]) ;
        heapify( a,i,0);
    }
}
int main(){
    int n = 100 ;  
    int a[100] ; 
    for( int i = 0 ; i< 100 ; i++){
        a[i] = rand() %1000 ; 
    }
    heapsort(a,n) ; 
    for( int i = 0 ; i< 100 ; i++){
        cout <<a[i] <<" " ;
    }
}