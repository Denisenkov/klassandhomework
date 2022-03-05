#include "hht.h"
void Goods::coutg() const {

	cout << "\nName - "<< Goods::name;
	cout << "Price - " << long(Goods::price * (1.0 + Goods::percent / 100.0));

}
void Goods::cing() {
	cout<< "\nEnter name ";
	cin >> Goods::name;
	cout << "\nEnter price ";
	cin >> Goods::price;
}
double krug::lokr() {
	return 2 * 3.14 * r;
}
double krug::skrug () {
	return  3.14 * r*r;
}
double krug::dkrug() {
	return  2 * r ;
}
void krug::cink() {
	cout << "\nEnter R ";
	cin >> krug::r;
}
/*int mod(int a) {
	if (a < 0) {
		return -a;
	}
	return a;
}
void rnd(int* m, int size) {
	for (int j = 0; j < size; j++) {
		m[j] = rand() % 11-5;
		}
}
void snb(int* m, int size) {
	int i = 0, n = 0,g;
	while ( n==0 ) {
		n = 1;
		for (int  j= 0; j < size-1; j++) {
			if (m[j] > m[j + 1]) {
				g = m[j];
				m[j] = m[j + 1];
				m[j + 1] = g;
				n = 0;
			}
		}
		i++;
	}
}
void inv(int* m, int size) {
	int g;	
	for (int j = 0; j < size / 2; j++) {
		g = m[j];
		m[j] = m[size - 1 - j];
		m[size - 1 - j] = g;
     }
}
void snv(int* m, int size) {
	int i = 0, n = 0, g;
	while (n == 0) {
		n = 1;
		for (int j = 0; j < size - 1; j++) {
			if (m[j] < m[j + 1]) {
				g = m[j];
				m[j] = m[j + 1];
				m[j + 1] = g;
				n = 0;
			}
		}
		i++;
	}
}
void mmm(int* m, int size, int (*fun)(int)) {
	for (int i = 0; i < size; i++) {
		m[i] = fun(m[i]);
	}

}
void coutm(int* m, int size) {
	cout << "\n";
	for (int i = 0; i < size; i++) {
		cout << m[i] << setfill(' ') << setw(4);
	}

}

void (*fun(int* m, int size)) (int* m, int size) {
	int s = 0;
	for (int j = 0; j < size; j++) {
		s = s + m[j];
	}
	
	if (m[0] == s) return inv;
	if (m[0] > s) return snv;
	if (m[0] < s) return snb;

}
*/