#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct temelbilgiler{
	char adsoyad[50];
	int dogum_gun, dogum_ay, dogum_yil;
	long long int TC;
};
struct temelbilgiler temelbilgial() {
	                                             //TEMEL BÝLGÝLER
	struct temelbilgiler temelbilgi;
	printf("---------------------------------------------------------------\n");
	printf("Ad/Soyad: ");
	gets(temelbilgi.adsoyad);
	printf("T.C: ");
	scanf_s("%lld", &temelbilgi.TC);
	printf("Dogum Tarihi (G/A/Y): ");
	scanf_s("%d%d%d", &temelbilgi.dogum_gun, &temelbilgi.dogum_ay, &temelbilgi.dogum_yil);
	return temelbilgi;
};
char* randevual(int secim) {
	                                                           //BÖLÜMLERE GÖRE RANDEVU ALMA
	switch (secim)
	{
	case 1: {
		BSC:
		printf("Beyin ve Sinir Cerrahisi\n\n");
		printf("---------------------------------------------------------------\n");
		
		 
		 char* doktor_BSC[3] = {"Dr. Aylin Duman", "Dr. Mustafa Denizli", "Dr. Mert Yildirim"};

		printf("1. %s\n", doktor_BSC[0]);
		printf("2. %s\n", doktor_BSC[1]);
		printf("3. %s\n", doktor_BSC[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
			
		switch (secim) {
		case 1:
			return  doktor_BSC[0];
			break;
		case 2:
			return doktor_BSC[1];
			break;
		case 3:
			return doktor_BSC[2]; 
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			 goto BSC; 
		}
		
	}
	case 2: {
		CocukC:
		printf("Cocuk Cerrahi\n\n");
		printf("---------------------------------------------------------------\n");

		char* doktor_CocukC[3] = { "Dr. Osman Gulen", "Dr. Namik Kemal", "Dr. Fatih Ayagikaymaz" };

		printf("1. %s\n", doktor_CocukC[0]);
		printf("2. %s\n", doktor_CocukC[1]);
		printf("3. %s\n", doktor_CocukC[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);

		switch (secim) {
		case 1:
			return  doktor_CocukC[0];
			break;
		case 2:
			return doktor_CocukC[1];
			break;
		case 3:
			return doktor_CocukC[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto CocukC; 
		}

	}
	case 3: {
		CocukH:
		printf("Cocuk Hastaliklari ve Sagligi\n\n");
		printf("---------------------------------------------------------------\n");

		char* doktor_CocukH[3] = { "Dr. Selin Kaya", "Dr. Erkan Kocaman", "Dr. Ali Koc" };

		printf("1. %s\n", doktor_CocukH[0]);
		printf("2. %s\n", doktor_CocukH[1]);
		printf("3. %s\n", doktor_CocukH[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);

		switch (secim) {
		case 1:
			return  doktor_CocukH[0];
			break;
		case 2:
			return doktor_CocukH[1];
			break;
		case 3:
			return doktor_CocukH[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto CocukH;
		}


	}
	case 4: {
	Dahiliye:
		printf("Dahiliye\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Dahiliye[3] = { "Dr. Hasan Kaya", "Dr. Elif Yilmaz", "Dr. Zeynep Aydin" };
		printf("1. %s\n", doktor_Dahiliye[0]);
		printf("2. %s\n", doktor_Dahiliye[1]);
		printf("3. %s\n", doktor_Dahiliye[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Dahiliye[0];
			break;
		case 2:
			return doktor_Dahiliye[1];
			break;
		case 3:
			return doktor_Dahiliye[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto Dahiliye;
		}
	}
	case 5: {
	Dermatoloji:
		printf("Dermatoloji\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Dermatoloji[3] = { "Dr. Cemre Aksoy", "Dr. Ahmet Bulut", "Dr. Sevda Kar" };
		printf("1. %s\n", doktor_Dermatoloji[0]);
		printf("2. %s\n", doktor_Dermatoloji[1]);
		printf("3. %s\n", doktor_Dermatoloji[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Dermatoloji[0];
			break;
		case 2:
			return doktor_Dermatoloji[1];
			break;
		case 3:
			return doktor_Dermatoloji[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto Dermatoloji;
		}

	}
	case 6: {
	    FizikTedaviVeRehabilitasyon:
		printf("Fizik Tedavi ve Rehabilitasyon\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_FizikTedavi[3] = { "Dr. Ayla Toprak", "Dr. Emre Deniz", "Dr. Mehmet Seker" };
		printf("1. %s\n", doktor_FizikTedavi[0]);
		printf("2. %s\n", doktor_FizikTedavi[1]);
		printf("3. %s\n", doktor_FizikTedavi[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_FizikTedavi[0];
			break;
		case 2:
			return doktor_FizikTedavi[1];
			break;
		case 3:
			return doktor_FizikTedavi[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto FizikTedaviVeRehabilitasyon; 
		}
	}
	case 7: {
	Gastroenteroloji:
		printf("Gastroenteroloji\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Gastroenteroloji[3] = { "Dr. Kemal Demir", "Dr. Asli Karakas", "Dr. Bora Kaya" };
		printf("1. %s\n", doktor_Gastroenteroloji[0]);
		printf("2. %s\n", doktor_Gastroenteroloji[1]);
		printf("3. %s\n", doktor_Gastroenteroloji[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Gastroenteroloji[0];
			break;
		case 2:
			return doktor_Gastroenteroloji[1];
			break;
		case 3:
			return doktor_Gastroenteroloji[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto Gastroenteroloji; 
		}
	}
	case 8: {
	GenelCerrahi:
		printf("Genel Cerrahi\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_GenelCerrahi[3] = { "Dr. Halil Yildiz", "Dr. Zeynep Ozkan", "Dr. Ahmet Ekin" };
		printf("1. %s\n", doktor_GenelCerrahi[0]);
		printf("2. %s\n", doktor_GenelCerrahi[1]);
		printf("3. %s\n", doktor_GenelCerrahi[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_GenelCerrahi[0];
			break;
		case 2:
			return doktor_GenelCerrahi[1];
			break;
		case 3:
			return doktor_GenelCerrahi[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto GenelCerrahi;
		}
	}
	case 9: {
	GozHastaliklari:
		printf("Goz Hastaliklari\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_GozHastaliklari[3] = { "Dr. Leyla Sari", "Dr. Mustafa Gunes", "Dr. Cem Aksoy" };
		printf("1. %s\n", doktor_GozHastaliklari[0]);
		printf("2. %s\n", doktor_GozHastaliklari[1]);
		printf("3. %s\n", doktor_GozHastaliklari[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_GozHastaliklari[0];
			break;
		case 2:
			return doktor_GozHastaliklari[1];
			break;
		case 3:
			return doktor_GozHastaliklari[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto GozHastaliklari;
		}
	}
	case 10: {
	Kardiyoloji:
		printf("Kardiyoloji\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Kardiyoloji[3] = { "Dr. Ermek Kapashev", "Dr. Esra Akgul", "Dr. Melih Cakir" };
		printf("1. %s\n", doktor_Kardiyoloji[0]);
		printf("2. %s\n", doktor_Kardiyoloji[1]);
		printf("3. %s\n", doktor_Kardiyoloji[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Kardiyoloji[0];
			break;
		case 2:
			return doktor_Kardiyoloji[1];
			break;
		case 3:
			return doktor_Kardiyoloji[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto Kardiyoloji;
		}
	}
	case 11: {
	KalpVeDamarCerrahisi:
		printf("Kalp ve Damar Cerrahisi\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_KalpVeDamar[3] = { "Dr. Burak Demir", "Dr. Fatma Yildiz", "Dr. Kerem Can" };
		printf("1. %s\n", doktor_KalpVeDamar[0]);
		printf("2. %s\n", doktor_KalpVeDamar[1]);
		printf("3. %s\n", doktor_KalpVeDamar[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_KalpVeDamar[0];
			break;
		case 2:
			return doktor_KalpVeDamar[1];
			break;
		case 3:
			return doktor_KalpVeDamar[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto KalpVeDamarCerrahisi;
		}
	}
	case 12: {
	KadinHastaliklariVeDogum:
		printf("Kadin Hastaliklari ve Dogum\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_KadinHastaliklari[3] = { "Dr. Ayse Kaya", "Dr. Mehmet Eren", "Dr. Fatma Bal" };
		printf("1. %s\n", doktor_KadinHastaliklari[0]);
		printf("2. %s\n", doktor_KadinHastaliklari[1]);
		printf("3. %s\n", doktor_KadinHastaliklari[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_KadinHastaliklari[0];
			break;
		case 2:
			return doktor_KadinHastaliklari[1];
			break;
		case 3:
			return doktor_KadinHastaliklari[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto KadinHastaliklariVeDogum;
		}
	}
	case 13: {
	KulakBurunBogaz:
		printf("Kulak Burun Bogaz\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_KulakBurunBogaz[3] = { "Dr. Hasan Celik", "Dr. Elif Uzun", "Dr. Oguz Yildirim" };
		printf("1. %s\n", doktor_KulakBurunBogaz[0]);
		printf("2. %s\n", doktor_KulakBurunBogaz[1]);
		printf("3. %s\n", doktor_KulakBurunBogaz[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_KulakBurunBogaz[0];
			break;
		case 2:
			return doktor_KulakBurunBogaz[1];
			break;
		case 3:
			return doktor_KulakBurunBogaz[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto KulakBurunBogaz;
		}
	}
	case 14: {
	Noroloji:
		printf("Noroloji\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Noroloji[3] = { "Dr. Hulya Deniz", "Dr. Cem Arslan", "Dr. Gokce Ilhan" };
		printf("1. %s\n", doktor_Noroloji[0]);
		printf("2. %s\n", doktor_Noroloji[1]);
		printf("3. %s\n", doktor_Noroloji[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Noroloji[0];
			break;
		case 2:
			return doktor_Noroloji[1];
			break;
		case 3:
			return doktor_Noroloji[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto Noroloji;
		}
	}
	case 15: {
	Onkoloji:
		printf("Onkoloji\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Onkoloji[3] = { "Dr. Selin Yilmaz", "Dr. Ahmet Kurt", "Dr. Fikret Yildiz" };
		printf("1. %s\n", doktor_Onkoloji[0]);
		printf("2. %s\n", doktor_Onkoloji[1]);
		printf("3. %s\n", doktor_Onkoloji[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Onkoloji[0];
			break;
		case 2:
			return doktor_Onkoloji[1];
			break;
		case 3:
			return doktor_Onkoloji[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto Onkoloji;
		}
	}
	case 16: {
	OrtopediVeTravmatoloji:
		printf("Ortopedi ve Travmatoloji\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Ortopedi[3] = { "Dr. Emre Can", "Dr. Ilkay Serdar", "Dr. Sevgi Yilmaz" };
		printf("1. %s\n", doktor_Ortopedi[0]);
		printf("2. %s\n", doktor_Ortopedi[1]);
		printf("3. %s\n", doktor_Ortopedi[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Ortopedi[0];
			break;
		case 2:
			return doktor_Ortopedi[1];
			break;
		case 3:
			return doktor_Ortopedi[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto OrtopediVeTravmatoloji;
		}
	}
	case 17: {
	Patoloji:
		printf("Patoloji\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Patoloji[3] = { "Dr. Canan Uslu", "Dr. Selim Akbas", "Dr. Melike Ergin" };
		printf("1. %s\n", doktor_Patoloji[0]);
		printf("2. %s\n", doktor_Patoloji[1]);
		printf("3. %s\n", doktor_Patoloji[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Patoloji[0];
			break;
		case 2:
			return doktor_Patoloji[1];
			break;
		case 3:
			return doktor_Patoloji[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto Patoloji;
		}
	}
	case 18: {
	PlastikVeEstetikCerrahi:
		printf("Plastik ve Estetik Cerrahi\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_PlastikCerrahi[3] = { "Dr. Ahmet Polat", "Dr. Deniz Aydin", "Dr. Yasemin Er" };
		printf("1. %s\n", doktor_PlastikCerrahi[0]);
		printf("2. %s\n", doktor_PlastikCerrahi[1]);
		printf("3. %s\n", doktor_PlastikCerrahi[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_PlastikCerrahi[0];
			break;
		case 2:
			return doktor_PlastikCerrahi[1];
			break;
		case 3:
			return doktor_PlastikCerrahi[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto PlastikVeEstetikCerrahi;
		}
	}
	case 19: {
	Psikiyatri:
		printf("Psikiyatri\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Psikiyatri[3] = { "Dr. Bahar Uzun", "Dr. Oguzhan Kaya", "Dr. Ebru Altin" };
		printf("1. %s\n", doktor_Psikiyatri[0]);
		printf("2. %s\n", doktor_Psikiyatri[1]);
		printf("3. %s\n", doktor_Psikiyatri[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Psikiyatri[0];
			break;
		case 2:
			return doktor_Psikiyatri[1];
			break;
		case 3:
			return doktor_Psikiyatri[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto Psikiyatri;
		}
	}
	case 20: {
	Radyoloji:
		printf("Radyoloji\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Radyoloji[3] = { "Dr. Hulusi Demir", "Dr. Zeynep Sari", "Dr. Cemal Guler" };
		printf("1. %s\n", doktor_Radyoloji[0]);
		printf("2. %s\n", doktor_Radyoloji[1]);
		printf("3. %s\n", doktor_Radyoloji[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Radyoloji[0];
			break;
		case 2:
			return doktor_Radyoloji[1];
			break;
		case 3:
			return doktor_Radyoloji[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto Radyoloji;
		}
	}
	case 21: {
	Uroloji:
		printf("Uroloji\n\n");
		printf("---------------------------------------------------------------\n");
		char* doktor_Uroloji[3] = { "Dr. Mehmet Kaplan", "Dr. Ayse Gok", "Dr. Ali Kurt" };
		printf("1. %s\n", doktor_Uroloji[0]);
		printf("2. %s\n", doktor_Uroloji[1]);
		printf("3. %s\n", doktor_Uroloji[2]);
		printf("---------------------------------------------------------------\n");
		printf("Lutfen tedavi olmak istediginiz doktoru tuslayin: ");
		scanf_s("%d", &secim);
		switch (secim) {
		case 1:
			return doktor_Uroloji[0];
			break;
		case 2:
			return doktor_Uroloji[1];
			break;
		case 3:
			return doktor_Uroloji[2];
			break;
		default:
			printf("Hatali giris yaptiniz. Lutfen tekrar deneyin.\n\n");
			goto Uroloji;
		}
	}

	}
}
void sikcasorulansorular() {
	//SSS
	int secimg;
	while (1) {
		printf("---------------------------------------------------------------\n");
		printf("\n1.Randevu Islemleri\n");
		printf("2.Doktor ve Bolum Secimi\n");
		printf("3.Belgeler ve Gerekli Bilgiler\n");
		printf("4.Acil Durumlar\n");
		printf("5.Odeme ve Ucretlendirme\n");
		printf("6.Ana Menu \n\n");
		printf("---------------------------------------------------------------\n");

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
				printf("---------------------------------------------------------------\n");
				printf("1.Nasil randevu alabilirim?\n");
				printf("2.Nasil randevumu iptal edebilirim?\n");
				printf("3.Nasil randevumu goruntuleyebilirim?\n");
				printf("4.Ust menu\n");
				printf("---------------------------------------------------------------\n");

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
					printf("Hatali tuslama, lutfen tekrar deneyiniz.\n");
				}
				
			}
			break;
		}
		 //SSS-DOKTOR VE BOLUM SECIMI
		case 2: {
			printf("\nDOKTOR VE BOLUM SECIMI\n\n");

			for (;;) {

				printf("---------------------------------------------------------------\n");
				printf("\n1.Hangi bolumlerden randevu alabilirim?\n");
				printf("2.Doktor kadrosu\n");
				printf("3.Doktor secimi yapabilir miyim?\n");
				printf("4.Ust menu\n");
				printf("---------------------------------------------------------------\n");

				printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
				scanf_s("%d", &secimg);

				if (secimg == 1) {
					printf("---------------------------------------------------------------\n");
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
					printf("---------------------------------------------------------------\n");
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
					printf("Hatali tuslama, lutfen tekrar deneyiniz.\n");
				}

			}
			break;

		
		}
		 //SSS-BELGELERVE GEREKLÝ BÝLGÝLER
		case 3: {
			printf("\nBELGELER VE GEREKLI BILGILER\n\n");

			for (;;) {
				printf("---------------------------------------------------------------\n");
				printf("1.Randevu alirken gereken bilgiler nelerdir?\n");
				printf("2.Hastaneye gelirken hangi belgeleri getirmeliyim?\n");
				printf("3.Ust menu\n");
				printf("---------------------------------------------------------------\n");

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
					printf("Hatali tuslama, lutfen tekrar deneyiniz.\n");
				}
			}
			break;
		}
		 //ACÝL DURUMLAR
		case 4: {
			printf("\nACIL DURUMLAR\n\n");

			for (;;) {

				printf("---------------------------------------------------------------\n");
				printf("1.Nasýl randevu alabilirim?\n");
				printf("2.Nasýl randevumu iptal edebilirim?\n");
				printf("3.Nasýl randevumu goruntuleyebilirim?\n");
				printf("4.Ust menu\n");
				printf("---------------------------------------------------------------\n");

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
					printf("Hatali tuslama, lutfen tekrar deneyiniz.\n");
				}


			}
			break;
		}
         //ODEME VE UCRETLENDIRME
		case 5: {
			printf("\nODEME VE UCRETLENDIRME\n\n");
			for (;;) {
				printf("---------------------------------------------------------------\n");
				printf("1.Randevu ucreti ne kadar?\n");
				printf("2.Odemeyi nasil yapabilirim?\n");
				printf("3.Ust menu\n");
				printf("---------------------------------------------------------------\n");

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
					printf("\nHatali tuslama, lutfen tekrar deneyiniz.\n");
				}
			}
			break;
		}
		default:  printf("Hatali giris, lutfen tekrar deneyiniz");
	    
        }
	}
}
void main() {

	printf("				Pamukkale Universitesi Hastaneleri Randevu Sistemi						\n\n");

	int secimg;

	for (;;) { 
		//GÝRÝS EKRANI-ANA MENU
		printf("---------------------------------------------------------------\n");                 
		printf("1.Giris\n");
		printf("2.Sikca Sorulan Sorular\n");
		printf("3.Cikis\n");
		printf("---------------------------------------------------------------\n");
		printf("Lutfen yapmak istediginiz islemi tuslayin: ");
		scanf_s("%d", &secimg);

		getchar();

		printf("\n\n");

		switch (secimg) {
		case 1: {

			struct temelbilgiler temelbilgi = temelbilgial();

			char secilendoktor[50], secilenbolum[50];
			int secim;
			int randevugun, randevuay, randevuyil;
			int randevuno, random = 0;

		     //ANA MENU
			while (1) {                                                                                                
				printf("\n\nANA MENU\n\n");
				printf("---------------------------------------------------------------\n");
				printf("1.Randevu Al\n");
				printf("2.Randevu Iptal\n");
				printf("3.Randevu Goruntule\n");
				printf("4.Randevu Duzenle\n");
				printf("5.Sikca Sorulan Sorular\n");
				printf("6.Cikis\n");
				printf("---------------------------------------------------------------\n");
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
				randevual:                                                                       
					printf("\n\nRANDEVU AL\n\n");
					printf("---------------------------------------------------------------\n");
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
					printf("---------------------------------------------------------------\n");

					printf("Lutfen randevu almak istediginiz bolumu tuslayin: ");
					scanf_s("%d", &secim);
					if (secim < 1 || secim>21)
					{
						printf("\nHatali secim. Lutfen tekrar tuslayiniz.");
						goto randevual;

					}

					strcpy(secilenbolum, bolumler[secim]);

					printf("\n");

					strcpy(secilendoktor, randevual(secim));


					for (;;) {
						printf("Lutfen randevu gunu seciniz: ");
						scanf_s("%d", &randevugun);

						if (randevugun < 0 || randevugun > 31)
						{
							printf("Lutfen gecerli bir gun giriniz.");
							continue;
						}
						break;
					}
					for (;;)
					{
						printf("Lutfen randevu ayi seciniz: ");
						scanf_s("%d", &randevuay);
						if (randevuay < 0 || randevuay > 12)
						{
							printf("Lutfen gecerli bir ay giriniz.");
							continue;
						}
						break;
					}
					for (;;) {


						printf("Lutfen randevu yili seciniz: ");
						scanf_s("%d", &randevuyil);
						if (randevuyil < 2024)
						{
							printf("Lutfen gecerli bir yil giriniz.");
							continue;
						}
						break;
					}

				hastakayit:
					printf("\n");
					FILE* hastadosya;
					hastadosya = fopen("C:\\Users\\eksi2\\source\\repos\\Hastane Randevu Sistemi\\Kayýtlar\\Hasta Kaydý.txt", "w");

					fprintf(hastadosya, "Hasta Ad/Soyad: %s", temelbilgi.adsoyad);
					fprintf(hastadosya, "\nHasta dogum tarihi: %d/%d/%d", temelbilgi.dogum_gun, temelbilgi.dogum_ay, temelbilgi.dogum_yil);
					fprintf(hastadosya, "\nT.C: %lld", temelbilgi.TC);
					fprintf(hastadosya, "\nBolum: %s", secilenbolum);
					fprintf(hastadosya, "\nDoktor: %s", secilendoktor);
					fprintf(hastadosya, "\nRandevu tarihi: %d/%d/%d", randevugun, randevuay, randevuyil);

					fclose(hastadosya);

					srand(time(0));
					random = (rand() % 9999) + 1;

					printf("\nRandevunuz basariyla olusturuldu.\n");
					printf("Randevu numaraniz: %d\n", random);

					break;
				}
				 //RANDEVU IPTAL
				case 2: {
					printf("\nRANDEVU IPTAL\n\n");                                                              
					printf("---------------------------------------------------------------\n");

					for (;;) {
						printf("\nAna menuye donmek icin '9' tusuna basiniz\n");
						printf("Lutfen randevu numaranizi tuslayin: ");
						scanf_s("%d", &randevuno);
						if (randevuno == random)
						{
							for (;;) {
								printf("\n\nRandevunuz iptal edilecektir. Onayliyor musunuz?\n");
								printf("1.Onayliyorum.\n");
								printf("2.Onaylamiyorum.\n");
								printf("Lutfen gecerli bir tuslama yapiniz: ");
								scanf_s("%d", &secim);
								if (secim == 1) {

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
									printf("Hatali giris. Lutfen tekrar deneyiniz.");
								}
							}
							break;
						}
						else if (randevuno == 9) {
							break;
						}
						else {
							printf("Gecersiz randevu numarasi lutfen tekrar deneyiniz.\n");
						}
					}
					break;
				}
			     //RANDEVU GORUNTULE
				case 3: {
					printf("\nRANDEVU GORUNTULE\n\n");                                                        
					printf("---------------------------------------------------------------\n");


					for (;;) {

						printf("\nAna menuye donmek icin '9' tusuna basiniz\n");
						printf("Lutfen randevu numaranizi tuslayin: ");
						scanf_s("%d", &randevuno);

						if (randevuno == random)
						{
							printf("\n---------------------------------------------------------------\n");
							int karakter;
							FILE* hastadosya;
							hastadosya = fopen("C:\\Users\\eksi2\\source\\repos\\Hastane Randevu Sistemi\\Kayýtlar\\Hasta Kaydý.txt", "r");

							do {

								karakter = getc(hastadosya);
								printf("%c", karakter);

							} while (karakter != EOF);

							fclose(hastadosya);
							printf("\n---------------------------------------------------------------\n");
							break;
						}
						else if (randevuno == 9) {
							break;
						}
						else
						{
							printf("Gecersiz randevu numarasi lutfen tekrar deneyiniz.\n");
						}
					}
					break;
				}
				 //RANDEVU DUZENLE
				case 4: {
					printf("\nRANDEVU DUZENLE\n\n");                                                   
					printf("---------------------------------------------------------------\n");
					for (;;) {
						printf("\nAna menuye donmek icin '9' tusuna basiniz\n");
						printf("Lutfen randevu numaranizi tuslayin: ");
						scanf_s("%d", &randevuno);
						if (randevuno == random) {


							for (;;) {
								printf("\n1.Temel bilgileri duzenle\n");
								printf("2.Randevu bilgilerini duzenle\n");
								printf("3.Cikis\n");
								printf("---------------------------------------------------------------\n");
								printf("Lutfen bir secim yapiniz: ");
								scanf_s("%d", &secim);
								printf("\n");
								if (secim == 1) {
									struct temelbilgiler temelbilgi = temelbilgial();
									goto hastakayit;
									break;
								}
								else if (secim == 2) {
									goto randevual;
									break;
								}
								else if (secim == 3)
								{
									break;
								}
								else {
									printf("Hatali secim. Lutfen tekrar deneyiniz.");
								}
							}
							break;
						}
						else if (randevuno == 9) {
							break;
						}
						else {
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

				default:printf("Hatali giris, lutfen tekrar deneyiniz.");

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
		}
	}
}