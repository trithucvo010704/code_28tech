#include<bits/stdc++.h>
#include<deque>
using namespace std;
// double end queue
// size 
// push_front : day vao dau hang doi 
// push_back : day vao cuoi 
// pop_front : xoa ptu dau 
// pop_back : xoa ptu cuoi 

//  hang doi hai dau ( dequeue)
// front : lay ra ptu o dau 
// back : latra ptu o cuoi 
// sileding window maximum
/*1 1 3 3 4 5 1 6 6 7
	out put
	3 3 4 5 5 6 6 7 */ 
int main(){
   // giai bai tap ten 
   int n , k ; 
   cin >> n >> k ; 
   int a[n] ;
   deque<int> q ;  
   for( int &X  : a ) cin >> X ; 
   for( int  i = 0 ; i< k ; i++){
        while(!q.empty()  && a[i] > a[q.back()]){
            q.pop_back();
        }
        q.push_back(i) ; 
   }
   cout << a[q.front()] <<" " ; 
   for( int i = k ; i< n ; i++){
    if( q.front() <= i-k ){
        q.pop_front() ; 
    }
    while( !q.empty() && a[i] > a[q.back()]){
        q.pop_back() ; 
    }
    q.push_back(i) ; 
    cout << a[q.front() ] <<" " ; 
   }
} 