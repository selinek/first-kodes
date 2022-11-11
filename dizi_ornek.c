#include <stdio.h>

int main() {
	
	char A[101];
	int i=0, j;
	
	printf("Karakterleri gir: \n");
	scanf("\n%c",&A[i]);
	
	while (A[i] != '\n') {
		
		if (A[i] >= 'a' && A[i] <= 'z')
	        A[i]+='A'-'a';
		else if (A[i] >= 'A' && A[i] <= 'Z')
	        A[i]+='a'-'A';
	        
	    else if (A[i] >= '0' && A[i] <= '8')
	        A[i]++;    
	    else if (A[i]=='9')  
		    A[i]='0';  
		
		scanf("%c",&A[++i]);
		
		if(i==100 && A[i] != '\n') {
		    printf("Cok karakter girdiniz. \n");
		    return -1;
	    }
    }
    
    printf("CIKTI:\n");
    for(j=0; j<i; j++)
        printf("%c",A [j]);
    printf("\n\n");    
    
    return 0;
}
