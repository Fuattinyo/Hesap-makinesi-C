#include <stdio.h>

int main(){
    
    int secim;
    double a, b;
    
    printf("1)topla 2)cıkar 3)carp 4)bol\n");
    scanf("%d",&secim);
      
    
    printf("iki sayı giriniz: ");
    scanf("%lf %lf", &a, &b);
    
    switch(secim){
        case 1: printf("sonuc %.2f\n", a+b); break;
        case 2: printf("sonuc %.2f\n", a-b); break;
        case 3: printf("sonuc %.2f\n", a*b); break;
        case 4: printf("sonuc %.2f\n", a/b); break;
    }
    
}