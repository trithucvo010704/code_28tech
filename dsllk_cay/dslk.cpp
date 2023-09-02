#include <bits/stdc++.h>
// 

using namespace std;
struct Node{
    int data; // du lieu cua dslk 
    node *next; // pointer to the next node( con tro tro den thang tiep theo) 
    // cau truc tu tro 
}; 
typedef struct Node* node; 
// ham tao mot node moi cho kieu du lau so nguyen  
node make_node(int x){
    node tmp= new Node();// cap phat dong mot con tro moi 
    tmp->data = x;
    tmp->next = nullptr; // gan con tro tro den tiep theo bang con tro null
    return tmp; //
}
// da tao dc mot node moi 
// ktra list rong haty  k 
bool empty( node a){
    return a==nullptr ;
}
// ham tinh kich thuoc cua mot note 
int size( node a){
    int cnt = 0 ; 
    while( a!= nullptr){
        ++cnt; 
        a = a-> next; 
    }
    return cnt ; 
}
// them ptu vao dau danh sach 
void insert_firstlist( node &a , int x) {// trong do x la du lieu can insert a list
    node tmp = make_node(x);
    if( a==nullptr ){
        a= tmp ; // gan con tro tmp cho a la con tro dau tien trong danh sach 
        
    }
    else { // neu no co nhieu phan tu thi minh se tro thang tam den thang dau tien xong do gan thang dau tien bang tam trong day la a 
        tmp->next = a; // gan con tro can insert vao thang dau 

        a =tmp ;// 
    }
}
void insert_lastlist( node &a , int x){
    node tmp = make_node(x);
    if( a== nullptr){
        a = tmp ; 
    }
    else {
        node p = a ; // tao con tro dau tien ;
        while( p->next != NULL){
            p = p->next ;
        }
        tmp = p;
    }
}
int main(){
    node head  = NULL; // con tro tro toi ptu dau tien cua ds
}
 
