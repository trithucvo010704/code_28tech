#include<bits/stdc++.h>
using namespace std ;
// set la tap hop co cac phan tu khac nhau sap xep tu bé đến lớn 
// khai bao : set<kieudulieu> ; 
// them ptu vao set : insert : cu phap set.insert;
// size so luong phan tu  
// tim dung count hoac find ; 
//erase : xoa phan tu ; dung gia tri hoac vi tri  
// multiset la luu duoc ca cac phan tu giong nhau
// unordered_set khong sap xep tu be den lon nhu set va multiset 

int main(){
    set<string> s ; 
    s.insert("vo thuc ") ; 
    s.insert("cong minh" ) ; 
    cout << s.size() << endl ;
    /*cout << " nhap so phan tu khac nhau" ; int n ; cin >> n ;
    set <int >s ; 
    //cout <<" nhap so phan tu can tim : " ;  int k ; cin >> k ; 
    for( int i = 0 ; i<n ; i++ ){ s.insert(i) ;} 
    //if(s.count(k) != 0  )
     //   cout << "\n thay " ;  
    //else cout << " \n k thay " ;
   / if(s.find(k) != s.end()){
        cout << "\n thay " ;

    }  
   // else cout <<" k thay " ; 
    for( int x :s){ cout <<x <<" " ; }
    cout <<endl ;
    s.erase(5) ;
    for( int x :s){ cout <<x <<" " ; }
    for( set<int> ::iterator  it = s.begin() ; it != s.end() ;++it){
        cout << *it <<" " ;
    }
    int n ; 
    cin >> n  ;
    set <int> s ; 
    for( int i = 0 ; i< n ; i++){
    	int x  ; cin >>x ; 
    	s.insert(x) ; 
	}
	cout <<" \n cac phan tu khac nhau cua mang la : " ; 
	for( int e : s ){
		cout << e <<" " ;
	}
	cho mang co n phan tu va chot k bat ki la day con lien tiep ; 
	in ra duoc ca phan tu lon nhat trong  k
	10 3 
	1 1 3 3 4 5 1 6 6 7
	out put
	3 3 4 5 5 6 6 7 */ 
	int n , k ; 
	cin >> n>> k ; 
	int a[n] ; 
	for( int i = 0 ; i< n  ; i++){
		cin >> a[i] ; 
	} 
	multiset <int> ms ; 
	for( int i = 0 ; i< k ; i++){
		ms.insert(a[i]) ; 
	}
	for( int i = k ; i< n ;i++){
		cout <<" " << *ms.rbegin() ; 
		ms.erase(ms.find(a[i-k])) ;
		ms.insert(a[i]) ;
		cout << *ms.rbegin() <<endl ;
	}
	 
	
}
