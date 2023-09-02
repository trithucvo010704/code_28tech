#include<bits/stdc++.h>
using  namespace std;
int a[1000001] ;
void sang(){
    for( int i = 0 ; i<= 1000000 ; i++){
        a[i] = 1 ; 
    }
    a[0] = a[1] = 0 ; 
    for( int i =0 ;i<= 1000;i++){
        if( a[i] == 1 ) {
            for( int j =i*i ;j<=1000000; j+=i){
                a[j] = 0 ;
            }
        }
    }
}
int main(){
    int n ; 
    cin >> n ;
    sang() ; 
    for( int i = 0 ; i <=n; i++){
        if( a[i] == 1 ){
            cout << i <<" " ; 
        }
    }
}