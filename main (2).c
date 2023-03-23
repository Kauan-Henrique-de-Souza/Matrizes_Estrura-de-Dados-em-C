#include <stdio.h>

int main()
{
    float matriz[4][4];
    int l,c;
    float num;
    float impar;
    float par;
    float media;
    float cont;
    
    for(l=0; l < 4; l++){
        for(c=0; c < 4; c++){
        printf("\nDigite um número:");
        scanf("%f",&matriz[l][c]);
        
        if (c% 2 != 0){
            impar = impar + matriz[l][c];
        }
        if (c% 2 ==0){
            par = par + matriz[l][c];
            cont= cont + 1;
        }
        }
    }
    
    printf("Soma dos números pares:%f\n",impar);
    printf("Soma dos números impares:%f\n",par);
    
    media = impar/cont;
    printf("Média dos números pares:%f\n",media);
    
    
    for (int l=0;l<4;l++){
        printf("\n");
        for(int c=0;c<4;c++){
        printf("%2.f ",matriz[l][c]);
        }
    }
    
    media = impar/cont;
    printf("Média dos números pares:%f\n",media);


    return 0;
}
