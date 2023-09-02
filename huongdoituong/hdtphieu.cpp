#include<iostream>

using namespace std;

class Hang
{
private:
	string ten;
	float gia;
	int sl;
public:
	Hang()
	{
		
	}
	
	Hang(string ten2, float gia2, int sl2)
	{
		ten = ten2;
		gia = gia2;
		sl = sl2;	
	}
	
	void input()
	{
		cout << "Ten H: ";
		getline(cin, ten);
		cout << "Gia: ";
		cin >> gia;
		cout << "SL: ";
		cin >> sl;
		cin.ignore();	
	}
	
	void output()
	{
		cout << "Ten: " << ten << ", gia: " << gia << ", SL: " << sl << endl;	
	}
	
	float thanhTien()
	{
		return gia * sl;	
	}	
};

class NCC
{
private:
	string ma, ten, dc;
public:
	NCC()
	{
		
	}
	
	NCC(string ma2, string ten2, string dc2)
	{
		ma = ma2;
		ten = ten2;
		dc = dc2;	
	}	
	
	void input()
	{
		cout << "Ma NCC: ";
		getline(cin, ma);
		cout << "Ten NCC: ";
		getline(cin, ten);
		cout << "DC: ";
		getline(cin, dc);	
	}
	
	void output()
	{
		cout << "Ma: " << ma << ", Ten: " << ten << ", Dia chi: " << dc << endl;	
	}	
};

class Phieu
{
private:
	string ma, ngaylap;
	NCC n;
	Hang dshang[3];
public:
	Phieu()
	{
		
	}
	
	Phieu(string ma, string ngaylap, NCC n, Hang ds[])
	{
		ma =this-> ma;
		ngaylap =this ->ngaylap ;
		n = this -> n;
		for(int i = 0;i<3;i++)
		{
			this->dshang[i] = ds[i];
		}
	}
	
	float tongThanhTien()
	{
		float sum = 0;
		for(int i = 0 ; i < 3 ; i++)
		{
			sum += dshang[i].thanhTien();
		}
		return sum;
	}
	
	void input()
	{
		cout << "Ma P: ";
		getline(cin, ma);
		cout << "Ngay lap: ";
		getline(cin, ngaylap);
		n.input();
		for(int i = 0 ; i < 3 ; i++)
		{
			cout << "Hang thu " << i + 1 << endl;
			dshang[i].input();
		}
	}
	
	void output()
	{
		cout << "Ma P: " << ma << endl;
		cout << "Ngay lap: " << ngaylap << endl;
		n.output();
		for(int i = 0 ; i < 3 ; i++)
		{
			cout << "Hang thu " << i + 1 << endl;
			dshang[i].output();
		}
		cout << "Tong tien: " << tongThanhTien() << endl;
	}
	
};

int main()
{
	Phieu x;
	x.input();
	x.output();
	return 0;
}