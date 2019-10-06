#include <iostream>
#include <cmath>
using namespace std;
void petunjuk();
main ()
{
petunjuk(); //tampilkan petunjuk
double Hasil;
double a;
double b;
char op;
char jwb;
cout << "Masukan a = ";
cin >> a;

do
{
//jika angka yang mau di hitung masih nol
if (a == 0) {
cout << "Masukan a = ";
cin >> a;
}
cout << "Operasi : ";
cin >> op;
switch(op)
{
case 'c' : a = 0;
break;
case '+' : cout << "Masukan b : ";
cin >> b;
Hasil = a + b;
cout << "Jumlahnya adalah :" << Hasil << endl;
a = Hasil;

break;
case '-' : cout << "Masukan b : ";
cin >> b;
Hasil = a - b;
cout << "Hasilnya adalah : " << Hasil << endl;
a = Hasil;

break;
case '*' : cout << "Masukan b : ";
cin >> b;
Hasil = a * b;
cout << "Hasilnya adalah : " << Hasil << endl;
a = Hasil;

break;
case '/' : cout << "Masukan b : ";
cin >> b;
Hasil = a / b;
cout << "Hasilnya adalah : " << Hasil << endl;
a = Hasil;

break;
}
cout << "Apakah penghitungan mau dilanjutkan(Y/T) \n";
cin >> jwb;
}
while (jwb == 'Y' || jwb == 'y');
return 0;
}
void petunjuk()
{
cout << "Nama	: Willyta Asmara Diya Abadi \n";
cout << "Nim	: 19051397017\n";
cout << "Prodi	: D4 Manajemen Informatika\n";
cout << "-------|Universitas Negeri Surabaya|-------\n";
cout << "==================================================\n";
cout << "\t\tPROGRAM KALKULATOR SEDERHANA\t\t\n";
cout << "'+'= Penjumlahan \n";
cout << "'-'= Pengurangan \n";
cout << "'*'= Perkalian \n";
cout << "'/'= Pembagian \n";
cout << "==================================================\n";
}
