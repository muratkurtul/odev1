#include <stdio.h>
#include <conio.h>
#include <Windows.h>


void main()
{
	int sayimiz,bin=0,yuz=0,on=0,bir=0;
	for(;;){
	printf("4 basamakli bir sayi giriniz\n");
	scanf("%d",&sayimiz);
	
	if(sayimiz<10000 && sayimiz>999)
	{bin=sayimiz/1000;
	printf("%dtane binlik sayi\n",bin);
	yuz=((sayimiz%1000)-(sayimiz%100))/100;
	printf("%dtane yuzluk sayi\n",yuz);
	on=((sayimiz%100)-(sayimiz%10))/10;
	printf("%dtane onluk  sayi\n",on);
	bir=sayimiz%10;
	printf("%dtane birlik sayi vardir",bir);
	getch();
	exit(0);
	}
	else {printf("\nLUTFEN 4 BASAMAKLI BIR DEGER GIRIN...!\n");}}
	
















}