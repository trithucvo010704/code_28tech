#include<bits/stdc++.h>

using namespace std  ; 
void ghidulieu(char *tentep){
	ofstream file(tentep,ios::out) ; 
	file << "Problem name: exp1" << endl;
    file << "Maximize" << endl;
    file << "obj:" << endl;
    file << "x1 + 2 x2 + 3 x3 + x4" << endl;
    file << "Subject To" << endl;
    file << "c1: x2 - 3.5 x4 = 0" << endl;
    file << "Bounds" << endl;
    file << "0 <= x1 <= 40" << endl;
    file << "General" << endl;
    file << "x4" << endl;
    file << "End" << endl;
    file.close() ; 
}
void docfile(char *tentep){
	ifstream f(tentep,ios::in) ;
	char s[255] ; 
	while(!f.eof()){
		f.getline(s,255) ; 
		cout <<s<<endl ;
	}
	f.close(); 
	
}
int main(){
	ghidulieu("fistfile.txt"); 
	docfile("fistfile.txt");
}