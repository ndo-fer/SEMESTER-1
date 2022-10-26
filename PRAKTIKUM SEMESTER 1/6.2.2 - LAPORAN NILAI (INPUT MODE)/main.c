#include <stdio.h>
#include <stdlib.h>

int main()
{
    int banyak;

    puts("Menghitung Rata-Rata Nilai B. Inggris, Matematika, & Digital Mahasiswa");
    printf("Berapa jumlah mahasiswa ? ");
    scanf("%i", &banyak);

    int x, y, i, a, b, p;
    float nilai[banyak][3], total[banyak], rata[banyak];
    char mhs[banyak][100];

    for(x=0; x<banyak; x++){
        total[x]=0;
    }

    puts("\nMasukkan nama mahasiswa!");
    for(i=0; i<banyak; i++){
        printf("Mahasiswa %i = ", i+1);
        scanf("%s", &mhs[i]);
        fflush(stdin);
    }

    puts("\nMasukkan nilai mahasiswa!");
    for(a=0; a<banyak; a++){
        printf("Nilai %s\n", mhs[a]);
        for(b=0; b<3; b++){
            if(b==0)
                printf("B. Inggris = ");
            else if(b==1)
                printf("Matematika = ");
            else
                printf("Digital = ");

            scanf("%f", &nilai[a][b]);
            total[a] += nilai[a][b];
        }
        puts("");
        rata[a]=total[a]/3;
    }

    printf("\n\n");
    printf("-----------------------------------------------------\n");
    printf("No. | Nama Mhs       | B.Ing | MTK | DGTL | Rata2   |\n");
    printf("-----------------------------------------------------\n");
    for(p=0; p<banyak; p++){
            printf("%i     %-16s %-7g %-5g %-6g %-5g\n", p+1, mhs[p], nilai[p][0], nilai[p][1], nilai[p][2], rata[p]);
    }

    return 0;
}
