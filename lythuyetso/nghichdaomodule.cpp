#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const int MOD = (int) 1e9 +7 ; 
// vi dụ ta có nghịch đảo modul có khái niệm như sau 
// nếu có một thương chia dư cho mốt số m thì nó sẽ bằng 
// a * b mũ -1 chia dư cho m trong đó thì ( b mũ -1 nghĩa là nghịch đảo modul của b với m )
// công thức tìm x như sau hiêu đơn giản là nếu a.x chia dư cho m bằng 1 thì x là nghịch đảo modul của a 
// điêu kiện tồn tại nghịch dảo modul thì UCLN CỦA A VÀ M TRONG CÂU TRÊN LÀ 1 ;
// CACH  1 DE TIM NGHICH DAO MODUL
int x,y,d ;  
void ocolit( int a , int b ){
    if( b ==  0 ){
        x =1 ; 
        y = 0 ;
        d = a ; 
    }
    else {
        ocolit( b,a%b ) ;
        int tmp = x ; 
        x = y ; 
        y = tmp - a/b * y  ; 
    }
}
void nghich_modul( int a , int m ){
    ocolit(a,m ) ; 
    if( d!= 1){
        cout <<" \n hong ton tai nghic dao modul !" <<endl;
    }
    else {
        cout << (x % m +m ) % m  <<endl ; 
    }
}
// cach 2 de tim nghich modul co the dung luy thua nhi phan ( luu y chi sd voi so nguyen to ) 
ll pow_modul( ll a, ll b , ll m ){
    ll res  = 1 ; 
    a %=m ; 
    while( b != 0 ){
        if( b%2 == 1){
            res *= a;
            res %= m ;
        }
        a*= a ;
        a %=m ;
        b /= 2 ; 
    }
    return res ; 
}
ll nghich_modul2 ( ll a , ll m ){
    return pow_modul(  a , m -2 , m) ;
}
int main(){
    nghich_modul( 10 ,13) ;
    cout << nghich_modul2(10,13) ;
}

