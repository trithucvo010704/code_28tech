#include<bits/stdc++.h>
#include<stack>
using namespace std; 
// cach hd LAST IN FIRST OUT 
// cau truc du lieu ngan xep
// push day vao stack 
// pop day ra stack
// size tra ve so luong phan tu 
// top lay ra phan tu o dinh 
// empty ( check rong hay khong rong cua stack) 
// O(1) 
int main(){
    // bt chuyen doi sang so nhi phan 
    // int n ; cin >> n ; 
    // stack<int> st ; 
    // while( n!= 0 ){
    //     st.push( n%2 ) ; 
    //     n /= 2 ; 
    // } 
    // while( !st.empty()){
    //     cout << st.top()  ; 
    //     st.pop() ; // day thang tren cung ra khoi stack  
    // }



    // bai toan kiem tra dau ngoac hop le hay khong 
    string s  ;cin >>s ; 
    stack<char> st ; 
    for( char x :s ){
        if( x == '(') {
            st.push(x) ; 
        }
        else {
            if( st.empty() ){
                cout <<"\n INVALIED " ; 
                break;
            }
            else {
                st.pop() ;
            }
        }
    }
    if( st.empty()){
        cout << "valied !" ; 

    }
    else cout << " IN VA LIED " ; 

}

