#include <stdio.h>

double ush(double n, int k) {
	int a;
	int carptikmi = 0;
	double gec = 1.0;
	int i;
	
	if (k<0) {
		a = -k;
		carptikmi = 1;
	}
	else
	    a = k;
	
	if (a == 0) {
        if (n == 0.0){
        	printf("Tanimsiz deger\n");
        	return -0.0000001;
		}	
		else
		    return 1.0;
    }
    else {
    	for(i=0; i<a; i++)
    	gec *= n;
    	
    	if(carptikmi)
    	    return 1/gec;
    	else
		    return gec;    
	}
}


int main() {
	
	double n;
	int k;
	
	n = 0.0;
	k = 0;
	
	printf("n = %.2lf\n", n);
	printf("k = %d\n", k);
	printf("n^k = %.2lf\n", ush(n,k));
	
	n=3.21;
	k=0;
	
	printf("n = %.2lf\n",n);
	printf("k = %d\n",k);
	printf("n^k =%.2lf\n",ush(n,k));
	
	n=2.0;
	k=5;
	
	printf("n = %.2lf\n",n);
	printf("k = %d\n",k);
	printf("n^k =%.2lf\n",ush(n,k));
	
	n=2.0;
	k=-2;
	
	printf("n = %.2lf\n",n);
	printf("k = %d\n",k);
	printf("n^k =%.2lf\n",ush(n,k));
	
	n=0.25;
	k=-3;
	
	printf("n = %.2lf\n",n);
	printf("k = %d\n",k);
	printf("n^k =%.2lf\n",ush(n,k));
	
	return 0;
}
