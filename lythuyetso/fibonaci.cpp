#include <bits/stdc++.h>
using namespace std;

const int MOD  = 1e9 + 7 ; 
typedef  long long ll ;
ll a [1000001] ; 
void intt( ){
    a[0] = 1 ; 
    a[1] =1 ; 
    for( int i = 2 ; i<= 1000000 ; i++){
        a[i] = a[i-1] +a[i-2] ; 
        a[i] %= MOD ; 
    }
}
// O(n) ; 
/// cach lam nhan ma tran 
void nhan ( ll a[2][2] , ll b[2][2]){
    ll res[2][2] ; 
    for( int i = 0; i < 2; i++ ){
        for( int j = 0; j < 2; j++ ){
            res[i][j] = 0 ; 
            for( int k = 0; k < 2; k++ ){
                res[i][j] += a[i][k] * b[k][j] ;\
                res[i][j] %= MOD; 
            }
        }
    }
    for( int i = 0; i < 2 ; i++ ){
        for( int j = 0; j < 2; j++ ){
            a[i][j] = res[i][j]; 
        }
    }

}
ll pow( ll n ){
    ll res[2][2] = {{1,0},{0,1}} ; // ma tran don vi 
    ll a[2][2] = {{1,1},{1,0}} ; // ma tran fibonaci dau tien
    while(n){
        if( n%2 ==1 ){
            nhan(res,a) ; 
        }
        nhan(a,a) ; 
        n >>= 1 ;
    }
    return res[0][1];
}
int main(){
    ll n ; cin >> n ; 
    cout << pow(n)<<endl ;
}