#include<bits/stdc++.h>
using namespace std ; 
// xay dung ham sort
// cu phap la lay vi tri : 
// sort( a, a+n) : a la vi tri dau tien ; a+n la vi tri sau vi tri cuoi cung 
// A[X] >= A[Y] thi cu phap sort (vt_a[x] , vt[a+y+1]) ; 
// greater de sap xep giam dan cu phap : greater<int> () ; 
// vecto se sort tu a( a.begin(), a.end() ) 
// sap xep tang dan theo gia tri tuyet doiu 
// input 1 2 3 4 -1 -2 -3 -4 
// out put 1 -1 2 -2 3 -3 4 -4 
// su dung stable_sort ( stable sort tang tinh on dinh cho code )
//vi du sap xep cac tu co chieu dao giam dan 
// bool cmp( int a, int b ){
//     return abs(a) < abs(b) ; 
// }
bool cmp ( string a, string b ){
    if( a.size() != b.size() ){
        return a.size() > b.size() ; 
    }
    return a< b ;
}
main(){
    int n ; 
    cin >> n ; 

    string  a[n]; 
    for( int i=0 ; i<n ; i++ ){
        cin >> a[i] ;
    }
    stable_sort( a,a+n, cmp) ; 
   for( string x : a){
        cout << x << endl ; 
   }
}