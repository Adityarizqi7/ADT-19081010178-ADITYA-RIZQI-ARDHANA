#include <stdio.h>
#include <string.h>

typedef char string[256];

typedef struct{
	string tggl;
	string blan;
	string thun;
}kembalikan;

typedef struct{
	kembalikan waktu;
	string tgl;
	string bln;
	string thn;
}pinjam;

typedef struct{
pinjam peminjaman;
string Tanggal;
string Bulan;
string Tahun;
}Lahir;

typedef struct {
string NPM;
string Nama;
string Alamat;
string Ptn;
string Email;
string Buku;
string Angkatan;
Lahir L;
}Peminjam;

Peminjam InputDataPeminjam (Peminjam B) {
system("cls");
printf("======================================================================\n");
printf("\t\t\tINPUT DATA PEMINJAM BUKU\n");
printf("======================================================================\n");
printf("\n");
printf(" NAMA BUKU	: "); scanf("%[^\n]",&B.Buku);fflush(stdin);
printf("\n");
printf(" TANGGAL PEMINJAMAN BUKU (Ex: DD MM YYYY) : "); scanf("%s%s%s", &B.L.peminjaman.tgl, &B.L.peminjaman.bln, &B.L.peminjaman.thn);
printf("\n");
printf("----------------------------------------------------------------------\n");
printf("\n");
fflush(stdin);
printf(" NAMA			: "); scanf("%[^\n]", &B.Nama);fflush(stdin);
printf("\n");
printf(" NPM			: "); scanf("%s", &B.NPM);fflush(stdin);
printf("\n");
printf(" EMAIL			: "); scanf("%[^\n]", &B.Email);fflush(stdin);
printf("\n");
printf(" ALAMAT			: "); scanf("%[^\n]", &B.Alamat);fflush(stdin);
printf("\n");
printf(" UNIVERSITAS		: "); scanf("%[^\n]", &B.Ptn);fflush(stdin);
printf("\n");
printf(" TANGGAL LAHIR (Ex: DD MM YYYY) : "); scanf("%s%s%s", &B.L.Tanggal, &B.L.Bulan, &B.L.Tahun);fflush(stdin);
printf("\n");
printf("-----------------------------------------------------------------------\n");
printf("\n");
printf(" TANGGAL PENGEMBALIAN BUKU (Ex: DD MM YYYY) : "); scanf("%s%s%s", &B.L.peminjaman.waktu.tggl, &B.L.peminjaman.waktu.blan, &B.L.peminjaman.waktu.thun);
printf("\n");
printf("======================================================================\n");
printf("\n\n\n");

return B;
}

void TampilkanDataPeminjam (Peminjam B) {
	
system("cls");
printf("======================================================================\n");
printf("\t\t\tDATA PEMINJAM  BUKU\n");
printf("======================================================================\n");
printf("\n");
printf(" NAMA BUKU : %s\n ", B.Buku);
printf("\n");
printf(" TANGGAL PEMINJAMAN BUKU : %s-%s-%s\n ", B.L.peminjaman.tgl, B.L.peminjaman.bln, B.L.peminjaman.thn);
printf("\n");
printf("----------------------------------------------------------------------\n");
printf("\n");
printf(" NPM			: %s\n", B.NPM);
printf("\n");
printf(" NAMA			: %s\n", B.Nama);
printf("\n");
printf(" EMAIL			: %s\n", B.Email);
printf("\n");
printf(" ALAMAT			: %s\n", B.Alamat);
printf("\n");
printf(" UNIVERSITAS		: %s\n", B.Ptn);
printf("\n");
printf(" TANGGAL LAHIR		: %s-%s-%s\n", B.L.Tanggal, B.L.Bulan, B.L.Tahun);
printf("\n");
printf("----------------------------------------------------------------------\n");
printf("\n");
printf(" TANGGAL PENGEMBALIAN BUKU : %s-%s-%s\n", B.L.peminjaman.waktu.tggl, B.L.peminjaman.waktu.blan, B.L.peminjaman.waktu.thun);
printf("\n");
printf("======================================================================\n");
}
  

int main() {
	char status,tmbl;
	int pilih;
	Peminjam B;
	
	home:
	system("cls");
		printf("===============================================================================\n");
		printf("\t\t\t    TUGAS ADT PEMROGRAMAN LANJUT\n");
		printf("===============================================================================\n\n");
		printf("\t\t\t   PROGRAM BY ADITYA RIZQI ARDHANA\n");
		printf("\n");
		printf("      \t\t\t\t NPM. 19081010178\n");
	
	  	printf("\n================================ PILIHAN MENU =================================");
	  	printf("\n");
	  	printf("\n 1. Input Data\n"); 
 		printf("\n 2. Keluar\n");
 		printf("\n");
 		printf(" Masukkan Pilihan :"); scanf("%d",&pilih);fflush(stdin);
 		
 	if(pilih==1){
	mulai:
	B=InputDataPeminjam(B);
	printf(" Save Data  [ Y ] / [ N ] ? "); scanf("%s",&status);
 		if(status=='Y'||status=='y'){
    		goto lanjut;}
			else if(status=='N'||status=='n'&& status!='N'||'n'){
    			goto mulai;}
	lanjut:
	TampilkanDataPeminjam(B);
	printf(" Ingin Kembali ?  [ Y ] / [ N ] ? "); scanf("%s",&tmbl);
 		if(tmbl=='Y'||tmbl=='y'){
    		goto home;}
			else if(tmbl=='N'||tmbl=='n'&& tmbl!='N'||'n'){
    			goto mulai;}
}

	if(pilih==2){
		printf("\n\n");
		printf(" Yakin Keluar ?  [ Y ] / [ N ] ? "); scanf("%s",&tmbl);
 		if(tmbl=='Y'||tmbl=='y'){
 			system("cls");
 			printf("\n\n\n");
    		printf("\t\t========== Program selesai ==========");printf("\n\n\n");}
			else if(tmbl=='N'||tmbl=='n'&& tmbl!='N'||'n'){
    			goto home;}
	}

return 0;
}
