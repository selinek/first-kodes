#include <stdio.h>

/*nxn kare cizen fonk.*/

void yatayCiz(int n) {
	
    int i;
    
    printf(" ");
    for(i=0; i<n; i++)
        printf("-");
    printf("\n");
}

void kareCiz(int n){
    int i,j;
    
/*ilk satir*/
    
    yatayCiz(n);
    
/*n tane diger satir*/
	
	for(i=0; i<n; i++){
		printf("|");
		for(j=0; j<n; j++)
		    printf(" ");
		printf("|\n");    
	}   
	
/*son satir*/
    
    yatayCiz(n);
			
}

int main() {
	
	int deg;
	
	kareCiz(3);
	printf("\n");
	kareCiz(5);
	printf("\n");
	
	deg=4;
	kareCiz(deg*2+3);
	printf("\n");
}
