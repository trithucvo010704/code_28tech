#include<bits/stdc++.h>
using namespace std  ; 
int main(){
	int q ; 
	cin >>q  ; 
	q-- ;
	cin.ignore() ; 
	while( q--){		
		string s ;
		getline(cin,s) ; 
		
		int a[26] = {0} ;
		for( char x :s){
			a[tolower(x)  -'a'] = 1 ; 
		}
		int count = 0 ; 
		for( int i = 0 ; i< 26 ; i++){
			count += a[i] ; 
		} 	
		if( count ==26){
			cout << "YES"<<endl ;
			
		}
		else {
			cout <<"No "<<endl ; 
		}
	}
}