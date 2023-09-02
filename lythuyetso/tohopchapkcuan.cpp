
#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const int MOD = (int) 1e9 +7 ; 

// to hop chap k cua n trong khoang k>= 0 va n<= 1000
// vd nhieu test hoac 1 test 2 10 =  45 
int a[1000][1000] ; 
void intn(){
    for( int i=0; i<=1000; i++ ){
        for( int j=0; j<= i ;j++){// 2 vong for tinh to hop chap j cua i 
            if( j == 0  || j == i ){
                a[i][j] = 1 ;
            } 
            else {
                a[i][j] = a[i-1][j-1] + a[i-1][j] ; 
                a[i][j] %= MOD ; 
            }
        }
    }
}
/// neu test case lon nhu vi du n<= 10 mu 6 phai chia du cho mod 
// su dung luy thua nhi phan va nghich dao modul 
ll pow_modul ( ll a, ll b , ll m ){
    ll res = 1 ; 
    a %= m ;
    while( b!=  0){
        if ( b% 2 == 1){
            res *= a ;
            res %= m ;  
        }
        a*= a ; 
        a %= m ; 
        b /= 2 ; 

    }
    return res ; 

}
// luu y m phai la so nguyen to moi ap dung duoc cach luy thua nhi phan 
ll nghich_modul ( ll a, ll  m ){
    return pow_modul (a,m-2,m) ; 
}
ll m[1000001] ; // dung luu giai thua  
// cong thuc to hop theo giai thua sau khi nghich modul 
// n giai thua chia modul nhan voi nghich dao modul  cua ( n-k ) giai thua chia modul o tu xong tat ca chia modul cho mau   

int main(){
    int n , k ;
    cin >> n >>  k ;
    
    cout << a[n][k] << endl; 
    m[0] = 1 ;// 0! =  1 
    for( int i =1 ; i<= n ; i++){
        m[i] = i* m[i-1] ;
        m[i] %= MOD ; 
    }
    cout << m[n] %MOD * nghich_modul(m[k] * m[n-k] %MOD  ,  MOD)  %MOD ;  

}