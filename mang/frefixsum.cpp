#include<iostream> 
#include<math.h> 
using namespace std ; 
int main (){
	int n ; 
	cin >> n ; 
	int *a = new int [n+1] ; 
	for( int i = 1 ; i <= n ; i++){
		cin >> a[i] ;
	}
	int frefix[n+1] = {0} ; 
	for( int i = 1 ; i <= n ;i++ ){
		frefix[i] = frefix[i-1] +a[i] ; 
	}
	int q ; cout <<" \n nhap so lan truy van : " ;cin >> q ; 
	while(q-- ){
		int l ,r ; cin >> l >> r ; 
		cout<< frefix[r] - frefix[l-1] ; 
	}
}
