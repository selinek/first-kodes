#include <stdio.h>


int main() {
    
    float yas,deger;
    printf("Yasinizi Giriniz: ");
    scanf("%f",&yas);
    
    deger = 1-(yas/100);
    
    if (deger <= 1.000001 && deger > 0.900001)
        printf("Bebeksiniz.\n");
        
    else if (deger <= 0.900001 && deger > 0.800001)
        printf("Cocuksunuz.\n");
        
    else if (deger <= 0.800001 && deger > 0.650001)
        printf("Gencsiniz.\n");
        
    else if (deger <= 0.650001 && deger > 0.350001)
        printf("Orta Yaslisiniz.\n");
         
    else if (deger <= 0.350001 && deger > 0.150001)
        printf("Yaslisiniz.\n");
         
    else if (deger <= 0.150001 && deger > 0.000001)
        printf("Cok Yaslisiniz.\n");
         
    else if (deger < 0)
        printf("HATA!.\n");
        
    else if (deger > 0)
        printf("HATA!.\n");
            
    
    
    
    return 0;
}

