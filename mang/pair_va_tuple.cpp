#include<bits/stdc++.h>
using namespace std ; 
// pair : luu cac cap 
// khai bao : pair <kieudulieu1 , kieudulieu2> ten ; 
// dung make pair (kdl1 , kdl2) ; 
//v.first
//v.second
// tuple : luu nhieu cap 
// truy cap pair va tuple dung get<chiso>(ten pair hoac tuple)
int main(){
    tuple<int,int,int> t(1,2,3) ;
   // pair<int, int> v ={100,200} ; 
    //pair<long, long> v ; 
    pair<string, int> v  = {"vo thuc " , 200} ; 
    cout << get<0>(v) ;
}
