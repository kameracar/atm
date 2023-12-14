#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int bakiye=10000;
	int cekilen;
	int yatirilan;
	int odenen;
	float para;
	int faiz;
	int islem;
	int devam;
anamenu:
	system("cls");
	printf("BANKA UYGULAMASINA HOS GELDÝNÝZ\n\n\n");
	printf("Yapilacak islemi seciniz\n");
	printf("1-Para yatirma\n");
	printf("2-Para cekme\n");
	printf("3-Bakiye goruntuleme\n");
	printf("4-Fatura odeme\n");
	printf("5-Faiz hesaplama\n");
	printf("6-Cikis\n");
	scanf("%d",&islem);
	switch(islem){
		case 1:
			system("cls");
			printf("PARA YATIRMA\n\n\n");
			printf("Yatirilan para miktarini giriniz\n");
			scanf("%d",&yatirilan);
			bakiye+=yatirilan;
			printf("%d yatirildi \t guncel bakiye:%d\n",yatirilan,bakiye);
			printf("Ana menuye donmek icin 1 cikis yapmak icin 0 tuslayiniz\n");
			scanf("%d",&devam);
			if(devam==1){
				goto anamenu;
			}else if(devam==0){
				exit (0);
			}else{
				printf("Gecersiz secim yaptiniz\n");
			}
		case 2:
			system("cls");
			printf("PARA CEKME\n\n\n");
			printf("Cekilen para miktarini giriniz\n");
			scanf("%d",&cekilen);
			bakiye=bakiye-cekilen;
			printf("%d cekildi \t guncel bakiye:%d\n",cekilen,bakiye);
			printf("Ana menuye donmek icin 1 cikis yapmak icin 0 tuslayiniz\n");
			scanf("%d",&devam);
			if(devam==1){
				goto anamenu;
			}else if(devam==0){
				exit (0);
			}else{
				printf("Gecersiz secim yaptiniz\n");
			}
		case 3:
			system("cls");
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Ana menuye donmek icin 1 cikis yapmak icin 0 tuslayiniz\n");
			scanf("%d",&devam);
			if(devam==1){
				goto anamenu;
			}else if(devam==0){
				exit (0);
			}else{
				printf("Gecersiz secim yaptiniz\n");
			}
		case 4:
			system("cls");
			printf("FATURA ODEME\n\n\n");
			printf("Odeyeceginiz fatura bedelini giriniz\n");
			scanf("%d",&odenen);
			bakiye-=odenen;
			printf("Odenen fatura bedeli: %d liradir\nOdemeniz icin tesekkur eder iyi gunler dileriz...\n",odenen);
			printf("Ana menuye donmek icin 1 cikis yapmak icin 0 tuslayiniz\n");
			scanf("%d",&devam);
			if(devam==1){
				goto anamenu;
			}else if(devam==0){
				exit (0);
			}else{
				printf("Gecersiz secim yaptiniz\n");
		}
		case 5:
			system("cls");
			printf("FAIZ HESAPLAMA\n\n\n");
			printf("Para miktarini giriniz\n");
			scanf("%f",&para);
			printf("Faizi giriniz\n");
			scanf("%d",&faiz);
			printf("Paranizin faizli degeri: %.3f",para+(para*faiz)/100);
			printf("Ana menuye donmek icin 1 cikis yapmak icin 0 tuslayiniz\n");
			scanf("%d",&devam);
			if(devam==1){
				goto anamenu;
			}else if(devam==0){
				exit (0);
			}else{
				printf("Gecersiz secim yaptiniz\n");
		}
			
		case 6:
			exit(0);
		default:
			system("cls");
			printf("Hatali giris yapildi herhangi bir tusa tiklayarak ana menuye doneceksiniz...\n");
			getch();
			goto anamenu;
			
	}
}
