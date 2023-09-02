#include<bits/stdc++.h>
using namespace std ; 
struct Node{
	int data  ;
	Node *next ; // tro thang tiep theo 
	
}; 
typedef struct Node* node  ; 
bool empty(node top)
	return top==nullptr ; 1
}
int size( node top) {// top la dinh cua stack ; 
	int cnt = 0 ; 
	while( top!= nullptr){
		++cnt; 
		top = top->next ; 
	}
	return cnt ;
}
node make_node( int data){
	node tmp = new Node() ; 
	tmp->data = data ; 
	tmp->next = nullptr ; 
	return tmp ; 
}
// chuc nang : day mot thang vao stack(day vao dau )  LIFO; 
void push( node &top , int data){
	node tmp = make_node(data) ; 
	if( top == nullptr) {
		top = tmp ; // 
	}
	else {
		tmp->next =top ;
		top =tmp ; 
	}
}
// xoa ptu dau stack
void pop( node &top){
	if( top== nullptr) {
	return ; 
	}
	top = top->next ; 	
}
int  gettop( node top){ // lay gia tri thang dau tien cua stack 
	return top->data ; 
}
int main(){
	node top = nullptr ; 
	// chuyen doi so nhi phan 
	long long n ; cin >> n ; 
	while( n!=0){
		int r = n% 2 ; 
		push( top ,r) ; 
		n /= 2 ; 
	}
	while( !empty(top)){ // ktra khac rong 
		cout<<gettop ; 
		pop(top); 
	}
	cout <<endl ;
	cout << size(top) <<endl;
}