#include<bits/stdc++.h>
#include<stack>
// bai toan vi tri dau tien lon hon so dau tien trong mang 
// vd 3 4 2 5 1 6 2
// output 4 5 5 6 6 -1 -1 
using namespace std; 
int main(){
    int n ; 
    cin >> n ; 
    int a[n] , b[n] ; // mang b luu ket qua 
    for( int &x  :a ) cin >> x ; 
    stack <int> st ; 
    for( int i = 0; i < n ; i++ ){
        if( st.empty()){
            st.push(i) ; 
        }
        else{
            while( !st.empty()  && a[st.top()] < a[i]  ){
                b[st.top()] = a[i] ;
                st.pop() ; 
            }
            st.push(i ) ; 

        }
           
    }
    while(!st.empty()){
            b[st.top()] = -1 ; 
            st.pop() ; 
        }
    for( int x : b ) cout << x<<" " ; 
}