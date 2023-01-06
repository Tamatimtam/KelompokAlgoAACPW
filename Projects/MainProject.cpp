#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

void pilihbuku() {
	string buku[] = {" Mtk Diskrit\t"," Mobile Programming\t"," Bahasa Inggris"
	"\n Sosial Masyarakat\t"," Laskar Pelangi\t"," Penggunaan Bahasa\t",
	"\n Ethical Hacker\t"," Jaringan Komputer Dasar\t"," Game Developing \n"}
	
	for (int i=0,n=1; i<9; i++,n++) {
		cout<<buku[i];
		int jmlbuku = n
	}
}

int main() {
	int a[] = {2207421031,2207421032,2207421033,2207421034,2207421035,2207421036,2207421037,2207421038,
	2207421039,2207421040,2207421041,2207421042,2207421043,2207421044,2207421045,2207421046,2207421047,
	2207421048,2207421049,2207421050,2207421051,2207421052,2207421053,2207421054,2207421055,2207421056,
	2207421057,2207421058,2207421059};
	int i=0, nim, ada;
	
	do {
		
    cout << " Masukkan NIM Anda: ";
    cin >> n;
    cout << endl;
			     
	while (i<29){
	    if (a[i] == nim){
		    ada++;
	    }
		i++;
	}
	
	} while (ada == 0);		
	return 0;
}
