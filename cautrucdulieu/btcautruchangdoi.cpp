#include<bits/stdc++.h>
#include<queue>
using namespace std;
// tim ra cac buoc chuyen thanh so N ve so t qua CAC THAO TAC DA CHO sao cho so buoc nho nhat 
int solve( int n , int t )
{
    queue<pair<int,int>> q ; 
    set<int> se ;// luu xem no duoc duyet  chua
    q.push( {n,0}) ; 
    se.insert(n); 
    while( !q.empty()){
        pair<int,int> top = q.front(); 
        q.pop(); 
        if( top.first == t ) return top.second;
        if( top.first * 2 == t || top.first -1 == t  ) return top.second +1  ; 
        if( se.find( top.first *2 ) == se.end()  && top.first  <t ){
            q.push({top.first*2 , top.second +1 }) ; 
            se.insert(top.first*2 ) ; 
        }
        if(se.find(top.first -1 ) == se.end() && top.first >1  ){
            q.push({top.first -1 , top.second +1 }) ; 
            se.insert(top.first -1 ) ; 
        }
    } 
}
     
// bt tim duong di ngan nhat  tren luoi 
// 9 10  0 0  3 4 
// 1 0 1 1 1 1 0 1 1 1 
// 1 0 1 0 1 1 1 0 1 1 
// 1 1 1 0 1 1 0 1 0 1 
// 0 0 0 0 1 0 0 0 0 1 
// 1 1 1 0 1 1 1 0 1 0 
// 1 0 1 1 1 1 0 1 0 0 
// 1 0 0 0 0 0 0 0 0 1 
// 1 0 1 1 1 1 0 1 1 1 
// 1 1 0 0 0 0 1 0 0 1 
// out put 11 ;
int a[1000][1000] ; 
int d [1000][1000] ; // mang de luu buoc di cua a[i][j] ; 
int kx[4] = {-1,0,0,1} ; 
int ky[4] = {0 ,-1,1 , 0 };
pair<int,int > s  ,e ; 
int n , m ; 
void input(){
    cin >> n >> m >> s.first>> s.second >> e.first >> e.second ; 
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ){
            cin >> a[i][j]  ; 
        }
    }
    memset(d, 0, sizeof(d));
}
int sovle1(){
    queue<pair<int,int>> q ; 
    q.push({s.first , s.second}); 
    d[s.first][s.second] = 0 ; 
    while( !q.empty()){
        pair<int,int> top = q.front() ; q.pop() ; 
        int i = top.first ; 
        int j = top.second ; 
        // duyet 4 thang xung quanh a[i][j] 
        for( int  k = 0 ; k< 4 ; k++){
            int i1  = i + kx[k] ; 
            int j1  = j + ky[k] ;
            if( a[i1][j1] && i1 >= 0 && i1 < n && j1 >= 0 && j1 < m){
                a[i1][j1] = 0 ; 
                if( i1 == e.first && j1 == e.second ){
                    return d[i][j ] +1 ;

                }
                q.push({i1,j1}) ; 
                d[i1][j1] = d[i][j] +1 ;             } 
        }
    } 
    return -1 ; 
}

int main(){
    input() ; 
    if( a[s.first][s.second] && a[e.first][e.second] ){
        cout << sovle1() <<endl;
    } 
    else cout <<"-1 \n " ; 
}