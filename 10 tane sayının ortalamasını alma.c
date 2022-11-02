#include<stdio.h>

int main(){
       int dizi[10];
       int tp=0;
       float ort;
       int i;
      
       for(i=0;i<10;i++)
       {
           printf("\n%d.sayi : ",i+1);
           scanf("%d",&dizi[i]);
       }
      
       for(i=0;i<10;i++)
       {
           tp = tp + dizi[i];
       }
      
       ort = tp / 10;
      
       printf("\n\nToplam : %d",tp);
       printf("\n\nOrtalama : %f",ort);
       
    return 0;
}
