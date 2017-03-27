#include <iostream>
using namespace std;

	//prototype
	void prosesbaca ();
	void prosestukar ();
	void prosestampil ();

	//variable global
	int a,b,temp;

	//proses utama
	int main ();
	Prosesbaca ();
		prosestukar ();
		prosestampil ();
		return 0;
		}

	//proses membaca
	void prosesbaca () {
		cout << "masukkan nilai A: ";
		cin >> a ;
		cout << "masukkan nilai B: ";
		cin >> b ;
		}

	//proses tuker
	void prosestuker () {
		temp b;
		b = a;
		a = temp;

	//prosestampil
	void prosestampil () {
		cout << "============" <<endl;
		cout << " nilai a sekarang: "<<a <<endl ;
		cout << " nilai b sekarang: "<<b;