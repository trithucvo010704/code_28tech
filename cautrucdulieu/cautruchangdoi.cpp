#include<bits/stdc++.h>
#include<queue> 


using namespace std;
typedef  long long  ll ;

// cau truc hoat dong cua hang doi la 
// FIFO : first in first out 
// vi du day thang day tien  vao trong hang doi thi no  se lay ra thang dau tien 


// vi du dat 3 thang  theo thu tu la 1 2 3 vao trong hang doi 
// thi  vi du pop dau tien se la thang so 1 
// thao tac nhu stack khac moi viec truy cap vao thang dau tien trong hang doi la 
// front 
// vi du liet ke tat ca cac so nhi phan tu  1 den n 
// vector<string> res ; 
// void sinh(){
//     int cnt = 1 ; 
//     queue<string> q ; 
//     q.push("1") ; 
//     res.push_back("1") ;
//     while( res.size() <10000){
//         string top  = q.front(); 
//         q.pop();  
//         res.push_back(top + "0") ; 
//         res.push_back(top + "1") ; 
//         q.push(top +"0" ) ; 
//         q.push(top +"1" ) ; 
//     } 
// }
// bai tiep theo la sinh ra so de chia het cho mot so n 
// int ans[101] ; 
// vector<ll> res    ; 
// void sinh(){
//     queue<string> q ;  
//     q.push("9") ;
//     res.push_back(stoll( "9")) ;
//     while(1){
//         string top = q.front(); 
//         q.pop(); 
//         if( top.length() == 10) break ; 
//         res.push_back(stoll(top + "0")) ; 
//         res.push_back(stoll(top + "9")) ;
//         q.push(top + "0"); 
//         q.push(top + "9") ; 
//         for( int i = 1 ;i<= 100; i++){
//             for( ll x : res ){
//                 if( x% i == 0 ){
//                     ans[i] = x ; 
//                     break ; 
//                 }
//             }
//         }
//     }  
// }
// bai tiep theo so loc phat 
vector<string> res  ; 
void sinh( ){
    queue<string> q  ; 
    q.push("6") ; 
    q.push("8") ;
    res.push_back("6") ; 
    res.push_back("8") ; 
    while( 1){
        string top = q.front() ; 
        q.pop() ; 
        if( top.length() == 14) break ; 
        q.push(top +"6") ; 
        q.push(top +"8") ; 
        res.push_back(top+"6") ; 
        res.push_back(top +"8") ; 

    }
}
int main(){
    sinh() ; 
    int t  ;cin >> t ;
    while( t--){
        int n ; cin >> n ; 
        vector<string> tmp ; 
        for( string x : res){
            if( x.length() == n+1 ) break ; 
            tmp.push_back(x) ; 
        }
        reverse( tmp.begin(), tmp.end()) ;
        for( string x : tmp ){
            cout << x<<" " ; 
        } 
        cout <<endl ;
    }
}

