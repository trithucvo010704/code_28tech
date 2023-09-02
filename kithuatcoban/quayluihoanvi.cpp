#include<bits/stdc++.h> 
using	 namespace std ; 
int n,a[100] ,used[100] ; 
void inkq(){
	for( int i = 1; i<= n ; i++){
		cout << a[i] ; 
	}
	cout << endl ;
}
void Try( int i ){
    for( int j = 1; j<= n ; j++){
        if( used[j] == 0 ){
            // ktra chua xh 
            a[i] = j ; 
            used[j] = 1 ;
            if( i == n ){
                inkq();
            }
            else {
                Try( i+1 );
                // backtrack 
 
            }
            used[j] = 0 ;
        }
    }
}
int main(){
    memset( used, 0, sizeof(used) );
    cin >> n ; 
    Try(1) ; //
}