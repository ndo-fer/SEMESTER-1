    #include <stdio.h>
    #include <stdlib.h>

    float f_to_i(float);
    float i_to_cm(float);
    float cm_to_m(float);

    int main()
    {
        float inp;

        puts("Konversi Satuan Kaki(feet) ke Meter\n");
        printf("Masukkan nilai awal (dlm kaki) : ");
        scanf("%g", &inp);

        printf("\n%g kaki = %g inchi = %g centimeter = %g meter\n", inp, f_to_i(inp), i_to_cm(f_to_i(inp)), cm_to_m(i_to_cm(f_to_i(inp))));
        return 0;
    }

    float f_to_i(float feet){

        return(feet*12);

    }

    float i_to_cm(float inch){

        return(inch*2.54);

    }

    float cm_to_m(float centi){

        return(centi/100);

    }
