#include<bits/stdc++.h>
using namespace std; 
using ll = long long ; 


// // test 10 6 5 
// 1 2 5 9 10
// bai tiep theo kiem tra co 2 thang trong mot cua so k hay k 
bool solve( ){
    int  n,k ;cin >>n>>k ; 
    int a[n] ;for( int &x :a ) cin >>x ; 
    set<int> s ; 
    for( int i = 0 ; i< k ; i++ ){
        if( s.count(a[i])) return true  ; 
        s.insert(a[i] ) ; 
    }
    for( int i = k ; i< n ; i++ ){
        s.erase(a[i-k]) ;
        if( s.count(a[i])) return true ;
        s.insert(a[i] ) ; 
    }
    return false ;
}
// mau chot bai tap 5 cua 28 tech la phai phan tich duoc 
// a[j] -t < a[i] <a[j] +t ; xet theo thang a[j ]; 
// test la n k t trong do k la cua so t la dk tren  ; 
bool sovle1(){
    int n , k ,t  ; 
    cin >> n>>k>> t ; 
    int a[n+1] ; 
    for( int &X : a)cin >> X  ; 
    multiset<int> s  ; 
    for( int i = 0 ; i<k ; i++){
        auto it  = s.lower_bound(a[i] -t )  ; // tim xem co thang a[i] thoa man hay khong 
        if( it != s.end() && *it <= a[i] +t  ) return true ; 
        s.insert( a[i]); 

    }
    for( int i = k ; i < n ; i++){
        s.erase(a[i-k]);  
        auto it  = s.lower_bound(a[i] -t )  ; // tim xem co thang a[i] thoa man hay khong 
        if( it != s.end() && *it <= a[i] +t  ) return true ; 
        s.insert( a[i]); 

    }
}
int main(){
    int t ; cin >> t; 
    while(t--){
        // int n,k,b ; cin >> n>>k>>b ;
        // // su dung mamng danh dau 
        // int a[10001] = {0} ;  
        // for( int i = 0 ; i < b ; i++ ){
        //     int x  ; cin >> x  ; 
        //     a[x] = 1; 
        // }
        // int cnt  = 0 ; 
        // for( int i = 1 ; i<= k ; i++ ){
        //     if( a[i] == 1 ) ++cnt ;  
        // }
        // int ans = cnt ; 
        // for( int i = k+1  ; i<= n ; i++ ){
        //     cnt = cnt-a[i-k] +a[i] ; 
        //     ans  = min( ans, cnt) ; 
        // }
        // cout << ans <<endl ; 
        // BAI TAP TIEP THEO 
        if(solve()) cout<< "Yes " ; 
        else cout << "No " ; 
    }
}