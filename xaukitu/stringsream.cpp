#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "hello world my name is thuc " ; 
    stringstream ss (s) ; 
    string cpy ;
    while( ss >> cpy ){
        cout << cpy << endl; 
    }
}
