#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159
#define SDT 13

void cetak (void);
float radian(float);
int negativezero(float);


int main()
{
    cetak();

    return 0;
}


void cetak (void){

    int i, j;
    float x[] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360}, data[SDT][3];

    printf("________________________________________________\n");
    printf("|X      | SIN(X)     | COS(X)     | TAN(X)     |\n");
    printf("________________________________________________");


    for(i=0; i<13; i++){
        for(j=0; j<3; j++){
            if(j==0){
                data[i][j]=sin(radian(x[i]));
                if(negativezero(data[i][j])){
                    data[i][j] = 0.0f;
                }
            }
            else if(j==1){
                data[i][j]=cos(radian(x[i]));
                if(negativezero(data[i][j])){
                    data[i][j] = 0.0f;
                }
            }
            else{
                data[i][j]=tan(radian(x[i]));
                if(negativezero(data[i][j])){
                    data[i][j] = 0.0f;
                }
            }
        }
    }

    for(i=0; i<13; i++){
        printf("\n|%-7g| %-11.2f| %-11.2f| %-10.2f |\n________________________________________________", x[i], data[i][0], data[i][1], data[i][2]);
    }

    puts("  KET : Tan 90 = Undefined; Tan 270 = Undefined");

}

int negativezero(float a) {
    if(a > -0.04f && a < 0.0f){
        return 1;
    } else {
        return 0;
    }
}

float radian(float a){

    return(a/180.0f * PI);

}
