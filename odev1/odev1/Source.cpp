#include <stdio.h>
#include <conio.h>
#include <Windows.h>

void main ()
{

	char isim1[]="murat";        //kullanıcı ismi ve şifre
	int sifre1=12345;
	char isim[20];
	int sifre, flag=0;
	long int bakiye=100;
	printf("kullanici adinizi giriniz: ");
	scanf("%s", &isim);                         //kullanıcı ismi ve şifre isteme yeri
	printf("sifrenizi giriniz: ");
	scanf("%d", &sifre);
	printf("%s %d" , isim, sifre);


	for (int i = 0; i < 5; i++)
	{
		if (isim1[i]!=isim[i] || sifre!=sifre1)   // burada kullanıcı ismini karşilaştırma işlemi yapar
			flag=1;
	}
	if (flag==0) printf("\nDogru giris yaptiniz ..."); 
	else 
	{
		printf("\nHatali kullanici adi veya sifre!");
		getch();
		exit(0);
	}
	printf("devam etmek icin bir tusa basiniz...");
	getch();

	for (;;)     //menünün tekrar açılabilmesi  için sonsuz döngüye girer
	{


		system("CLS"); //ekranı temizleme fonksiyonu

		printf("\n\n\n\t\t1-Bakiye Ogrenme\n\t\t2-Para Yatirma\n\t\t3-Para Cekme\n\t\t4-Para Transferi\n\t\t5-Cikis\n");  //MENU

		int secim=0;
		printf("\n\tIslem yapmak istediginiz alani seciniz: ");
		scanf("%d", &secim);

		if (secim ==1 )    //menuden secim işlemi yapma bölümü
		{
			system("CLS");                        //bakiye sorma
			printf("\n\n\tBakiyeniz: %d TL", bakiye);  
			printf("\n\n\t Devam etmek icin bir tusa basiniz...");
			getch();

		}

		else if (secim==2)
		{
			int miktar=0;
			system("CLS");
			printf("\n\t\tYatirmak istediginiz miktari giriniz: ");  //Hesaba para yatırma
			scanf("%d",&miktar);
			bakiye+=miktar;
			printf("\n\n\tYeni bakiyeniz: %d TL", bakiye);
			printf("\n\n\t Devam etmek icin bir tusa basiniz...");
			getch();
		}

		else if (secim==3)
		{
			int miktar=0;
			system("CLS");
			printf("\n\t\tCekmek istediginiz miktari giriniz: "); //Hesaptan para çekme
			scanf("%d",&miktar);

			if (bakiye<miktar)
				printf("\n\n\tYetersiz Bakiye !");
			else
			{
				bakiye-=miktar;
				printf("\n\n\tYeni bakiyeniz: %d TL", bakiye);
			}
			printf("\n\n\t Devam etmek icin bir tusa basiniz...");
			getch();

		}

		else if (secim==4)
		{
			int hesapno, miktar;
			system("CLS");
			printf("Lutfen para gondermek istediginiz hesap numarasini giriniz: ");//Havale İşlemi
			scanf("%d", &hesapno);
			printf("miktar giriniz: ");
			scanf("%d", &miktar);

			if (bakiye<miktar)
				printf("\n\n\tYetersiz Bakiye !");
			else
			{
				bakiye-=miktar;
				printf("Transfer Gerceklestirildi..");
				printf("\n\n\tYeni bakiyeniz: %d TL", bakiye);

			}
			printf("\n\n\t Devam etmek icin bir tusa basiniz...\n");
			getch();
		}


		else if (secim==5)
		{

			printf("\t\t\tYine Bekleriz .. :)");getch(); //Çıkış
			exit(0);//Çıkış fonksiyonu 
		}
		else if (secim>5)
		{
			printf("\t\t\tYanlis bir secim yaptiniz...");
			getch();
		}

		


	}





}