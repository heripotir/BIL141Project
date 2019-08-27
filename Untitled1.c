//SERAL BUSE ATAK 30.11.17 171201048 363 BIL141 PROJESI 
// Harry Potter temalý Pacman oyunu.
//AKLIMA GELEN FIKIRLER
/* -giris yazýsý gibi yazýlar daktilo printf olabilirdi.
	-Oyuna zorluk seviyeleri eklenebilir
		-	Karakter seçimi ile diyaloglar deðiþtirilebilir. (Hermione Bellatrix ile Ron Örümcek ile karþýlaþabilir.
		- Döngüler boþa taramasýn diye breakler kullanýlabilir. 
		- Hedwig's Theme müziði eklenebilir.
		-https://fsymbols.com/images/ascii.png
		-http://bb.steelguitarforum.com/userpix0912/5608_ASCII_1.jpg
		-http://cdiliogren.blogspot.com.tr/2008/10/break-ve-exit-komutu.html*/
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
#include <string.h>
#define yukari 72 
#define asagi 80
#define sag 77
#define sol 75
void delay(int seconds);
void imlec_xy(int, int ); 
void maze_layout(int);
int carpisma(int a);
void win(int );
int main()

{	char entry[100];
	int h[6] = {};
	imlec_xy(16,1);
	printf("I T I N E R A R I U M  M A R A U D E N T I U M");
	imlec_xy(35,5);
	printf("Messrs");
	imlec_xy(30,6);
	printf("MOONY, WORMTAIL,");
	imlec_xy(30,7);
	printf("PADFOOT & PRONGS");
	imlec_xy(28,8);
	printf("are proud to present");
	imlec_xy(35,12);
	printf("T H E");
	imlec_xy(29,14);
	printf("M A R A U D E R' S");
	imlec_xy(35,16);
	printf("M A P");
	getch();
		system("cls");
	printf("Welcome, \nYou know what you have to type in \nto start wandering in the mystrious hallways in Hogwarts.\n");
	scanf(" %[^\n]s",entry);
	while(!((strcmp(entry,"I solemnly swear that I am up to no good.")==0)|| (strcmp(entry,"I solemnly swear that I'm up to no good.")==0)||
	 (strcmp(entry,"I solemnly swear that i'm up to no good.")==0)|| (strcmp(entry,"I solemnly swear that I am up to no good")==0) ||
	 (strcmp(entry,"I solemnly swear that I'm up to no good")==0)|| (strcmp(entry,"I solemnly swear that i'm up to no good")==0) ||
	 (strcmp(entry,"I solemnly swear I am up to no good.")==0)|| (strcmp(entry,"I solemnly swear I'm up to no good.")==0)||
	 (strcmp(entry,"I solemnly swear i'm up to no good.")==0)|| (strcmp(entry,"I solemnly swear I am up to no good")==0) ||
	 (strcmp(entry,"I solemnly swear I'm up to no good")==0)|| (strcmp(entry,"I solemnly swear i'm up to no good")==0)
	  ))
	{
		printf("You seem like you are up to some good. Try again: ");
		scanf(" %[^\n]s",entry);
	}
	system("cls");
	
	printf("You are about to start!");
	printf("\nBe careful, you will never know who you are going to come across with! ");
	printf("\nRemember, you must use the left side of the hall to move.\n\n");
	getch();
	printf("\nHere is the list of Tom Riddle's Horcruxes:");
	printf("\nHufflepuff's Cup\nMarvolo Gaunt's Ring\nNagini\nSlytherin's Locket\nT. M. Riddle's Diary\nRavenclaw's Diadem\nQuirinus Quirrell");
	printf("\n\nThe six of them is in Hogwarts now. The seventh is you. \nFind them and beat Voldemort.");
	printf("\nGood luck!");
	getch();
int a=0;
system("cls");
	maze_layout(a);
int m;
imlec_xy(34,13);
printf("%c",2);
int kx = 34;
int ky = 13;
int n=0;
int gkx=0; // ghost koordinat x
int gky=1;
int iky=7;
int ikx=24;
int sure = 0;
int skor=0;
//HAREKET TANIMLARI
while(1)
{
	while(!kbhit())
	{
	
	if(sure<5)
	{imlec_xy(0,22);
	printf("SCORE:%d",skor);
	sure++;
	Sleep(1000);
	continue;	
	}
	if(skor==600)
	{
		win(1);
	}
	
		imlec_xy(0,22);
	printf("SCORE:%d",skor);
	
	if((kx==6)&&(ky==7)&&(h[0]==0))
	{	skor=skor+100;
		h[0]=1;
	}
	if((kx==16)&&(ky==13)&&(h[1]==0))
	{	skor=skor+100;
		h[1]=1;
	}
	if((kx==6)&&(ky==16)&&(h[2]==0))
	{	skor=skor+100;
		h[2]=1;	
	}
	if((kx==60)&&(ky==3)&&(h[3]==0))
	{	skor=skor+100;
		h[3]=1;	
	}
	if((kx==50)&&(ky==7)&&(h[4]==0))
	{	skor=skor+100;
		h[4]=1;	
	}
	if((kx==60)&&(ky==17)&&(h[5]==0))
	{	skor=skor+100;
		h[5]=1;
	}
		//HAYALET 1:
		if((gkx<64)&&(gky==1))
		{
		imlec_xy(gkx+2,1);
		printf(" ");
		imlec_xy(++gkx+2,1);
		printf("%c",1);
		Sleep(100);	
		}
		if((gky<19)&&(gkx==64))
		{
		imlec_xy(66,gky);
		printf(" ");
		imlec_xy(66,++gky);
		printf("%c",1);
		Sleep(100);
			}
	
		if ((gkx>0)&&(gky==19))
			{	imlec_xy(gkx+2,19);
				printf(" ");
				imlec_xy(--gkx+2,19);
				printf("%c",1);
				Sleep(100);
				
			}
		
			if((gkx==0)&&(gky>0))
			{	
				imlec_xy(2,gky);
				printf(" ");
				imlec_xy(2,--gky);
				printf("%c",1);
				Sleep(100);
				
			}
		if((kx==gkx+2)&&(ky==gky))
		{
		carpisma(1);
		break;}	
		
		//HAYALET 2:
		
		if((ikx<40)&&(iky==7))
		{
				imlec_xy(ikx+2,7);
				printf(" ");
				imlec_xy(++ikx+2,7);
				printf("%c",1);
				Sleep(100);
			
		}
		if((iky<13)&&(ikx==40))
		{
		imlec_xy(42,iky);
		printf(" ");
		imlec_xy(42,++iky);
		printf("%c",1);
		Sleep(100);
			}
		
		if ((ikx>24)&&(iky==13))
			{	imlec_xy(ikx+2,13);
				printf(" ");
				imlec_xy(--ikx+2,13);
				printf("%c",1);
				Sleep(100);	
			}
			
			if((ikx==24)&&(iky>0))
			{	
				imlec_xy(26,iky);
				printf(" ");
				imlec_xy(26,--iky);
				printf("%c",1);
				Sleep(100);
				
			}
		
		if((kx==ikx+2)&&(ky==iky))
		{
		carpisma(2);
		break;}	
			
		}
	
	
m=	getch();
m=	getch();
	
switch(m)	
{
	case yukari:
		if(
		((kx==2)&&(ky>1)&&(ky<20))||
		((kx==6)&&(ky>3)&&(ky<8))||((kx==6)&&(ky>11)&&(ky<15))||((kx==6)&&(ky>16)&&(ky<21))||
		((kx==8)&&(ky==4))||((kx==8)&&(ky==7))||((kx==8)&&(ky>11)&&(ky<15))||((kx==8)&&(ky>16)&&(ky<21))||
		((kx==12)&&(ky>1)&&(ky<10))||((kx==12)&&(ky>11)&&(ky<20))||
		((kx==14)&&(ky>9)&&(ky<12))||
		((kx==16)&&(ky>1)&&(ky<8))||((kx==16)&&(ky>13)&&(ky<20))||
		((kx==18)&&(ky>7)&&(ky<14))||
		((kx==20)&&(ky>1)&&(ky<6))||((kx==20)&&(ky>15)&&(ky<20))||
		((kx==22)&&(ky>5)&&(ky<16))||
		((kx==24)&&(ky>1)&&(ky<6))||((kx==24)&&(ky>15)&&(ky<20))||
		((kx==26)&&(ky>7)&&(ky<14))||
		((kx==28)&&((ky==2)||(ky==3)||(ky==19)||(ky==18)))||
		((kx==32)&&(ky>3)&&(ky<8))||((kx==32)&&(ky>13)&&(ky<18))||
		((kx==36)&&(ky>3)&&(ky<8))||((kx==36)&&(ky>13)&&(ky<18))||
		((kx==40)&&((ky==2)||(ky==3)||(ky==19)||(ky==18)))||
		((kx==42)&&(ky>7)&&(ky<14))||
		((kx==44)&&(ky>1)&&(ky<6))||((kx==44)&&(ky>15)&&(ky<20))||
		((kx==46)&&(ky>5)&&(ky<16))||
		((kx==48)&&(ky>1)&&(ky<6))||((kx==48)&&(ky>15)&&(ky<20))||
		((kx==50)&&(ky>7)&&(ky<14))||
		((kx==52)&&(ky>1)&&(ky<8))||((kx==52)&&(ky>13)&&(ky<20))||
		((kx==54)&&(ky>9)&&(ky<12))||
		((kx==56)&&(ky>1)&&(ky<10))||((kx==56)&&(ky>11)&&(ky<19))||
		((kx==58)&&(ky==7))||
		((kx==60)&&((ky==4)||(ky==7)||(ky==19)||(ky==18)))||
		((kx==62)&&((ky==4)||(ky==7)||(ky==19)))||
		((kx==64)&&((ky==4)||(ky==19)))||
		((kx==66)&&((ky>1)&&(ky<20)))
		)

		{
			imlec_xy(kx,ky);
		printf("  ");
		imlec_xy(kx,--ky);
		printf("%c ",2);
		break;
		}
		else break;
	
	case asagi:
		
		if(
		((kx==2)&&(ky>0)&&(ky<19))||
		((kx==6)&&(ky>2)&&(ky<7))||((kx==6)&&(ky>10)&&(ky<14))||((kx==6)&&(ky>15)&&(ky<19))||
		((kx==8)&&(ky==3))||((kx==8)&&(ky==6))||((kx==8)&&(ky>10)&&(ky<14))||((kx==8)&&(ky>15)&&(ky<19))||
		((kx==12)&&(ky>0)&&(ky<9))||((kx==12)&&(ky>10)&&(ky<19))||
		((kx==14)&&(ky>8)&&(ky<11))||
		((kx==16)&&(ky>0)&&(ky<7))||((kx==16)&&(ky>12)&&(ky<19))||
		((kx==18)&&(ky>6)&&(ky<13))||
		((kx==20)&&(ky>0)&&(ky<5))||((kx==20)&&(ky>14)&&(ky<19))||
		((kx==22)&&(ky>4)&&(ky<15))||
		((kx==24)&&(ky>0)&&(ky<5))||((kx==24)&&(ky>14)&&(ky<19))||
		((kx==26)&&(ky>6)&&(ky<13))||
		((kx==28)&&((ky==1)||(ky==2)||(ky==17)||(ky==18)))||
		((kx==32)&&(ky>2)&&(ky<7))||((kx==32)&&(ky>12)&&(ky<17))||
		((kx==36)&&(ky>2)&&(ky<7))||((kx==36)&&(ky>12)&&(ky<17))||
		((kx==40)&&((ky==1)||(ky==2)||(ky==17)||(ky==18)))||
		((kx==42)&&(ky>6)&&(ky<13))||
		((kx==44)&&(ky>0)&&(ky<5))||((kx==44)&&(ky>14)&&(ky<19))||
		((kx==46)&&(ky>4)&&(ky<15))||
		((kx==48)&&(ky>0)&&(ky<5))||((kx==48)&&(ky>14)&&(ky<19))||
		((kx==50)&&(ky>6)&&(ky<13))||
		((kx==52)&&(ky>0)&&(ky<7))||((kx==52)&&(ky>12)&&(ky<19))||
		((kx==54)&&(ky>8)&&(ky<11))||
		((kx==56)&&(ky>0)&&(ky<9))||((kx==56)&&(ky>10)&&(ky<18))||
		((kx==58)&&(ky==6))||
		((kx==60)&&((ky==3)||(ky==6)||(ky==17)||(ky==18)))||
		((kx==62)&&((ky==3)||(ky==6)||(ky==18)))||
		((kx==64)&&((ky==3)||(ky==18)))||
		((kx==66)&&((ky>0)&&(ky<19)))
		)
		{
		imlec_xy(kx,ky);
		printf("  ");
		imlec_xy(kx,++ky);
		printf("%c ",2);
		break;
			
		}
		else break;
	
	case sag:
	if
	(
	((ky==1)&&((kx<66)&&(kx>1)))||((ky==3)&&((kx<12)&&(kx>5)))||((ky==3)&&((kx<32)&&(kx>27))) || ((ky==3)&&((kx<40)&&(kx>35))) || ((ky==3)&&((kx<66)&&(kx>59)))   
	||	((ky==4)&&((kx<16)&&(kx>5))) ||   ((ky==4)&&((kx<56)&&(kx>51)))  || ((ky==4)&&((kx<66)&&(kx>59)))
	|| ((ky==5)&&((kx<32)&&(kx>19))) || 	((ky==5)&&((kx<48)&&(kx>35)))  || ((ky==6)&&((kx<8)&&(kx>5))) || ((ky==6)&&((kx<62)&&(kx>55)))||
	((ky==7)&&((kx<8)&&(kx>5)))	|| ((ky==7)&&((kx<18)&&(kx>15))) || ((ky==7)&&((kx<42)&&(kx>25))) || ((ky==7)&&((kx<52)&&(kx>49))) || ((ky==7)&&((kx<62)&&(kx>55)))
	|| ((ky==9)&&((kx<14)&&(kx>1))) ||  ((ky==9)&&((kx<66)&&(kx>53))) || ((ky==10)&&((kx<26)&&(kx>17))) || ((ky==10)&&((kx<50)&&(kx>41))) ||
	((ky==11)&&((kx<14)&&(kx>1))) ||  ((ky==11)&&((kx<66)&&(kx>53))) || ((ky==12)&&((kx<8)&&(kx>5))) || ((ky==13)&&((kx<8)&&(kx>5)))
	|| ((ky==13)&&((kx<18)&&(kx>15))) || ((ky==13)&&((kx<42)&&(kx>25))) || ((ky==13)&&((kx<52)&&(kx>49))) || ((ky==14)&&((kx<8)&&(kx>5)))
	|| ((ky==15)&&((kx<32)&&(kx>19))) || 	((ky==15)&&((kx<48)&&(kx>35))) || ((ky==16)&&((kx<8)&&(kx>5))) || ((ky==16)&&((kx<16)&&(kx>11)))
	|| ((ky==16)&&((kx<56)&&(kx>51))) || ((ky==16)&&((kx<66)&&(kx>63))) || ((ky==17)&&((kx<8)&&(kx>5))) || ((ky==17)&&((kx<32)&&(kx>27))) || ((ky==17)&&((kx<40)&&(kx>35)))
	|| ((ky==17)&&((kx<66)&&(kx>63))) || ((ky==18)&&((kx<8)&&(kx>5))) || ((ky==18)&&((kx<62)&&(kx>59))) || ((ky==19)&&((kx<66)&&(kx>1)))
	)
		{
		imlec_xy(kx,ky);
		printf("  ");
		imlec_xy(++kx,ky);
		printf("%c ",2);
		break;
		}
	else break;
	case sol:
		
	if(
	((ky==1)&&((kx<68)&&(kx>2)))||((ky==3)&&((kx<14)&&(kx>6)))||((ky==3)&&((kx<34)&&(kx>28))) || ((ky==3)&&((kx<42)&&(kx>36))) || ((ky==3)&&((kx<68)&&(kx>60)))   
	||	((ky==4)&&((kx<18)&&(kx>6))) ||   ((ky==4)&&((kx<58)&&(kx>52)))  || ((ky==4)&&((kx<68)&&(kx>60)))
	|| ((ky==5)&&((kx<34)&&(kx>20))) || 	((ky==5)&&((kx<50)&&(kx>36)))  || ((ky==6)&&((kx<10)&&(kx>6))) || ((ky==6)&&((kx<64)&&(kx>56)))||
	((ky==7)&&((kx<10)&&(kx>6)))	|| ((ky==7)&&((kx<20)&&(kx>16))) || ((ky==7)&&((kx<44)&&(kx>26))) || ((ky==7)&&((kx<54)&&(kx>50))) || ((ky==7)&&((kx<64)&&(kx>56)))
	|| ((ky==9)&&((kx<16)&&(kx>2))) ||  ((ky==9)&&((kx<68)&&(kx>54))) || ((ky==10)&&((kx<28)&&(kx>18))) || ((ky==10)&&((kx<52)&&(kx>42))) ||
	((ky==11)&&((kx<16)&&(kx>2))) ||  ((ky==11)&&((kx<68)&&(kx>54))) || ((ky==12)&&((kx<10)&&(kx>6))) || ((ky==13)&&((kx<10)&&(kx>6)))
	|| ((ky==13)&&((kx<20)&&(kx>16))) || ((ky==13)&&((kx<44)&&(kx>26))) || ((ky==13)&&((kx<54)&&(kx>50))) || ((ky==14)&&((kx<10)&&(kx>6)))
	|| ((ky==15)&&((kx<34)&&(kx>20))) || 	((ky==15)&&((kx<50)&&(kx>36))) || ((ky==16)&&((kx<10)&&(kx>6))) || ((ky==16)&&((kx<18)&&(kx>12)))
	|| ((ky==16)&&((kx<58)&&(kx>52))) || ((ky==16)&&((kx<68)&&(kx>64))) || ((ky==17)&&((kx<10)&&(kx>6))) || ((ky==17)&&((kx<34)&&(kx>28))) || ((ky==17)&&((kx<42)&&(kx>36)))
	|| ((ky==17)&&((kx<68)&&(kx>64))) || ((ky==18)&&((kx<10)&&(kx>6))) || ((ky==18)&&((kx<64)&&(kx>60))) || ((ky==19)&&((kx<68)&&(kx>2)))
	
	)
		{
		imlec_xy(kx,ky);
		printf("  ");
		imlec_xy(--kx,ky);
		printf("%c ",2);
		break;
		}
	else break;
		default : break;
	
}

	
}
getch();
	return 0;
}

void maze_layout(int k)	
{	int i,a;
	


imlec_xy(0,0);


	printf(" %c%c",201,205);
	for(i=0;i<32;i++)
	{printf("%c%c",205,205);
	}
	
	
	printf("%c%c",205,187);
	
	printf("\n");
	printf(" %c",186);
	
	for(i=0;i<32;i++)
	printf("  ");
	
	printf("  %c\n",186);

	printf(" %c  %c%c%c%c%c%c%c%c  %c%c  %c%c  %c%c  %c%c  %c%c%c%c%c%c%c%c%c%c  %c%c  %c%c  %c%c  %c%c  %c%c%c%c%c%c%c%c  %c"
	,186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
	186);
	
	printf("\n");
	printf(" %c  %c%c        %c%c  %c%c  %c%c  %c%c      %c%c      %c%c  %c%c  %c%c  %c%c  %c%c        %c\n"
	,186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf(" %c  %c%c            %c%c  %c%c  %c%c%c%c%c%c  %c%c  %c%c%c%c%c%c  %c%c  %c%c      %c%c        ",
	186,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
	printf("%c\n",186);
	
	printf (" %c  %c%c  %c%c%c%c  %c%c  %c%c              %c%c              %c%c  %c%c  %c%c%c%c%c%c%c%c  %c\n",
	186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	printf(" %c  %c%c    %c%c  %c%c  %c%c%c%c  %c%c%c%c%c%c%c%c  %c%c  %c%c%c%c%c%c%c%c  %c%c%c%c  %c%c        %c%c  %c\n",
	186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf(" %c  %c%c    %c%c  %c%c    %c%c  %c%c                  %c%c  %c%c    %c%c        %c%c  %c\n",
	186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf(" %c  %c%c%c%c%c%c%c%c  %c%c%c%c  %c%c  %c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c  %c%c  %c%c%c%c  %c%c%c%c%c%c%c%c  %c\n",
	186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf (" %c              %c%c  %c%c  %c%c  %c%c  T H E   %c%c  %c%c  %c%c  %c%c              %c\n",186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf(" %c  %c%c%c%c%c%c%c%c%c%c  %c%c          %c%cMARAUDER'S%c%c          %c%c  %c%c%c%c%c%c%c%c%c%c  %c\n",186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,186
	);
	
	printf(" %c              %c%c  %c%c  %c%c  %c%c  M A P   %c%c  %c%c  %c%c  %c%c              %c\n",186,
		178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf(" %c  %c%c    %c%c  %c%c%c%c  %c%c  %c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c  %c%c  %c%c%c%c  %c%c%c%c%c%c%c%c  %c\n",186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
	186);
	
	printf(" %c  %c%c    %c%c  %c%c    %c%c  %c%c                  %c%c  %c%c    %c%c  %c%c    %c%c  %c\n",186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf(" %c  %c%c    %c%c  %c%c  %c%c%c%c  %c%c%c%c%c%c%c%c  %c%c  %c%c%c%c%c%c%c%c  %c%c%c%c  %c%c  %c%c    %c%c  %c\n",186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf(" %c  %c%c%c%c%c%c%c%c  %c%c  %c%c              %c%c              %c%c  %c%c  %c%c%c%c%c%c%c%c  %c\n",186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf(" %c  %c%c    %c%c      %c%c  %c%c  %c%c%c%c%c%c  %c%c  %c%c%c%c%c%c  %c%c  %c%c      %c%c%c%c      %c\n",186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf(" %c  %c%c    %c%c  %c%c  %c%c  %c%c  %c%c      %c%c      %c%c  %c%c  %c%c  %c%c  %c%c  %c%c    %c\n",186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,186);
	
	printf(" %c  %c%c    %c%c  %c%c  %c%c  %c%c  %c%c  %c%c%c%c%c%c%c%c%c%c  %c%c  %c%c  %c%c  %c%c  %c%c    %c%c  %c",186,
	178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
	178,178,178,178,178,178,178,178,178,178,
	186);
	
	printf("\n");
	printf(" %c ",186);
	for(i=0;i<32;i++)
	printf("  ");
	printf(" %c\n",186);
	
	printf(" %c%c",200,205);
	for(i=0;i<32;i++)
	{printf("%c%c",205,205);
	}
	printf("%c%c",205,188);
	
	//horcruxs
	imlec_xy(6,7);
	printf("%c",30);
	imlec_xy(16,13);
	printf("%c",254);
	imlec_xy(6,16);
	printf("%c",64);
	imlec_xy(60,3);
	printf("%c",29);
	imlec_xy(50,7);
	printf("%c",173);
	imlec_xy(60,17);
	printf("%c",127);
	
}	
	
int carpisma(int a)
{	char response[100];

switch(a)
{
case 1:
	{
	system("COLOR C0");
	printf("\a");
	delay(1);
	
	system("cls");
	printf("Snape: Potter? What are you doing here in the middle of the night?\n\n");
	scanf(" %[^\n]s",response);
	printf("\n\nSnape: %s? Do you expect me to believe that?\n",response);
	printf("      Return your room immediately. 10 points from Gryffindor!");
	getch();
	system("cls");
	system("COLOR 0F");
	printf("You got caught! Mischief failed. \n");
	printf("This is enough for this night. Be more careful next time!");
	getch();
	exit(1);
	}
case 2:
{system("COLOR C0");
	printf("\a");
	delay(1);
	
	system("cls");
	printf("Draco: Potter? W-what are you doing here? \n\n");
	scanf(" %[^\n]s",response);
	printf("\n\nDraco: Why am I here is not business.\n",response);
	printf("       Go back or I'll tell Snape!");
	getch();
	system("cls");
	system("COLOR 0F");
	printf("You got caught! Mischief failed. \n");
	printf("This is enough for this night. Be more careful next time!");
	getch();
	exit(1);
	}	
}	
	
}
void win(int a )
{
	system("COLOR C0");
	printf("\a");
	delay(1);
	system("cls");
	printf("Congratulations! You collected all horcruxes!");
	getch();
	printf("\n\nMISCHIEF MANAGED!");
	getch();
	exit(1);

}
void delay(int seconds)
{
    long pause;
  clock_t now,then;
    pause = seconds*CLOCKS_PER_SEC;
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
void imlec_xy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
