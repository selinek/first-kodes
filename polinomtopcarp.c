#include <stdio.h>
#define MAX 5

int main() {
	
	float p1[MAX+1], p2[MAX+1];
	float top[MAX+1]={0};
	float carp[2*MAX+1]={0};
	int n1, n2, nmax;
	int i, j;
	
	printf("1. poinomun derecesini gir: ");
	scanf("%d",&n1);
	if (n1>MAX){
	    printf("Hatali girdi. \n");
	    return -1;
	}
	
	printf("1. poinomun katsayilarini gir: \n");
	for(i=n1; i>=0; i--)
	    scanf("%f",&p1[i]);
	
	printf("\n\n2. poinomun derecesini gir: ");
	scanf("%d",&n2);
	if (n2>MAX){
	    printf("Hatali girdi. \n");
	    return -1;
	}
	
	printf("2. poinomun katsayilarini gir: \n");
	for(i=n2; i>=0; i--)
	    scanf("%f",&p2[i]);
	    
	if(n1>n2)
	    nmax=n1;
    else
	    nmax=n2;		    
	    
	/*TOPLAMA*/
	
	for(i=0; i<=nmax; i++)
	    top[i]=p1[i]+p2[i];
	
	/*CARPMA*/
	
	for(i=0; i<=n1; i++)
	    for(j=0; j<=n2; j++)
	        carp[i+j] += p1[i]*p2[j];
	
	/*CIKTILAMALAR*/    
	    
	printf("\n\nTOPLAM\n");
	for(i=nmax; i>=1; i--)
	    printf("%.2fx^%d + ", top[i],i);
	printf("%.2f\n\n", top[0]);	    
	
	printf("\n\nCARPIM\n");
	for(i=n1*n2; i>=1; i--)
	    printf("%.2fx^%d + ", carp[i],i);
	printf("%.2f\n\n", carp[0]);
	 
	printf("\n\n") 	 ;
	
	return 0;
}
