#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, i;
	float *S, ort=0.0, karelertop=0.0, std;
	
	printf("Kac sayi girceksin: ");
	scanf("%d",&n);
	
	if(n < 1) {
		printf("Sayilarin sayisi %d olamaz\n",n);
		return -1;
	}
	
	S = (float *)malloc(n*sizeof(float));  
	
	if (S == NULL) {
		printf("Yer ayirma hatasi\n");
		return -1;
	}
	
	for (i=0; i<n; i++) {
		printf("%d. sayiyi gir: ",i+1);
		scanf("%f",&S[i]);
		ort += S[i];
	}
	
	ort /= n;
	
	for (i=0; i<n; i++) 
		karelertop += (ort-S[i])*(ort-S[i]);
	
	if(n == 1)
	    std = 0.0;
	else
    	std = sqrt(karelertop / (n-1));
    
	printf("STD = %.2f",std);
	
	return 0;
}
