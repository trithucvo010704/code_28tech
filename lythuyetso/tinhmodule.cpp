#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const int MOD = (int) 1e9 +7 ; 
int main(){
    int  n ; 
    cin >> n ;
    int a[100] ; 

    for( int i = 0 ; i < n; i++ ){
        cin >> a[i] ; 
    }
    ll res  = 1 ;
    for( int i = 0 ; i < n ; i++ ){
        res *= a[i] ; 
        res %= MOD ; 
    }
    cout << res <<" " ;
}
