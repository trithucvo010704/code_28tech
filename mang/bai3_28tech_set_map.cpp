#include<bits/stdc++.h>
using namespace std;
int main(){
    int q ; 
    cin >>q ; 
    while (q--){
        int n , m ; 
        cin >>n >> m  ; 
        int a[n] , b[m] ; 
        for( int &x :a) cin >> x ;
        map <int, bool > mp  ; 
        for( int i = 0 ; i< m ; i++){
                int x ;cin >>x ;
                mp  [x] = true ; 
         
        }
        bool ok = false ; 
        for( int x: a){
            if( mp.find(x) == mp.end() ){
                cout <<x  <<" " ;
                ok = true ; // da tim thay ;  
            }
        }
        if( ok == false ){
            cout <<"\n Not found" ; 
        }
        else {
            cout <<endl ;
        }
    }
}