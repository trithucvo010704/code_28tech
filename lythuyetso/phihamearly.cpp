#include<bits/stdc++.h>
using  namespace std;
typedef long long ll ; 
long long  phiham( long long  n ){
    long long  res = n ;
    for( int i=2 ; i<=sqrt(n) ; i++ ){
        if(n%i==0) {
            while( n%i==0 )
                n /= i ;  
            res -=  res/ i ;
        }
    }
    if( n!= 1 ){
        res -= res/ n ;
    }
    return res ; 

}
int main(){
    long long  n ; cin >> n ;
    cout <<phiham(n)<<endl;
}