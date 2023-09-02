#include<bits/stdc++.h>
using namespace std ;
// binary search (O log n)
bool bs( int *a , int n , int x ){
	int l =0 , r =n-1; 
	
	while( l<= r){
		int mid = (l+r) /2 ;
		if( mid == x ) return true  ; 
		else if( x> mid ){
			l = mid+1 ; 
		}
		else  r = mid -1 ; 
	}
	return false ; 
}

int first_poss( int *a , int n , int x){
	int l = 0 ,r = n-1 ;
	int res = -1;  
	while( l <= r){
		int mid = (l+r) /2 ; 
		if(x == a[mid]  ){
			res = mid ;
			r = mid -1 ; // tim them ben trai 
		}
		else if( x<a[mid] ){
			r = mid -1 ;
		}
		else l =mid+1 ; 
	}
	return res ; 
}
// ham co san trong c++
// ham tknp : cu phap binary_search(a,a+n,x) 
// trong do : a la vi tri dau tien 
// 			a+n  la vi tri sau vi tri cuoi cung 
// 			x la gia tri can tim 
//ham lower bound : tim ra vi tri dau tien phan tu >= x 
//cu phap: lower_bound( vitri1 , vitri2 , x) 
//		trong do : duyet tu vitri mot den vi tri2 -1 
//		
//neu tat ca cac phan tu trong mang( set,map) nho hon x thi ham lower bound tra ve vitri2 ;
//		
//		
//upper bound tuong tu nhung tra ve phan tu dau tien > x !		
int last_poss (int *a , int n , int x){
	int l = 0 ,r = n-1 ;
	int res = -1;  
	while( l <= r){
		int mid = (l+r) /2 ; 
		if(x ==a[mid]  ){
			res = mid ;
			l = mid +1 ; // tim them ben phai
		}
		else if( x<a[mid] ){
			r = mid -1 ;
		}
		else l =mid+1 ; 
	}
	return res ; 
}
// oke oke 
int main(){
	int n ;
	cin >> n ; int x ; cin >>x  ;
	int *a = new int[n] ; 
	for( int i = 0 ; i<n ; i++){
		cin >>a [i] ; 
	}
	 
	int l = first_poss(a,n,x) ;
	int r = last_poss(a,n,x) ;  
	cout <<"\n so lan xuat hien cua x : " <<l-r+1;
	
}