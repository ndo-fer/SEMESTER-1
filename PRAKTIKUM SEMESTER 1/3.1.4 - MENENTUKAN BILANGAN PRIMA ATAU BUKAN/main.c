#include <stdio.h>

int main()
{
  printf("Menentukan Bilangan Bulat adalah Prima atau Bukan.\n");

  int bil,i,angka_prima;
  angka_prima = 1;

  printf("Masukkan bilangan bulat: ");
  scanf("%i",&bil);

  if (bil == 0 || bil == 1) {
    angka_prima = 0;
  }
  else {
    for (i = 2; i <= bil-1 ; i++) {
      if (bil % i == 0) {
        angka_prima = 0;
      }
    }
  }

  if (angka_prima)
    printf("\n%i adalah bilangan prima \n",bil);
  else
    printf("\n%i bukan bilangan prima \n",bil);

 return 0;
}
