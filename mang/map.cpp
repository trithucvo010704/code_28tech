#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std; 

// map để lưu các cặp khóa va giá trị khóa trước và giá trí ở sau 
// ví dụ map<string , int > thì key có kiểu là string còn int là kiểu của giá trị 
// insert để thêm một cặp key - value vào map ; 
// tương tụ set thì key trong map k được trùng nhau 
// duyệt bằng for each hoặc auto < nhớ là phải là pair > ; 
// tìm kiếm bằng count và find 
// xoa dung erase 
// multimap thì lưu được key nhiều giá trị 
/*for ( pair<int, int> x : mp ){
        cout << x.first <<" " << x.second<<endl ;
    } 
    for( auto x : mp){
        cout << x.first <<" " << x.second<<endl ; 
    }
    for(map < int , int > :: iterator it = mp.begin() ; it != mp.end() ; it++ ){
        cout <<(*it).first <<" " <<(*it).second <<endl ; 
    }
    bai toan nhap so luong phan tu dem so lan xh cua cac ptu trong mang ; 
  vd  10 
  1 1 1 3 4 5 5 -1 -1 -4
  output: 
  số 1 3 lần 
  số 3 1 lần 
  số 4 một lần 
  số 5 2 lần 
  số -1 2 lần 
  số -4 1 lần 
   mình tim được 2 cách : c1 lồng 2 vòng for cách 2 sử dụng map 
   vd ta tạo 1 map lưu tăng dần 
   coi các số ban đầu là key ; 
 vd tiep dem so tu xuat hien nhieu nhat 
 10 
 java python c++ python ai ai string string string string 
 output 
 string 4 
 nếu ví dụ của chúng ta mà có 2 từ số lần xh bằng nhau thì muốn lấy cái đầu thì so sánh chỉ cần > còn muốn lấy kí tự từ điển nhiều hơn thì thêm dấu >= vào 
 vì map và set đều lưu theo thứ tự set lưu một  còn map lưu cặp 

*/ 
   
int main(){
   map<string , int > mp ; 
   int n ; cin >> n ; 
   for ( int i = 0; i< n ; i++){
    string s ; cin >> s ; 
    mp[s]++; 
   }
   int max = 0 ; string res ; 
   for (auto x : mp){
    if(x.second > max ){
        max = x.second ; 
        res = x.first ; 
    }
   }
    cout <<res << " " << max <<endl;
  

}
