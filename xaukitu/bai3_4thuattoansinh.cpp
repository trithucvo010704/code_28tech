#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int n , a[1005] ; 
void sinh(){
    int i = n-1; 
    while(i>=1 && a[i] > a[i+1 ]){
        --i ; 
    }
    if( i == 0 ){
        for( int i  =1 ;  i<= n ; i++ ){
            cout << i  << " " ;
        }
        cout << endl; 
    }
    
    else {
        int j = n ;
        while( a[j] > a[i]){
            --j ; 
        }
        swap( a[i] ,a[j]) ; 
        reverse( a+i+1 , a+n+1); 
        for( int i =1 ; i<=n ; i++ ){
            cout << a[i] <<" " ; 
        }
        cout << endl ;
    }
}
int main(){
    int t ; cin >> t; 
    while ( t--){
        cin >> n ;
        for( int i = 1; i<= n ; i++){
            cin >> a[i] ;
        }
        if( next_permutation(a+1,a+n+1) ){
            for( int i = 1 ; i<=  n ; i++){
                cout << a[i] << " " ; 
            }
        }
        else {
            for( int i = 1 ; i<= n ; i++){
                cout << i <<" " ;
            }
        }
    }
}