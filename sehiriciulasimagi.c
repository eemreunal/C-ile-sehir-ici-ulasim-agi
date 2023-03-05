#include <stdio.h>
int main()

{
  float bakiye = 0.0; //ondalıklı sayılar dahil bakiye sorgulamak için float değişkeni kullanılır.
  char secim;
//burada kullanıcılara yapabilecekleri işlemler sunularak scanf sayesinde birini seçmeleri sağlanıyor.
printf("         .                              .                                  \n"); 
printf("         |     o         o     o        |         o                     o  \n"); 
printf("  .--..-.|--.  . .--.    . .-. .    .  .|.-. .--. . .--.--.    .-. .-.. .  \n"); 
printf("  `--(.-'|  |  | |       |(    |    |  |(   )`--. | |  |  |   (   (   | |  \n"); 
printf("  `--'`--'  `-' `'     -' ``--' `-  `--```-'``---' `'  '  `-   `-'``-`-' `-\n"); 
printf("                                                                   ._.'    \n"); 
printf("Sehir ulasim agi dolum merkezine hosgeldiniz.\n");
  {
    char sehir[20];
    int i;2
    printf("Lutfen servisimizi kullanmak istediginiz sehrin plaka kodunu giriniz:\n");
    for (i = 1; i <= 81; i++) {   
    }
    scanf("%s", sehir);
    printf("Servisimizi %s plaka kodlu sehirden kullaniyorsunuz.", sehir);
} //kullanıcılardan yapmak istedikleri islemi scanf kullanarak alıyoruz
  printf("\nLutfen yapmak istediginiz islemi seciniz:\n");
  printf("1. Mevcut kart bakiyesini ogren\n");
  printf("2. Yukleme yap\n");
  printf("3. Cıkıs\n");
  scanf(" %c", &secim);
//burada kullanıcıları yukarıda seçtikleri seçeneğe göre switch-case kullanarak yapmak istedikleri işlemlere yönlendiriyoruz.
  switch (secim) {
    case '1':
      printf("Kartinizda: %.2f₺ bulunmaktadir.\n", bakiye);
      break;
    case '2':
      printf("Yukleme yapmak istediginiz tutari giriniz: ");
      float miktar;
      scanf("%f", &miktar);
      bakiye += miktar;
      //yüklemek istenilen tutarı onaylat!!
      printf("Kartiniza %.2f₺ basariyla yuklendi.\n", miktar);
      break;
    case '3':
      printf("Sehir ulasim agi dolum merkezlerini tercih ettiginiz icin tesekkur ederiz. Iyi Gunler!\n");
      break;
    default:
      printf("Gecersiz secim. Lutfen gecerli bir secim yapin.\n");
      break;
  }  //buradan sonra baska bir islemle devam etmek istediklerini soruyoruz
  printf("Baska bir islem yapmak ister misiniz?\n");
  printf("4. Kart bakiyesini ogren\n");
  printf("5. Cıkıs\n");
  scanf(" %c", &secim);
  switch (secim) {
    case '4':
      printf("Kartinizda: %.2f₺ bulunmaktadir.\n", bakiye);
      break;
      printf("Sehir ulasim agi dolum merkezlerini tercih ettiginiz icin tesekkur ederiz. Iyi Gunler!\n");
    case '5':
      printf("Sehir ulasim agi dolum merkezlerini tercih ettiginiz icin tesekkur ederiz. Iyi Gunler!\n");
      break;
    default:
      printf("Gecersiz secim. Lutfen gecerli bir secim yapin.\n");
      break;
  }
  int rating;

    printf("Bizi 1 ile 10 arasında bir puan vererek degerlendiriniz: ");
    scanf("%d", &rating);

    if (rating < 1 || rating > 10) {
        printf("Gecersiz degerlendirme. Lutfen 1 ile 10 arasında bir secim yapiniz:\n");
    } else {
        printf("Bize %d puan vererek degerlendirdiginiz icin tesekkur ederiz", rating);
    }
    char choice;
    do {
        printf("\n\n-------------------------------------------------------------\n\n");
        printf("\nDiğer hizmetlerimizi kullanmak ister misiniz? (E/H)\n");
        scanf(" %c", &choice);
        if (choice == 'E') {
printf("Bizi sehiriciulasimagi.com adresinden takip edebilirsiniz.\n\n");
printf("+-+ +-+ +-+ +-+ +-+ +-+ +-+ +-+ +-+ +-+ +-+");
printf("|T| |E| |S| |E| |K| |K| |U| |R| |L| |E| |R|");
printf("+-+ +-+ +-+ +-+ +-+ +-+ +-+ +-+ +-+ +-+ +-+");
        } else if (choice == 'H') {
            printf("Tesekkur eder, iyi gunler dileriz!\n");
        } else {
            printf("Lütfen 'E' veya 'H' giriniz.\n");
        }
    } while (choice != 'E'  && choice != 'H');
  
  return 0;
}
/*
 ___  __ __  ___  ___   _ _  _ _  ___  _   
| __>|  \  \| . \| __> | | || \ || . || |  
| _> |     ||   /| _>  | ' ||   ||   || |_ 
|___>|_|_|_||_\_\|___> `___'|_\_||_|_||___|                                        
 ___  ___  ___  ___  _ __ _ __ _ _  ___  _    ___  ___ 
|_ _|| __>/ __>| __>| / /| / /| | || . \| |  | __>| . \
 | | | _> \__ \| _> |  \ |  \ | ' ||   /| |_ | _> |   /
 |_| |___><___/|___>|_\_\|_\_\`___'|_\_\|___||___>|_\_\
*/