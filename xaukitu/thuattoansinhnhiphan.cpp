#include <bits/stdc++.h>
using namespace std;
// thuat toan sinh xau nhi phan 
// - cau hinh dau tien 
// - cau hinh cuoi cung 
// - phuong phap sinh

// phuong phap lam nhu sau 
// khoi tao cau hinh dau tien 
// while( chung nao khac cau hinh cuoi cung ){
//     in ra cau hinh hien tai 
//     - sinh ra cau hinh tiep theo 
// }
// sinh xau nhi phan 
int n,a[100], ok,k ; 
void ktao(){
    for( int i = 1 ; i<= n ; i++){
        a[i] = 0 ; // khoi tao bit bang 0 
    }
}
void sinh(){
    int i = n ;
    while( i>= 1 && a[i] == 1){
        a[i] = 0 ;
        --i ; 
    }
    if( i==0 ){
        ok = 0 ;// day la bit cuoi cung 
    }
    else {
        a[i] = 1 ; 
    }
}
// chi in ra cac xau nhi phan co do dai ma co k bit 1 
bool check(){
    int cnt = 0 ; 
    for( int i = 1 ; i<= n ; i++){
        cnt+= a[i] ; 
    }
    return cnt== k ;
}
int main (){
   
    cin >> n>> k ;
    
    ok  = 1; // cac bit khac bit cuoi cung 
    ktao() ; // bit dau tien 
   
    while( ok ){
        if( check()){
            for( int i = 1 ; i <=  n ; i++){
            cout << a[i] ;
            }
            cout << endl ; 
        }
        sinh() ;
    } 
    
}