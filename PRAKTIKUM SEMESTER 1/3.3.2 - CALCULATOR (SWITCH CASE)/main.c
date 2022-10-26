#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valid_operator = 1;
    char opr;
    float bil1, bil2, hasil;

    puts("KALKULATOR");

    printf("Masukkan 2 bilangan dan sebuah operator\ndengan format bil1 operator bil2\n\n");
    scanf("%f %c %f", &bil1, &opr, &bil2);

    switch (opr)
    {
        case '+' : hasil = bil1 + bil2;
        break;

        case '-' : hasil = bil1 - bil2;
        break;

        case '/' : hasil = bil1 / bil2;
        break;

        case '*' : hasil = bil1 * bil2;
        break;

        default : valid_operator = 0 ;
    }
    if (valid_operator)
        printf("\n %g %c %g is %g\n", bil1, opr, bil2, hasil);
    else
        printf("Invalid operator!\n");

    return 0;
}
