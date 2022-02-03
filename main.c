#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>

void main(int argc, char const *argv[])
{

	char oyuncu1[20], oyuncu2[20], oyuncu3[20], tahminci[20];
	char makale1[30], makale2[30], makale3[30];
	char M1[30], M2[30], M3[30];
	char temp[30];
	int x, tahmin, i, a = 1;
	int skor[4] = {0}; // t o1 o2 o3 olmak uzere

	srand(time(NULL));

	printf("\n 1. Oyuncunun ismini girin: ");
	fgets(oyuncu1, sizeof(oyuncu1), stdin);

	printf(" 2. Oyuncunun ismini girin: ");
	fgets(oyuncu2, sizeof(oyuncu2), stdin);

	printf(" 3. Oyuncunun ismini girin: ");
	fgets(oyuncu3, sizeof(oyuncu3), stdin);

	printf(" Tahmin edicinin ismini girin: ");
	fgets(tahminci, sizeof(tahminci), stdin);

	printf("UYARI: Lutfen oyuncu numaralarinizi unutmayiniz. "
		   "\n Devam etmek icin bir tusa basin.");
	getch();

	// Buraya kadar oyuncu ve tahminci belirleme seyleri

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
		   " Ilk makale basligini girin: ");
	fgets(makale1, sizeof(makale1), stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
		   " Ikinci makale basligini girin: ");
	fgets(makale2, sizeof(makale2), stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
		   " Ucuncu makale basligini girin: ");
	fgets(makale3, sizeof(makale3), stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	// ilk makale girisleri

	while (1 > 0) // Oyun surekli basa sarsin diye
	{
		
		if(a%2 = 1){
			strcpy(M1, makale1);
			strcpy(M2, makale2);
			strcpy(M3, makale3);
			a++;
		}else{
			strcpy(makale1, M1);
			strcpy(makale2, M2);
			strcpy(makale3, M3);
			a++;
		}
		
		for(int i = 0; i < rand()%20+1; i++){
			int j = rand()%4+1;
			
			switch(j%4) {
				
				case 0:
					strcpy(temp, makale1);
					strcpy(makale1, makale2);
					strcpy(makale2, makale3);
					strcpy(makale3, temp);
					break;
				
				case 1:
					strcpy(temp, makale2);
					strcpy(makale2, makale3);
					strcpy(makale3, makale1);
					strcpy(makale1, temp);
					break;
				
				case 2:
					strcpy(temp, makale3);
					strcpy(makale3, makale1);
					strcpy(makale1, makale2);
					strcpy(makale2, temp);
					break;
				
				default:
					break;
			}
	
		}
		
		printf(" Makaleler:\n 1: %s\n 2: %s\n 3: %s\n\n",makale1,makale2,makale3);
		printf(" Devam etmek icin bir tusa basin.\n\n\n\n\n");
		getch();
		
		
		x = rand() % 3 + 1; // Rastgele makale secici

		switch (x)
		{ // Cikan makaleyi yazdirma
		case 1:
			printf(" Cikan makale: %s\n", M1);
			break;
		case 2:
			printf(" Cikan makale: %s\n", M2);
			break;
		case 3:
			printf(" Cikan makale: %s\n", M3);
			break;
		}

		do
		{
			printf("\n Bir tahmin yapin: 1/2/3\n");
			scanf("%d",&tahmin);

			if (tahmin == x)
			{
				printf("\n Dogru bildiniz!\n");
				++skor[0]; // tahminci skoru ++
				++skor[x]; // anlatici skoru ++
			}
			else if (tahmin != x)
			{
				printf("\n Yanlis tahmin. %d. oyuncunun makalesiydi.\n"
					   "Oyuncu %d +1 puan.",
					   x, x);
				++skor[tahmin]; // yalanci skoru ++
			}
			else
			{
				printf("\n Hatali giris yaptiniz. Tekrar deneyin.\n");
			}

		} while (x < 1 || x > 3); // Hatali giris yapilirsa diye
		
			printf("\n\n\n ---=== Skor Tablosu ===---\n");
		
			printf(" %s: %d\n", tahminci, skor[0]);
			printf(" %s: %d\n", oyuncu1, skor[1]);
			printf(" %s: %d\n", oyuncu2, skor[2]);
			printf(" %s: %d\n", oyuncu3, skor[3]);
			
			printf("\n\n\n Devam etmek icin bir tusa basin.\n");
		getch();


		if (x == 1)
		{

			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
				   " Yeni makale basligini girin: ");
			scanf("%s",makale1);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		else if (x == 2)
		{

			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
				   " Yeni makale basligini girin: ");
			scanf("%s",makale2);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		else
		{

			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
				   " Yeni makale basligini girin: ");
			scanf("%s",makale3);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
	}
}

