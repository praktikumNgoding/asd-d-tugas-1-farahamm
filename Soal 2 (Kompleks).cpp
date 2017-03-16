#include <iostream>
#include <cmath>
using namespace std;

typedef struct kompleks{
	int bil;
	char kar;};
	kompleks a, b, c, d;

void inisialisasi(){
	a.bil = 2;
	
	b.bil = 4;
	b.kar = 'i';
	
	c.bil = 3;
	
	d.bil = 5;
	d.kar = 'i';
	
	cout << "a = " << a.bil << endl;
	cout << "b = " << b.bil << b.kar << endl;
	cout << "c = " << a.bil << endl;
	cout << "d = " << d.bil << d.kar << endl;}

void penambahan() {
	cout << a.bil + c.bil << " + " << b.bil + d.bil << d.kar << endl;}

void pengurangan() {
	cout << a.bil - c.bil << " + " << b.bil - d.bil << d.kar << endl;}

void perkalian() {
	int h1 = (a.bil * c.bil) - (b.bil * d.bil);
	int h2 = (a.bil * d.bil) - (b.bil * c.bil);
	cout << h1 + h2 << d.kar << endl;}

void pembagian() {
	int n, m, o, p;
	n = ((a.bil * c.bil) + (b.bil * d.bil));
	m = (pow(a.bil, 2) + pow(b.bil, 2));
	o = ((b.bil * c.bil) - (a.bil * d.bil));
	p = (pow(c.bil, 2) + pow(d.bil, 2));
	cout << ((n / m) + (o / p)) << d.kar << endl;}

int main(){
	inisialisasi();
	int pilih;
	do{
		cout << "\nSilahkan pilih operasi : " << endl;
		cout << "1. Penjumlahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. Exit" << endl;
		cout << "Silahkan pilih : "; cin >> pilih;
	if (pilih == 1){
		penambahan();}
	else if (pilih == 2){
		pengurangan();}
	else if (pilih == 3){
		perkalian();}
	else if (pilih == 4){
		pembagian();}
	else if (pilih == 5){
		break;}
	else{
		cout << "Pilihan hanya 1 - 5" << endl;}} 
	while (true);
    return 0;}
