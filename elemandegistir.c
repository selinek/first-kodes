#include <stdio.h>

/*fonksiyona dizi gecme*/

int elemandegistir(int A[], int esayisi, int deger, int yenideger) {
	int i;
	int sayac = 0;
	
	for(i=0; i<esayisi; i++)
	    if (A[i] == deger){
	    	 A[i] = yenideger;
	    	 sayac++;
		}
	return sayac;       
}

int main() {
    int A[] = {25, 50, 75, 25, 60, 25, 90, 120, 25, 85};
    int ed, yd, ds;
    int i;
    
    printf("ILK\n");
    for (i=0; i<10; i++)
        printf("%d\t",A[i]);
    printf("\n\n");
    
    printf("Eski bulunan deger gir: ");
    scanf("%d",&ed);
    printf("Yer degistirecek deger gir: ");
    scanf("%d",&yd);
    
    ds = elemandegistir(A,10,ed,yd);
    
    printf("SON\n");
    for (i=0; i<10; i++)
        printf("%d\t",A[i]);
    printf("\n\n");
	printf("%d degisiklik yaptim\n",ds) ;   
    
	return 0;
}
