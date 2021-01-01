#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>

// Variable global 
int pilih, i, bayar, total;
char yt, room[50];
char co[4][50];

// Struct Global pelanggan
struct pelanggan {
	char resepsionis[50];
	char customer[50];
	char alamat[50];
	char hp[12];
	int lama;
	int in[8];
	int out[8];
	int kamar;
	int bed;
	int harga;
	int bayar;
	int kembalian;
} pl;

// Menu
menu() {
		
	system("cls");
		
	printf("\t\t   SELAMAT DATANG DI HOTEL DEL LUNA \n");
	printf("\t\tJl. RY Dalem, Keliki, Kec. Tegallalang\n");
	printf("\t\t\tBali 80561, Indonesia\n");
	printf("========================================================================\n\n");
	printf("\nHallo ! Perkenalkan saya Yassir, Apakah ada yang bisa saya bantu ?\n");
	printf("1. Reservasi kamar\n");
	printf("2. Check Reservasi\n");
	printf("3. Hanya lewat (Exit)\n");
	
}

// Exit
exit() {
	
	printf("\n\t=== Terimakasih Telah datang ke Hotel ===\n");
	exit(0);
}

// Reservasi Kamar
reservasi() {
		
		
//		Utama
		utama :
		
			system("cls");
			
			printf("\t\t\t   HOTEL DEL LUNA \n");
			printf("\t\tJl. RY Dalem, Keliki, Kec. Tegallalang\n");
			printf("\t\t\tBali 80561, Indonesia\n");
			printf("========================================================================\n\n");
			
			printf("Nama Resepsionis	: "); scanf("%s", &pl.resepsionis);
			printf("Nama Customer		: "); scanf("%s", &pl.customer);
			printf("Alamat			: "); scanf("%s", &pl.alamat);
			printf("No Telephone/HP		: "); scanf("%s", &pl.hp);
			printf("Lama Menginap		: "); scanf("%i", &pl.lama);
			printf("Tanggal Check In	: "); scanf("%s", &pl.in);
			printf("Tanggal Check Out	: "); scanf("%s", &pl.out);
		
//		Menu
		menu :
		
			system("cls");
			
			printf("\t\t\t   HOTEL DEL LUNA \n");
			printf("\t\tJl. RY Dalem, Keliki, Kec. Tegallalang\n");
			printf("\t\t\tBali 80561, Indonesia\n");
			printf("========================================================================\n\n");
			
			printf("Pilih Tipe Kamar	:\n");
			printf("1. President Suite\n");
			printf("2. Deluxe Room\n");
			printf("3. Premium Room\n");
			printf("4. Standard Room\n");
			printf("Masukan Pilihan		: "); scanf("%i", &pl.kamar);
			
			if(pl.kamar == 1) {
				pl.harga = 100000000;
				strcpy(room, "Presiden Suite");
				
				goto akhir;
			}
			
			printf("\n\nPilih Tipe Bed		: \n");
			printf("1. Single Bed\n");
			printf("2. Double Bed\n");
			printf("3. Twin Bed\n");
			printf("Masukan Pilihan		: "); scanf("%i", &pl.bed);
			
			if(pl.kamar == 2 && pl.bed == 1) {
				pl.harga = 40000000;
				strcpy(room, "Deluxe SingleBed");
		
			}
			else if(pl.kamar == 2 && pl.bed == 2) {
				pl.harga = 50000000;
				strcpy(room, "Deluxe DoubleBed");
			}
			else if(pl.kamar == 2 && pl.bed == 3) {
				pl.harga = 65000000;
				strcpy(room, "Deluxe TwinBed");
			}
			else if(pl.kamar == 3 && pl.bed == 1) {
				pl.harga = 20000000;
				strcpy(room, "Premium SingleBed");
			}
			else if(pl.kamar == 3 && pl.bed == 2) {
				pl.harga = 25000000;
				strcpy(room, "Premium DoubleBed");
			}
			else if(pl.kamar == 3 && pl.bed == 3) {
				pl.harga = 35000000;
				strcpy(room, "Premium TwinBed");
			}
			else if(pl.kamar == 4 && pl.bed == 1) {
				pl.harga = 1500000;
				strcpy(room, "Standard SingleBed");
			}
			else if(pl.kamar == 4 && pl.bed == 2) {
				pl.harga = 5000000;
				strcpy(room, "Standard DoubleBed");
			}
			else if(pl.kamar == 4 && pl.bed == 3) {
				pl.harga = 10000000;
				strcpy(room, "Standard TwinBed");
			}
			else {
				printf("Inputan Salah !!!. klik sekali lagi untuk ke menu");
				getche();
				goto menu;
			}
		
//		akhir
		akhir :
		
			system("cls");
			
			total = pl.harga * pl.lama;
			
			printf("\t\t\t   HOTEL DEL LUNA \n");
			printf("\t\tJl. RY Dalem, Keliki, Kec. Tegallalang\n");
			printf("\t\t\tBali 80561, Indonesia\n");
			printf("========================================================================\n\n");
			
			printf("Nama Resepsionis	: %s\n", pl.resepsionis);
			printf("Nama Customer		: %s\n", pl.customer);
			printf("Alamat			: %s\n", pl.alamat);
			printf("No Telephone/HP		: %s\n", pl.hp);
			printf("Lama Menginap		: %i\n", pl.lama);
			printf("Tanggal Check In	: %s\n", pl.in);
			printf("Tanggal Check Out	: %s\n", pl.out);
			
			printf("\nKamar			: %s\n", room);
			printf("Total Tagihan		: %i\n", total);
			printf("Total Bayar		: "); scanf("%i", &bayar);
			printf("---------------------------------------\n");
			printf("Kembalian 		: %i\n", bayar - total);
			
			if(bayar < total) {
				printf("\nMohon Lunasi Tagihannya !!\n\n");
				getche();
				goto akhir;
			}
			
			printf("\nTerimakasih, Sudah memesan kamar di Hotel Kami.\n");
		
//		Tanya
		tanya :
			
			printf("\nAda yang bisa saya bantu kembali ? [y/n]"); scanf("%s",&yt);
	
			if(yt == 'y') {
				menu();
			}
			else {
				exit();
			}
			
//		Store Data
		store :
			
			memcpy(co[0], pl.customer, sizeof(co));
			memcpy(co[1], pl.alamat, sizeof(co));
			memcpy(co[2], pl.in, sizeof(co));
			memcpy(co[3], pl.out, sizeof(co));

}



// List Costumer
checklist() {
	
	system("cls");
	
	printf("\t\t\t   HOTEL DEL LUNA \n");
	printf("\t\tJl. RY Dalem, Keliki, Kec. Tegallalang\n");
	printf("\t\t\tBali 80561, Indonesia\n");
	printf("============================================================\n");
	printf(" Nama Cus\t Alamat\t \tCheck In\t Check Out\n");
	printf("============================================================\n\n");
	
	for(i=0; i<=3; i++) {
		printf(" %s\t\t", co[i]);
	}
	
	printf("\n\nAda yang bisa saya bantu kembali ? [y/n]"); scanf("%s",&yt);
	
	if(yt == 'y') {
		menu();
	}
	else {
		exit();
	}
	
}

// Main
main() {
		
	system("color 2");
	menu();
	
	do {

		printf(" \nMasukan Keperluan anda : "); scanf("%i", &pilih);
		
		switch(pilih) {
			
			case 1 :
				reservasi();
				break;
			case 2 :
				checklist();
				break;
			case 3 :
				exit();
		}
	}
	while(pilih != 3);
	
	getche();
	
	
}
