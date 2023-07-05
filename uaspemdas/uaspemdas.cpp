#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	/*lengkapi disini*/
};

class Lingkaran :public bidangDatar {
public:
	int jarijari;
	void input() {
		cout << "Masukkan jari-jari : " << endl;
		cin >> jarijari;
		setX(jarijari);
	}
	float Luas(int a) {
		return 3.14 * a * a;
	}
	float Keliling(int a) {
		return 3.14 * 2 * a;
	}
	//void cekUkuran() {
		//if (Keliling > 40) {
			//cout << "Lingkaran besar";
		//}
		//else if(Keliling < 20 && Keliling > 10){
			//cout << "Lingkaran sedang";
		//}
		//else {
			//cout << "Lingkaran kecil"; 
		//}
		//return;
	//}
};

class Persegipanjang :public bidangDatar {
	int sisipanjang; 
	int sisilebar;
	void input() {
		cout << "Masukkan panjang persegi panjang : " << endl;
		cin >> sisipanjang;
		setX(sisipanjang);
		cout << "Masukkan lebar persegi panjang : " << endl;
		setX(sisilebar);
	}
	float Luas(int a) {
		return a * a;
	}
	float Keliling(int a) {
		return 2 * a + 2 * a; 
	}
	void cekUkuran() {
		Persegipanjang* pkeliling = &keliling;  
		if (keliling > 40) {
			cout << "Persegi panjang besar";
		}
		else if (keliling > 20 && keliling < 40) {
			cout << "Persegi panjang sedang";
		}
		else { 
			cout << "Persegi panjang kecil";
		}
		return;
	}
};

int main() { 
	Lingkaran lingkaran;
	Persegipanjang persegipanjang;

	bidangDatar* a = &lingkaran;
	bidangDatar* b = &persegipanjang;

	a->input();
	int x = a->getX();
	cout << "Luas : " << a->Luas(x) << endl;
	cout << "Keliling : " << a->Keliling(x) << endl;

	b->input();
	x = b->getX();
	cout << "Luas : " << b->Luas(x) << endl;
	cout << "Keliling : " << b->Keliling(x) << endl;
 }