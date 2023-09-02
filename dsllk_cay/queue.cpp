#include<bits/stdc++.h>
using namespace std ; 
struct Node{
	int data  ;
	Node *next ; // tro thang tiep theo 
	
}; 
typedef  struct Node* node  ; 
// frist in fisrt uot 
bool empty(node back) {// not dau tien trong danh sach nhung la cuoi cung trong hang doi 
	return back==nullptr ; 
}
int size( node back) {// top la dinh cua stack ; 
	int cnt = 0 ; 
	while( back!= nullptr){
		++cnt; 
		back = back->next ; 
	}
	return cnt ;
}
node make_node( int data){
	node tmp = new Node() ; 
	tmp->data = data ; 
	tmp->next = nullptr ; 
	return tmp ; 
}
void push( node &back , int x){
	node tmp = make_node(x) ;
	tmp->next =back; 
	back =tmp ;
}
void  pop ( node &back){
	node truoc = nullptr ,sau  =back ; 
	while( sau->next != nullptr ){
		truoc = sau; 
		sau = sau->next ; 
	}
	if( truoc== nullptr){
		back = nullptr ; 
	}
	truoc->next  =nullptr; 
	
}
// lay gia tri thang dau tien trong hang doi 
int front( node back){
	while( back->next != nullptr){
		back = back->next; 
	}
	return back->data ;
}
// in ra so loc phat 
int main(){
	node back = nullptr; // node cuoi cung trong queue va dau tien trong list
	push(back,6); 
	push(back,8) ;
	vector<string> v; 
	while( 1){
		int top = front(back); pop(back); 
		// lay thang dau trong que va xoa no sinh ra 6 8 
		string s = to_string( top) ;
		if( s.size() ==4) break ;
		v.push_back(s);
		push(back,top*10+6) ; 
		push(back,top*10 +8) ;
		
	}
	for( string s: v){
		cout <<s <<" " ;
	}
}
