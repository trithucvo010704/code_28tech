#include<bits/stdc++.h>
using namespace std ;  
// tao node 
struct Node {
	int data ; 
	Node *next; 	
	
} ;
typedef struct Node* node;
node make_node(int x){
	node tmp = new Node(); // cap phat mot con tro node moi cho node ms 
	tmp->data = x ; // tro de lay du lieu 
	tmp->next  = nullptr ; 
	return tmp ;
	 
	 
} 
// ktra list rong 
bool empty( node a ){
	return  a== nullptr ; 
}
// ham xay ktra tra size cua list 
int size( node a){
	int cnt = 0 ; 
	while( a!=NULL){
		++cnt; 
		a = a->	next ; 
	}
	return cnt; 
}
void insert_firstlist( node &a, int x){ // x la du lieu can them vao dau danh sach 
	node tmp = make_node(x); // tao node can them du lieu 
	if( a == nullptr ){
		a =tmp ;// them vao dau list vi list chua co ai 
	}
	else {
		// tro con tro tiep cua cua node can insert vao dau list
		tmp->next = a ;
		a= tmp ;// 
	}
}
void insert_lastlist(node  &a, int x){
	node tmp = make_node(x) ;
	// TH 1 nhu tren 
	if( a == nullptr ){
		a =tmp ;
	}
	else {
		node p  =a ; // chay node tu node head (a) duyet den phan tu cuoi cho cho phan tu 
		// sau tro vao phan tu can dc tao 
		while( p->next != nullptr  ){
			p = p->next ; 
		}
		p->next = tmp ; // gan thang tiep theo cua ptu cuoi bang null
	}
}
// chen vao giua 
void insert_midlist( node &a, int x ,int pos  ){// pos la vi tri chen 
	int n = size(a) ;// lay so thanh vien trong list  
// minh lay vi tri tu node 1 den node thu n 
	if( pos<= 0 || pos>= n+1 ){
		cout <<"\n vi tri chen khong hop le " ; 
	}
	if( pos == 0 ){
		insert_firstlist(a,x); 
	}
	else if  ( pos == n ) insert_lastlist(a,x) ;
	node p = a ; // chen vao trc
	node tmp = make_node(x) ;  
	for( int i = 1 ; i<pos-1;i++){
		p = p->next ; // dong nay de tre den vi tri pos tru 1  
	} 
	tmp->next = p->next ;
	p->next  = tmp ; 
	
} // ham xoa thang dau tien 
void earase_firstlist(node &a){
	a = a->next ; 
}
void earase_lastlist( node &a){
	node dau = nullptr , cuoi  = a ;// con tro cuoi tro den list a
	while( cuoi->next != NULL){
		dau = cuoi ;
		cuoi = cuoi->next ; 
	}
	if( dau == nullptr ) a =nullptr; // chi co 1 ptu trong list 
	dau->next = nullptr ;// bo qua thang sau chinh la thang cuoi cung trong 
	
} 
void earase_midlelist( node &a , int pos ){
	if( pos<= 0 || pos> size(a)) {
		cout <<"\n vi tri chen khong hop le !" ; return ; 
	}
	node dau = nullptr ,sau = a ;
	for( int i = 1; i<pos ;i++){
		dau = sau ; 
		sau = sau->next;  
	} 
	dau->next = sau->next ; // bo qua thang sau chinh la pos 
}
// cach duy node 
void print( node a){
	cout <<"\n _+__+_+_+_+" ; 
	while( a!= nullptr ){
		cout << a->	data<< " " ; 
		a= a->next ;
	}
}
void sx( node &a){// theo selectsion sort
	for( node p = a; p->next != nullptr ; p = p->next ){
		node min = p ;
		for( node q = p->next ; q->next != nullptr ; q= q->next ){
			if( q->data < min->data ) min = q ; 
		}
		// swap du lieu cua thang p va min 
		int tmp  = p->data ;
		p->data = min->data ;
		min->data = tmp ; 
	}

}
int main(){
	node head  = nullptr ; // node dau tien tro vao null 
	while( 1){
		cout <<"\n ________MENU_______"; 
		cout <<"\n 1.CHEN VAO DAU DANH SACH " ; 
		cout << "\n 2.CHEN VAO CUOI DANH SACH" ;
		cout << "\n 3.CHEN VAO VT BAT KY IN DANH SACH ";
		cout <<"\n 4.XOA PTU DAU DANH SACH " ;
		cout <<"\n 5 XOA PTU CUOI DANH SACH ";
		cout <<"\n 6 XOA PTU BAT KY TRONG DANH SACH " ;
		cout <<"\n 7 DE IN RA DATA TRONG DANH SACH " ; 
		cout <<"\n 8 DE SAP XEOP THEO DATA DANH SACH ";
		cout <<"\n 0 DE KET THUC CHUONG TRINH ";
		
		cout <<"\n Nhap Lua Chon : " ; int lc  ;cin >> lc  ; 
		if( lc == 1){
			cout <<"\n Nhap so can chen : " ; int x ;cin >> x  ;
			insert_firstlist(head,x) ; 
		}
		else if (lc==2){
			
			cout <<"\n Nhap so can chen : " ; int x ;cin >> x  ;
			insert_lastlist(head,x) ; 
		
		}
		else if (lc==3){
			cout <<"\n nhap vi tri chen : " ;int pos ; cin >> pos;
			cout <<"\n Nhap so can chen : " ; int x ;cin >> x  ;
		
			insert_midlist(head,x,pos) ; 
		}
		else if( lc==4) {
			earase_firstlist(head) ; 
		}
		else if( lc==5) {
			earase_lastlist(head) ; 
		}
		else if( lc==6){
			cout <<"\n Nhap vi tri can xoa : " ; int x ;cin >> x  ;
			earase_midlelist(head,x); 
		}
		else if ( lc== 7 ){
			print(head) ;
		}
		else if ( lc==8) {
			sx(head);
			print(head) ; 
		}
		else if( lc==0) {
			cout <<"\n Ban vua ket thuc chuong trinh!"; 
		}
		
	}
}

 