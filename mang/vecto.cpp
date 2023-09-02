#include<bits/stdc++.h>
using namespace std ; 
// khai bao : vecto<kieu du lieu > ten_vecto : nhu la mang dong 
//  push_back() : la day mot phan tu vao cuoi vecto
// size() ;kich thuoc vecto 
// truy cap thong qua chi so 
// truy cap bang iterator
// auto thay cho iterator 
// muon khoi tao va dat gia tri cho tat ca 
int main(){
	int n ; cin >> n ; 
	vector<int> a(n,11) ; 

	//vector<int> a(n);
	for(int i=0 ; i<n ; i++){
		cin >> a[i] ;
	} 
	
	cout << a.size() ; 
	cout <<" \n phan tu dau tien cua vec to "  << a[0] ; 
	cout <<" \n phan tu cuoi cung vec to " << a[a.size() -1] <<endl ; 
//	for(int i=0 ; i<v.size() ; i++){	
//		cout << v[i] <<endl ;
//	}
//	for(vector<int>::iterator it = a.begin() ; it != a.end() ; ++it){
//		cout << *it<<endl ; 
//	}
	for(auto it = a.begin() ; it != a.end() ;++it){
		cout << *it<<endl ;
	}

}