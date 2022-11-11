#include <stdio.h>
/*sayilar simetrik mi?*/

int main () {

    int  A[10];
    int i;
    
    /*Tamsayilari oku*/
    
    for (i=0; i<10; i++) {
    	printf("Tamsayi gir: ");
    	scanf("%d",&A[i]);
	}

    /*Simetri kontrolu yap*/
    
    for(i=0; i<5; i++)
        if(A[i] != A[9-i]) {
            printf("Sayilar simetrik degil");
            return 0;
        }
        
        printf("Sayilar simetriktir.\n");
        
return 0;
}
