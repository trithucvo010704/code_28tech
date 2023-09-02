#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const int MOD = (int) 1e9 +7 ; 

inline ll gcd( ll a, ll b ){ll r ; while(b){r = a % b ; a= b ; b =r ;} return a ;} 
//bai toan la muon chia k cai keo cho n nguoi trong do moi nguoi it nhat 1 cai keo 
// dung to hop chap k -1 cua n -1 de giai quyet bai toan 
// la dem so sach de them cac phan tu giong nhau vao cac nhom 
// vi du chia n phan tu vao k nhom 
// cach giai la chon to hop chap k -1 cua c+k -1 de tim cac cach  

