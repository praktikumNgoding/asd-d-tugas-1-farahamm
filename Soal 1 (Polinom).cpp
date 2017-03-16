#include<iostream>
using namespace std;

typedef struct Polinom{
	int bil, pangkat;
	char x;};
	
int  a=0, b=0, c=0;	
Polinom Poli1[5], Poli2[6], Poli3[2];
Polinom tambah[8], kali[5*2], turun[5];
	
void Pol1(){
	Poli1[0].bil = 6;
	Poli1[0].x = 'x';
	Poli1[0].pangkat = 8;
	
	Poli1[1].bil = 8;
	Poli1[1].x = 'x';
	Poli1[1].pangkat = 7;
	
	Poli1[2].bil = 5;
	Poli1[2].x = 'x';
	Poli1[2].pangkat = 5;
	
	Poli1[3].bil = 1;
	Poli1[3].x = 'x';
	Poli1[3].pangkat = 3;
	
	Poli1[4].bil = 15;}

void Pol2(){
	Poli2[0].bil = 3;
	Poli2[0].x = 'x';
	Poli2[0].pangkat = 9;

	Poli2[1].bil = 4;
	Poli2[1].x = 'x';
	Poli2[1].pangkat = 7;

	Poli2[2].bil = 3;
	Poli2[2].x = 'x';
	Poli2[2].pangkat = 4;

	Poli2[3].bil = 2;
	Poli2[3].x = 'x';
	Poli2[3].pangkat = 3;

	Poli2[4].bil = 2;
	Poli2[4].x = 'x';
	Poli2[4].pangkat = 2;

	Poli2[5].bil = 10;}
	
void Pol3(){
	Poli3[0].bil = 1;
	Poli3[0].x = 'x';
	Poli3[0].pangkat = 2;

	Poli3[1].bil = 5;}
	
void bilPolinom(){
	Pol1();
	Pol2();
	Pol3();}
	
void jml(){
	for (int d=0; d<sizeof(Poli1)/sizeof(Polinom); d++){
		for (int e=0; e<sizeof(Poli2)/sizeof(Polinom); e++){
			if (Poli1[d].pangkat==Poli2[e].pangkat){
				tambah[a].bil=Poli1[d].bil+Poli2[e].bil;
				tambah[a].x=Poli1[d].x;
				tambah[a].pangkat=Poli1[d].pangkat;
				a++;}}}
	for (int d=0; d<sizeof(Poli1)/sizeof(Polinom); d++){
		if (Poli1[d].pangkat!=tambah[0].pangkat){
			if (Poli1[d].pangkat!=tambah[1].pangkat){
				if (Poli1[d].pangkat!=tambah[2].pangkat){
					tambah[a].bil=Poli1[d].bil;
					tambah[a].x=Poli1[d].x;
					tambah[a].pangkat=Poli1[d].pangkat;
					a++;}}}}
	for (int d=0; d<sizeof(Poli2)/sizeof(Polinom); d++){
		if (Poli2[d].pangkat!=tambah[0].pangkat){
			if (Poli2[d].pangkat!=tambah[1].pangkat){
				if (Poli2[d].pangkat!=tambah[2].pangkat){
					tambah[a].bil=Poli2[d].bil;
					tambah[a].x=Poli2[d].x;
					tambah[a].pangkat=Poli2[d].pangkat;
					a++;}}}}
	for (a=0; a<sizeof(tambah)/sizeof(Polinom); a++){
		cout << tambah[a].bil << tambah[a].x << tambah[a].pangkat << " + ";}
		cout<<endl;}

void krg() {
	for (int d=0; d<sizeof(Poli1)/sizeof(Polinom); d++){
		for (int e=0; e<sizeof(Poli2)/sizeof(Polinom); e++){
			if (Poli1[d].pangkat==Poli2[e].pangkat){
				tambah[b].bil=Poli1[d].bil-Poli2[e].bil;
				tambah[b].x=Poli1[d].x;
				tambah[b].pangkat=Poli1[d].pangkat;
				b++;}}}
	for (int d=0; d<sizeof(Poli1)/sizeof(Polinom); d++){
			if (Poli1[d].pangkat!=tambah[0].pangkat){
			if (Poli1[d].pangkat!=tambah[1].pangkat){
				if (Poli1[d].pangkat!=tambah[2].pangkat){
					tambah[b].bil=Poli1[d].bil;
					tambah[b].x=Poli1[d].x;
					tambah[b].pangkat=Poli1[d].pangkat;
					b++;}}}}
	for (int d=0; d<sizeof(Poli2)/sizeof(Polinom); d++){
		if (Poli2[d].pangkat!=tambah[0].pangkat){
			if (Poli2[d].pangkat!=tambah[1].pangkat){
				if (Poli2[d].pangkat!=tambah[2].pangkat){
					tambah[b].bil=Poli2[d].bil;
					tambah[b].x=Poli2[d].x;
					tambah[b].pangkat=Poli2[d].pangkat;
					b++;}}}}
	for (b=0; b<sizeof(tambah)/sizeof(Polinom); b++){
		cout << tambah[b].bil << tambah[b].x << tambah[b].pangkat << " + ";}
		cout<<endl;}
		
void perkalian(){
	for (int d=0; d<sizeof(Poli1)/sizeof(Polinom); d++){
		for (int e=0; e<sizeof(Poli3)/sizeof(Polinom); e++){
			kali[c].bil=Poli1[d].bil*Poli3[e].bil;
			kali[c].x=Poli1[d].x;
			kali[c].pangkat=Poli1[d].pangkat+Poli3[e].pangkat;
			c++;}}
	for (c=0; c<sizeof(kali)/sizeof(Polinom); c++){
		if (kali[c].pangkat==2){
			kali[c].x = 'x';}
		cout << kali[c].bil << kali[c].x << kali[c].pangkat << " + ";}
		cout<<endl;}
		
void turunan(){
	//2x^n-1
	//2x^3 = 3.2x^2 = 6x^2
	for (int d=0; d<sizeof(Poli2)/sizeof(Polinom); d++){
		if (Poli2[d].pangkat==0){
			break;}
		else{
			turun[d].bil=Poli2[d].bil*Poli2[d].pangkat;
			turun[d].x='x';
			turun[d].pangkat=Poli2[d].pangkat-1;}}
	for (int d=0; d<sizeof(turun)/sizeof(Polinom); d++){
		cout << turun[d].bil << turun[d].x << turun[d].pangkat << " + ";}
		cout<<endl;}
		
int main(){
    cout << "Soal - Soal Aritmatika Polinom" << endl;
    cout << "P1 = 6x^8 + 8x^7 + 5x^5+ x^3 + 15" << endl;
    cout << "P2 = 3x^9 + 4x^7 + 3x^4 + 2x^3 + 2x^2 + 10" << endl;
    cout << "P3 = x^2 + 5" << endl;
	bilPolinom();
	cout << "\nPenjumlahan P1 dan P2: " << endl;
	jml();
	cout << "Pengurangan P1 dan P2: " << endl;
	krg();
	cout << "Perkalian P1 dan P3: " << endl;
	perkalian();
	cout << "Turunan P2: " << endl;
	turunan();
	return 0;}
