#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
struct tarihbilgileri {
	int randevugun, randevuay, randevuyil;
};
struct tarihbilgileri randevutarihal() {
	struct tarihbilgileri tarihbilgi;
	printf("======================================================\n"); //TARÝH BÝLGÝLERÝ

	for (;;) {
		printf("Lutfen randevu gunu seciniz: ");
		scanf_s("%d", &tarihbilgi.randevugun);

		if (tarihbilgi.randevugun < 0 || tarihbilgi.randevugun > 31)
		{
			printf("Lutfen gecerli bir gun giriniz.");
			continue;
		}
		break;
	}
	for (;;)
	{
		printf("Lutfen randevu ayi seciniz: ");
		scanf_s("%d", &tarihbilgi.randevuay);
		if (tarihbilgi.randevuay < 0 || tarihbilgi.randevuay > 12)
		{
			printf("Lutfen gecerli bir ay giriniz.");
			continue;
		}
		break;
	}
	for (;;) {


		printf("Lutfen randevu yili seciniz: ");
		scanf_s("%d", &tarihbilgi.randevuyil);
		if (tarihbilgi.randevuyil < 2025)
		{
			printf("Lutfen gecerli bir yil giriniz.");
			continue;
		}
		break;
	}
	return tarihbilgi;
};
struct temelbilgiler {
	char adsoyad[50];
	int dogum_gun, dogum_ay, dogum_yil;
	long long int TC;
};
struct temelbilgiler temelbilgial() {                                           //TEMEL BÝLGÝLER
	struct temelbilgiler temelbilgi;
	printf("======================================================\n");
	printf("Ad/Soyad: ");
	gets(temelbilgi.adsoyad);
	for (;;) {
		printf("T.C: ");
		scanf_s("%lld", &temelbilgi.TC);

		if ((int)log10(temelbilgi.TC) + 1 != 11) {
			printf("T.C kimlik numarasi 11 haneli olmalidir. Lutfen tekrar giriniz\n");
		}
		else {
			break;
		}
	}
	printf("Dogum Tarihi (G/A/Y): ");
	scanf_s("%d%d%d", &temelbilgi.dogum_gun, &temelbilgi.dogum_ay, &temelbilgi.dogum_yil);
	return temelbilgi;
};
char* doktorseciki(char* doktorlar[], int boyut) {
	for (;;) {

		int doktor_secim;

		printf("1. %s\n", doktorlar[0]);
		printf("2. %s\n", doktorlar[1]);
		printf("3. %s\n", doktorlar[2]);
		printf("======================================================\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &doktor_secim);

		if (doktor_secim < 4 && doktor_secim>0) {

			return doktorlar[doktor_secim - 1];
			break;
		}
		else {

			printf("\a");
			printf("\nHatali secim! Lutfen tekrar deneyiniz\n\n");
		}
	}
}
char* doktorsec(int bolumno) {
	//DOKTOR SEC
	switch (bolumno)
	{
	case 1: {
	
		printf("Beyin ve Sinir Cerrahisi\n\n");

		printf("======================================================\n");
			char* doktor_BSC[3] = { "Dr. Aylin Duman", "Dr. Mustafa Denizli", "Dr. Mert Yildirim" };
		
			return doktorseciki(doktor_BSC, 3);
	}
	case 2: {
	
		printf("Cocuk Cerrahi\n\n");

		printf("======================================================\n");
		char* doktor_CocukC[3] = { "Dr. Osman Gulen", "Dr. Namik Kemal", "Dr. Fatih Ayagikaymaz" };
		
		return doktorseciki(doktor_CocukC, 3);
	}
	case 3: {
	
		printf("Cocuk Hastaliklari ve Sagligi\n\n");

		printf("======================================================\n");
		char* doktor_CocukH[3] = { "Dr. Selin Kaya", "Dr. Erkan Kocaman", "Dr. Ali Koc" };
		
		return doktorseciki(doktor_CocukH, 3);
	}
	case 4: {
	
		printf("Dahiliye\n\n");

		printf("======================================================\n");
		char* doktor_Dahiliye[3] = { "Dr. Hasan Kaya", "Dr. Elif Yilmaz", "Dr. Zeynep Aydin" };
		
		return doktorseciki(doktor_Dahiliye, 3);
	}
	case 5: {
	
		printf("Dermatoloji\n\n");

		printf("======================================================\n");
		char* doktor_Dermatoloji[3] = { "Dr. Cemre Aksoy", "Dr. Ahmet Bulut", "Dr. Sevda Kar" };
		
		return doktorseciki(doktor_Dermatoloji, 3);
	}
	case 6: {
	
		printf("Fizik Tedavi ve Rehabilitasyon\n\n");

		printf("======================================================\n");
		char* doktor_FizikTedavi[3] = { "Dr. Ayla Toprak", "Dr. Emre Deniz", "Dr. Mehmet Seker" };
		
		return doktorseciki(doktor_FizikTedavi, 3);
	}
	case 7: {
	
		printf("Gastroenteroloji\n\n");

		printf("======================================================\n");
		char* doktor_Gastroenteroloji[3] = { "Dr. Kemal Demir", "Dr. Asli Karakas", "Dr. Bora Kaya" };
		
		return doktorseciki(doktor_Gastroenteroloji ,3);
	}
	case 8: {
	
		printf("Genel Cerrahi\n\n");

		printf("======================================================\n");
		char* doktor_GenelCerrahi[3] = { "Dr. Halil Yildiz", "Dr. Zeynep Ozkan", "Dr. Ahmet Ekin" };
		
		return doktorseciki(doktor_GenelCerrahi, 3);
	}
	case 9: {
	
		printf("Goz Hastaliklari\n\n");

		printf("======================================================\n");
		char* doktor_GozHastaliklari[3] = { "Dr. Leyla Sari", "Dr. Mustafa Gunes", "Dr. Cem Aksoy" };
		
		return doktorseciki(doktor_GozHastaliklari, 3);
	}
	case 10: {
	
		printf("Kardiyoloji\n\n");

		printf("======================================================\n");
		char* doktor_Kardiyoloji[3] = { "Dr. Ermek Kapashev", "Dr. Esra Akgul", "Dr. Melih Cakir" };
		
		return doktorseciki(doktor_Kardiyoloji, 3);
	}
	case 11: {
	
		printf("Kalp ve Damar Cerrahisi\n\n");

		printf("======================================================\n");
		char* doktor_KalpVeDamar[3] = { "Dr. Burak Demir", "Dr. Fatma Yildiz", "Dr. Kerem Can" };
		
		return doktorseciki(doktor_KalpVeDamar, 3);
	}
	case 12: {

		printf("Kadin Hastaliklari ve Dogum\n\n");

		printf("======================================================\n");
		char* doktor_KadinHastaliklari[3] = { "Dr. Ayse Kaya", "Dr. Mehmet Eren", "Dr. Fatma Bal" };

		return doktorseciki(doktor_KadinHastaliklari, 3);
	}
	case 13: {
	
		printf("Kulak Burun Bogaz\n\n");

		printf("======================================================\n");
		char* doktor_KulakBurunBogaz[3] = { "Dr. Hasan Celik", "Dr. Elif Uzun", "Dr. Oguz Yildirim" };
		
		return doktorseciki(doktor_KulakBurunBogaz, 3);
	}
	case 14: {
	
		printf("Noroloji\n\n");

		printf("======================================================\n");
		char* doktor_Noroloji[3] = { "Dr. Hulya Deniz", "Dr. Cem Arslan", "Dr. Gokce Ilhan" };
		
		return doktorseciki(doktor_Noroloji, 3);
	}
	case 15: {
	
		printf("Onkoloji\n\n");

		printf("======================================================\n");
		char* doktor_Onkoloji[3] = { "Dr. Selin Yilmaz", "Dr. Ahmet Kurt", "Dr. Fikret Yildiz" };
		
		return doktorseciki(doktor_Onkoloji, 3);
	}
	case 16: {
	
		printf("Ortopedi ve Travmatoloji\n\n");

		printf("======================================================\n");
		char* doktor_Ortopedi[3] = { "Dr. Emre Can", "Dr. Ilkay Serdar", "Dr. Sevgi Yilmaz" };
		
		return doktorseciki(doktor_Ortopedi, 3);
	}
	case 17: {
	
		printf("Patoloji\n\n");

		printf("======================================================\n");
		char* doktor_Patoloji[3] = { "Dr. Canan Uslu", "Dr. Selim Akbas", "Dr. Melike Ergin" };
		
		return doktorseciki(doktor_Patoloji, 3);
	}
	case 18: {
	
		printf("Plastik ve Estetik Cerrahi\n\n");

		printf("======================================================\n");
		char* doktor_PlastikCerrahi[3] = { "Dr. Ahmet Polat", "Dr. Deniz Aydin", "Dr. Yasemin Er" };
		
		return doktorseciki(doktor_PlastikCerrahi, 3);
	}
	case 19: {

		printf("Psikiyatri\n\n")
			;
		printf("======================================================\n");
		char* doktor_Psikiyatri[3] = { "Dr. Bahar Uzun", "Dr. Oguzhan Kaya", "Dr. Ebru Altin" };
		
		return doktorseciki(doktor_Psikiyatri, 3);
	}
	case 20: {
	
		printf("Radyoloji\n\n");

		printf("======================================================\n");
		char* doktor_Radyoloji[3] = { "Dr. Hulusi Demir", "Dr. Zeynep Sari", "Dr. Cemal Guler" };
		
		return doktorseciki(doktor_Radyoloji, 3);
	}
	case 21: {
	
		printf("Uroloji\n\n");

		printf("======================================================\n");
		char* doktor_Uroloji[3] = { "Dr. Mehmet Kaplan", "Dr. Ayse Gok", "Dr. Ali Kurt" };
		
		return doktorseciki(doktor_Uroloji, 3);
	}

	}
}
char* bolumsec() {

	int secim;                       //BOLUM SEC

randevual:

	printf("\n\nRANDEVU AL\n\n");
	printf("==============================================\n");
	char* bolumler[21] = {
   "Beyin ve Sinir Cerrahisi",
   "Cocuk Cerrahisi",
   "Cocuk Hastaliklari ve Sagligi",
   "Dahiliye",
   "Dermatoloji",
   "Fizik Tedavi ve Rehabilitasyon",
   "Gastroenteroloji",
   "Genel Cerrahi",
   "Goz Hastaliklari",
   "Kardiyoloji",
   "Kalp ve Damar Cerrahisi",
   "Kadin Hastaliklari ve Dogum",
   "Kulak Burun Bogaz",
   "Noroloji",
   "Onkoloji",
   "Ortopedi ve Travmatoloji",
   "Patoloji",
   "Plastik ve Estetik Cerrahi",
   "Psikiyatri",
   "Radyoloji",
   "Uroloji" };

	for (int i = 0; i <= 20; i++)
	{
		printf("%d.%s\n", i + 1, bolumler[i]);
	}
	printf("\n\n");
	printf("========================================================\n");

	printf("Lutfen randevu almak istediginiz bolumu tuslayin: ");
	scanf_s("%d", &secim);
	if (secim < 1 || secim>21)
	{
		printf("\a");
		printf("\nHatali secim. Lutfen tekrar tuslayiniz.");
		goto randevual;

	}
	return bolumler[secim-1];
}
int bolumNoBul(char* bolum_adi) {
	if (strcmp(bolum_adi, "Beyin ve Sinir Cerrahisi") == 0) {
		return 1;
	}
	else if (strcmp(bolum_adi, "Cocuk Cerrahisi") == 0) {
		return 2;
	}
	else if (strcmp(bolum_adi, "Cocuk Hastaliklari ve Sagligi") == 0) {
		return 3;
	}
	else if (strcmp(bolum_adi, "Dahiliye") == 0) {
		return 4;
	}
	else if (strcmp(bolum_adi, "Dermatoloji") == 0) {
		return 5;
	}
	else if (strcmp(bolum_adi, "Fizik Tedavi ve Rehabilitasyon") == 0) {
		return 6;
	}
	else if (strcmp(bolum_adi, "Gastroenteroloji") == 0) {
		return 7;
	}
	else if (strcmp(bolum_adi, "Genel Cerrahi") == 0) {
		return 8;
	}
	else if (strcmp(bolum_adi, "Goz Hastaliklari") == 0) {
		return 9;
	}
	else if (strcmp(bolum_adi, "Kardiyoloji") == 0) {
		return 10;
	}
	else if (strcmp(bolum_adi, "Kalp ve Damar Cerrahisi") == 0) {
		return 11;
	}
	else if (strcmp(bolum_adi, "Kadin Hastaliklari ve Dogum") == 0) {
		return 12;
	}
	else if (strcmp(bolum_adi, "Kulak Burun Bogaz") == 0) {
		return 13;
	}
	else if (strcmp(bolum_adi, "Noroloji") == 0) {
		return 14;
	}
	else if (strcmp(bolum_adi, "Onkoloji") == 0) {
		return 15;
	}
	else if (strcmp(bolum_adi, "Ortopedi ve Travmatoloji") == 0) {
		return 16;
	}
	else if (strcmp(bolum_adi, "Patoloji") == 0) {
		return 17;
	}
	else if (strcmp(bolum_adi, "Plastik ve Estetik Cerrahi") == 0) {
		return 18;
	}
	else if (strcmp(bolum_adi, "Psikiyatri") == 0) {
		return 19;
	}
	else if (strcmp(bolum_adi, "Radyoloji") == 0) {
		return 20;
	}
	else if (strcmp(bolum_adi, "Uroloji") == 0) {
		return 21;
	}
}
void sikcasorulansorular() {
	//SSS
	int secimg;
	while (1) {
		printf("======================================================\n");
		printf("\n1.Randevu Islemleri\n");
		printf("2.Doktor ve Bolum Secimi\n");
		printf("3.Belgeler ve Gerekli Bilgiler\n");
		printf("4.Acil Durumlar\n");
		printf("5.Odeme ve Ucretlendirme\n");
		printf("6.Ana Menu \n\n");
		printf("======================================================\n");

		printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
		scanf_s("%d", &secimg);
		//ÇIKIÞ
		if (secimg == 6) {
			break;
		}

		switch (secimg)
		{
			//SSS-RANDEVU ISLEMLERÝ
		case 1: {
			printf("\nRANDEVU ISLEMLERI\n\n");
			for (;;) {
				printf("======================================================\n");
				printf("1.Nasil randevu alabilirim?\n");
				printf("2.Nasil randevumu iptal edebilirim?\n");
				printf("3.Nasil randevumu goruntuleyebilirim?\n");
				printf("4.Ust menu\n");
				printf("======================================================\n");

				printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
				scanf_s("%d", &secimg);


				if (secimg == 1) {
					printf("\nGiris yaptiktan sonra ilgili tuslamayi yapip randevu alabilirsiniz.\n");
				}
				else if (secimg == 2) {
					printf("\nGiris yaptiktan sonra ilgili tuslamayi yapip randevunuzu iptal edebilirsiniz.\n");
				}
				else if (secimg == 3) {
					printf("\nGiris yaptiktan sonra ilgili tuslamayi yapip randevunuzu goruntuluyebilirsiniz.\n");
				}
				else if (secimg == 4) {
					break;
				}
				else {
					printf("\a");
					printf("Hatali tuslama, lutfen tekrar deneyiniz.\n");
				}

			}
			break;
		}
			  //SSS-DOKTOR VE BOLUM SECIMI
		case 2: {
			printf("\nDOKTOR VE BOLUM SECIMI\n\n");

			for (;;) {

				printf("======================================================\n");
				printf("\n1.Hangi bolumlerden randevu alabilirim?\n");
				printf("2.Doktor kadrosu\n");
				printf("3.Doktor secimi yapabilir miyim?\n");
				printf("4.Ust menu\n");
				printf("======================================================\n");

				printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
				scanf_s("%d", &secimg);

				if (secimg == 1) {
					printf("======================================================\n");
					int karakter;
					FILE* bolumler;
					bolumler = fopen("C:\\Users\\eksi2\\source\\repos\\Hastane Randevu Sistemi\\Kayýtlar\\Bolumler.txt", "r");

					do {

						karakter = getc(bolumler);
						printf("%c", karakter);

					} while (karakter != EOF);

					fclose(bolumler);
				}
				else if (secimg == 2) {
					printf("======================================================\n");
					int karakter;
					FILE* doktorlar;
					doktorlar = fopen("C:\\Users\\eksi2\\source\\repos\\Hastane Randevu Sistemi\\Kayýtlar\\Doktorlar.txt", "r");

					do {

						karakter = getc(doktorlar);
						printf("%c", karakter);

					} while (karakter != EOF);

					fclose(doktorlar);
				}
				else if (secimg == 3) {

					printf("\nBolum seciminin ardindan dilediginiz doktordan randevu alabilirsiniz\n");

				}
				else if (secimg == 4) {
					break;
				}
				else {
					printf("\a");
					printf("Hatali tuslama, lutfen tekrar deneyiniz.\n");
				}

			}
			break;


		}
			  //SSS-BELGELERVE GEREKLÝ BÝLGÝLER
		case 3: {
			printf("\nBELGELER VE GEREKLI BILGILER\n\n");

			for (;;) {
				printf("======================================================\n");
				printf("1.Randevu alirken gereken bilgiler nelerdir?\n");
				printf("2.Hastaneye gelirken hangi belgeleri getirmeliyim?\n");
				printf("3.Ust menu\n");
				printf("======================================================\n");

				printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
				scanf_s("%d", &secimg);


				if (secimg == 1) {
					printf("\nRandevu alirken ad/soyad, T.C kimlik numarasi ve dogum tarihi bilgileri yeterlidir.\n");
				}
				else if (secimg == 2) {
					printf("\nHastaneye gelirken T.C kimlik kartinizi getirmeniz yeterlidir.\n");
				}
				else if (secimg == 3) {
					break;
				}
				else {
					printf("\a");
					printf("Hatali tuslama, lutfen tekrar deneyiniz.\n");
				}
			}
			break;
		}
			  //ACÝL DURUMLAR
		case 4: {
			printf("\nACIL DURUMLAR\n\n");

			for (;;) {

				printf("======================================================\n");
				printf("1.Nasil randevu alabilirim?\n");
				printf("2.Nasil randevumu iptal edebilirim?\n");
				printf("3.Nasil randevumu goruntuleyebilirim?\n");
				printf("4.Ust menu\n");
				printf("======================================================\n");

				printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
				scanf_s("%d", &secimg);


				if (secimg == 1) {
					printf("\nGiris yaptiktan sonra ilgili tuslamayi yapip randevu alabilirsiniz.\n");
				}
				else if (secimg == 2) {
					printf("\nGiris yaptiktan sonra ilgili tuslamayi yapip randevunuzu iptal edebilirsiniz.\n");
				}
				else if (secimg == 3) {
					printf("\nGiris yaptiktan sonra ilgili tuslamayi yapip randevunuzu goruntuluyebilirsiniz.\n");
				}
				else if (secimg == 4) {
					break;
				}
				else {
					printf("\a");
					printf("Hatali tuslama, lutfen tekrar deneyiniz.\n");
				}


			}
			break;
		}
			  //ODEME VE UCRETLENDIRME
		case 5: {
			printf("\nODEME VE UCRETLENDIRME\n\n");
			for (;;) {
				printf("======================================================\n");
				printf("1.Randevu ucreti ne kadar?\n");
				printf("2.Odemeyi nasil yapabilirim?\n");
				printf("3.Ust menu\n");
				printf("======================================================\n");

				printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
				scanf_s("%d", &secimg);

				if (secimg == 1) {
					printf("\nRandevu ucreti 250TL'dir.\n");
				}
				else if (secimg == 2) {
					printf("\nHastanede icerisinde bulunan vezne bolumunde  ucreti odeyebilirsiniz.\n");
				}
				else if (secimg == 3) {
					break;
				}
				else {
					printf("\a");
					printf("\nHatali tuslama, lutfen tekrar deneyiniz.\n");
				}
			}
			break;
		}

		default: {
			printf("\a");
			printf("Hatali giris, lutfen tekrar deneyiniz");
		}

		}
	}
}
int randevunoata(int random) {
	int karakter;
	FILE* randevunumarasi;
	randevunumarasi = fopen("C:\\Users\\eksi2\\source\\repos\\Hastane Randevu Sistemi\\Kayýtlar\\Randevu Numarasi.txt", "r");
	if (fscanf(randevunumarasi, "%d", &karakter) == 1) {

		//okunan sayýyý degiskene atama
		random = karakter;
	}
	else
	{
		random = -1;
	}

	fclose(randevunumarasi);
	return random;
}
void hastakayit(char adsoyad[50], int dogum_gun, int dogum_ay, int dogum_yil, long long int TC, char secilenbolum[50], char secilendoktor[50], int randevugun, int randevuay, int randevuyil) {

	FILE* hastadosya;
	hastadosya = fopen("C:\\Users\\eksi2\\source\\repos\\Hastane Randevu Sistemi\\Kayýtlar\\Hasta Kaydý.txt", "w");

	fprintf(hastadosya, "Hasta Ad/Soyad: %s", adsoyad);
	fprintf(hastadosya, "\nHasta dogum tarihi: %d/%d/%d", dogum_gun, dogum_ay, dogum_yil);
	fprintf(hastadosya, "\nT.C: %lld", TC);
	fprintf(hastadosya, "\nBolum: %s", secilenbolum);
	fprintf(hastadosya, "\nDoktor: %s", secilendoktor);
	fprintf(hastadosya, "\nRandevu tarihi: %d/%d/%d", randevugun, randevuay, randevuyil);

	fclose(hastadosya);
}
void main() {

	printf("				Pamukkale Universitesi Hastaneleri Randevu Sistemi						\n\n");

	//Guncel Tarih-Saat 
	time_t  simdiki_zaman;
	simdiki_zaman = time(NULL);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t");
	printf(ctime(&simdiki_zaman));

	int secimg;

	for (;;) {
		//GÝRÝS EKRANI-ANA MENU
		printf("\n\n=============================\n");
		printf("1.Giris\n");
		printf("2.Sikca Sorulan Sorular\n");
		printf("3.Cikis\n");
		printf("=============================\n");
		printf("Lutfen yapmak istediginiz islemi tuslayin: ");
		scanf_s("%d", &secimg);

		getchar();

		printf("\n\n");

		switch (secimg) {
			//GÝRÝÞ
		case 1: {

			struct temelbilgiler temelbilgi = temelbilgial();

			char secilendoktor[50], secilenbolum[50];
			int secim, bolumno;
			int randevugun, randevuay, randevuyil;
			int randevuno, random = 0;

			//ANA MENU
			while (1) {

				printf("\n\nANA MENU\n\n");
				printf("==============================================\n");
				printf("1.Randevu Al\n");
				printf("2.Randevu Iptal\n");
				printf("3.Randevu Goruntule\n");
				printf("4.Randevu Duzenle\n");
				printf("5.Sikca Sorulan Sorular\n");
				printf("6.Cikis\n");
				printf("==============================================\n");
				printf("Lutfen yapmak istediginiz islemi tuslayin: ");
				scanf_s("%d", &secim);

				//ÇIKIÞ
				if (secim == 6) {
					exit(1);
				}

				printf("\n");

				switch (secim)
				{
					  //RANDEVU AL
				case 1:
				{

					strcpy(secilenbolum, bolumsec());
					
					printf("\n");
					
					strcpy(secilendoktor, doktorsec(bolumNoBul(secilenbolum)));

					struct tarihbilgileri tarihbilgi = randevutarihal();
					randevugun = tarihbilgi.randevugun;
					randevuay = tarihbilgi.randevuay;
					randevuyil = tarihbilgi.randevuyil;

					printf("\n");

					hastakayit(temelbilgi.adsoyad, temelbilgi.dogum_gun, temelbilgi.dogum_ay, temelbilgi.dogum_yil, temelbilgi.TC, secilenbolum, secilendoktor, randevugun, randevuay, randevuyil);

					srand(time(0));
					random = (rand() % 9999) + 1;

					FILE* randevunumarasi;
					randevunumarasi = fopen("C:\\Users\\eksi2\\source\\repos\\Hastane Randevu Sistemi\\Kayýtlar\\Randevu Numarasi.txt", "w");

					fprintf(randevunumarasi, "%d", random);

					fclose(randevunumarasi);

					printf("\nRandevunuz basariyla olusturuldu.\n");
					printf("Randevu numaraniz: %d\n", random);

					break;
				}
				      //RANDEVU IPTAL
				case 2: {
					printf("\nRANDEVU IPTAL\n\n");
					printf("======================================================\n");

					random = randevunoata(random);

					for (;;) {
						printf("\nAna menuye donmek icin '9' tusuna basiniz\n");
						printf("Lutfen randevu numaranizi tuslayin: ");
						scanf_s("%d", &randevuno);
						if (randevuno == random)
						{
							for (;;) {
								printf("======================================================\n");
								printf("\n\nRandevunuz iptal edilecektir. Onayliyor musunuz?\n");
								printf("1.Onayliyorum.\n");
								printf("2.Onaylamiyorum.\n");
								printf("======================================================\n");
								printf("Lutfen gecerli bir tuslama yapiniz: ");
								scanf_s("%d", &secim);
								if (secim == 1) {

									FILE* randevunumarasi;
									randevunumarasi = fopen("C:\\Users\\eksi2\\source\\repos\\Hastane Randevu Sistemi\\Kayýtlar\\Randevu Numarasi.txt", "w");
									
									fprintf(randevunumarasi, " ");

									fclose(randevunumarasi);

									FILE* hastadosya;
									hastadosya = fopen("C:\\Users\\eksi2\\source\\repos\\Hastane Randevu Sistemi\\Kayýtlar\\Hasta Kaydý.txt", "w");

									fprintf(hastadosya, " ");

									fclose(hastadosya);

									printf("\nRandevunuz basariyla iptal edildi.\n");
									break;
								}
								else if (secim == 2) {
									break;
								}
								else {
									printf("\a");
									printf("Hatali giris. Lutfen tekrar deneyiniz.");
								}
							}
							break;
						}
						else if (randevuno == 9) {
							break;
						}
						else {
							printf("\a");
							printf("Gecersiz randevu numarasi lutfen tekrar deneyiniz.\n");
						}
					}
					break;
				}
					  //RANDEVU GORUNTULE
				case 3: {
					printf("\nRANDEVU GORUNTULE\n\n");
					printf("======================================================\n");

					random = randevunoata(random);

					for (;;) {

						printf("\nAna menuye donmek icin '9' tusuna basiniz\n");
						printf("Lutfen randevu numaranizi tuslayin: ");
						scanf_s("%d", &randevuno);

						if (randevuno == random)
						{
							printf("======================================================\n");
							int karakter;
							FILE* hastadosya;
							hastadosya = fopen("C:\\Users\\eksi2\\source\\repos\\Hastane Randevu Sistemi\\Kayýtlar\\Hasta Kaydý.txt", "r");

							do {

								karakter = getc(hastadosya);
								printf("%c", karakter);

							} while (karakter != EOF);

							fclose(hastadosya);
							printf("\n======================================================\n");
							break;
						}
						else if (randevuno == 9) {
							break;
						}
						else
						{
							printf("\a");
							printf("Gecersiz randevu numarasi lutfen tekrar deneyiniz.\n");
						}
					}
					break;
				}
					  //RANDEVU DUZENLE
				case 4: {
					printf("\nRANDEVU DUZENLE\n\n");
					printf("======================================================\n");

					random = randevunoata(random);

					for (;;) {
						printf("\nAna menuye donmek icin '9' tusuna basiniz\n");
						printf("Lutfen randevu numaranizi tuslayin: ");
						scanf_s("%d", &randevuno);
						if (randevuno == random) {


							for (;;) {
								printf("\n1.Temel bilgileri duzenle\n");
								printf("2.Tarih bilgilerini duzenle\n");
								printf("3.Randevu bilgilerini duzenle\n");
								printf("4.Cikis\n");
								printf("======================================================\n");
								printf("Lutfen bir secim yapiniz: ");
								scanf_s("%d", &secim);
								printf("\n");
								if (secim == 1) {
									getchar();
									struct temelbilgiler temelbilgi = temelbilgial();
									hastakayit(temelbilgi.adsoyad, temelbilgi.dogum_gun, temelbilgi.dogum_ay, temelbilgi.dogum_yil, temelbilgi.TC, secilenbolum, secilendoktor, randevugun, randevuay, randevuyil);
									break;
								}
								else if (secim == 2) {
									struct tarihbilgileri tarihbilgi = randevutarihal();
									randevugun = tarihbilgi.randevugun;
									randevuay = tarihbilgi.randevuay;
									randevuyil = tarihbilgi.randevuyil;
									hastakayit(temelbilgi.adsoyad, temelbilgi.dogum_gun, temelbilgi.dogum_ay, temelbilgi.dogum_yil, temelbilgi.TC, secilenbolum, secilendoktor, randevugun, randevuay, randevuyil);
									break;
								}
								else if (secim == 3) {
									strcpy(secilenbolum, bolumsec());
									strcpy(secilendoktor, doktorsec(bolumNoBul(secilenbolum)));
									hastakayit(temelbilgi.adsoyad, temelbilgi.dogum_gun, temelbilgi.dogum_ay, temelbilgi.dogum_yil, temelbilgi.TC, secilenbolum, secilendoktor, randevugun, randevuay, randevuyil);
									break;
								}
								else if (secim == 4)
								{
									break;
								}
								else {
									printf("\a");
									printf("Hatali secim. Lutfen tekrar deneyiniz.");
								}
							}
							break;
						}
						else if (randevuno == 9) {
							break;
						}
						else {
							printf("\a");
							printf("Gecersiz randevu numarasi lutfen tekrar deneyiniz.\n");
						}
					}
					break;
				}
					  //SIKÇA SORULAN SORULAR
				case 5: {
					sikcasorulansorular();
					break;
				}

				default: {
					printf("\a");
					printf("Hatali giris, lutfen tekrar deneyiniz.");
				}

				}
			}
		}
			  //SIKÇA SORULAN SORULAR
		case 2: {
			sikcasorulansorular();
			break;
		}
			  //ÇIKIÞ
		case 3: {
			exit(1);
		}

		default: {
			printf("\a");
			printf("Hatali giris! Lutfen tekrar deneyiniz.\n\n");
		}
		}
	}
}