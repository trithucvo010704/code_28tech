#include<bits/stdc++.h>
using namespace std ;  
// tao node 
struct svien{
	string id,name ,diachi  ;
	float gpa ;  		
};
struct SV{
	svien s;
	SV *tiep; 
};
typedef struct SV* sv;


sv make_sv( ){
	svien s ; 
	cout <<"\n nhap ID : "; cin >> s.id ;
	cin.ignore();
	cout <<"\n nhap name : " ;getline( cin,s.name ) ;
	cout <<"\n nhap dia chi :"; getline( cin,s.diachi );
	cout <<"\n GPA : " ;cin >>s.gpa  ; 
	sv tmp = new SV() ;// cap phat mot o nho moi thang thang sinh vien ; 
	tmp->s =s;
	tmp->tiep = NULL;// lay du lieu cua sv vua nhap vap tmp ;
	return tmp;   
}
int size( sv a){
	int cnt = 0 ; 
	while( a != nullptr){
		++cnt; 
		a =a->tiep; 
	}
	return cnt; 
}
bool empty ( sv head ){
	return head == nullptr ; 
}
void insert_firstlist( sv &a){
	sv tmp = make_sv();
	if( a== nullptr ){
		a =tmp ;
	} 
	else {
		tmp->tiep  = a; 
		a= tmp ;// tmp thang dau tien
	}
}
void insert_lastlist( sv &a){
	sv tmp = make_sv() ; 
	if( a==nullptr) a =tmp ;
	else{
		sv p = a; 
		while( p->tiep != NULL){
			p = p->tiep;
		}
		p->tiep = tmp;
	}
}
void insert_midlist(sv &a , int pos){
	int n = size(a); 
	if( pos<= 0 || pos > n+1){
		cout <<"\n vi tri chen sai hop le !" ; return ; }
	if ( pos == 0){
	 	insert_firstlist(a);
		return ; 
	} 
	else if  (pos == n+1 ) {
		insert_lastlist(a);
		return ; 
	}
	sv tmp = make_sv();
	sv p =a ; 
	for( int i = 1; i< pos-1;i++){
		p = p->tiep ;
	}
	tmp->tiep = p->tiep ; 
	p->tiep = tmp;


}
void earase_firstlist( sv &a){
	a =a->tiep ; // bo qua thang dau 
}
void earase_lastlist ( sv &a){
	sv truoc = nullptr; sv sau = a;
	while(sau->tiep != nullptr){
		truoc =sau ;
		sau = sau->tiep ;
	}
	if( truoc == nullptr) a= nullptr;
	truoc->tiep = nullptr ; // bo qua thang sau
}
void earase_midlist( sv &a , int pos){ // vi tri tu 1 cho den n 
	if( pos<= 0 || pos> size(a)){
		cout <<"\n vi tri xoa khong hop le !" ; 
		return ;
	}
	if( pos == 0 ) {
		earase_firstlist(a); 
	}
	else if( pos == size(a) ){
		earase_lastlist(a) ;
	}
	sv truoc  = nullptr  ,sau = a; 
	for( int i = 1 ;i< pos ;i++){
		truoc = sau ; 
		sau = sau->tiep  ;
	}
	// chuc nang vong for la cho tro sau chay den vi tri pos va con tro truoc nga y sau do 
	truoc->tiep = sau->tiep ;
}
void in(svien a){
	cout << "********************************"<<endl;
	cout << a.name <<" " <<a.id <<" "<<a.diachi <<" "<<a.gpa<<  endl;
}
void inds( sv a){
	cout <<"\n********************************"; 
	while( a= nullptr ) {
		in(a ->s) ; 
		a = a->tiep ;
	}
}
void sx( sv &a){
	for( sv p = a; p->tiep != nullptr ; p = p->tiep ){
		sv min = p ;
		for( sv q = p->tiep ; q->tiep != nullptr ; q= q->tiep ){
			if( q->s.gpa < min->s.gpa ) min = q ; 
		}
		// swap du lieu cua thang p va min 
		svien tmp  = p->s ;
		p->s = min->s ;
		min->s = tmp ; 
	}
}
int main(){
	sv head  = nullptr ; // node dau tien tro vao null 
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
			
			insert_firstlist(head) ; 
		}
		else if (lc==2){
			
			
			insert_lastlist(head) ; 
		
		}
		else if (lc==3){
			cout <<"\n nhap vi tri chen : " ;int pos ; cin >> pos;

		
			insert_midlist(head,pos) ; 
		}
		else if( lc==4) {
			earase_firstlist(head) ; 
		}
		else if( lc==5) {
			earase_lastlist(head) ; 
		}
		else if( lc==6){
			cout <<"\n Nhap vi tri can xoa : " ; int x ;cin >> x  ;
			earase_midlist(head,x); 
		}
		else if ( lc== 7 ){
			inds(head) ;
		}
		else if ( lc==8) {
			sx(head);
			inds(head) ; 
		}
		else if( lc==0) {
			cout <<"\n Ban vua ket thuc chuong trinh!"; 
			break;
		}
		
	}
}