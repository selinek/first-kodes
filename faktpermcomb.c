#include <stdio.h>

int faktoriyel(int n) {
	int fakt = 1;
	int i;
	
	if (n<0) {
		printf("Hatali deger!\n");
		return -1;  
	}

	for (i=1; i<=n; i++)
	    fakt *= i;
	    
	return fakt;
}

int permutasyon(int n, int k){
	
	if (n<0 || k<0 || n<k) {
		printf("Hatali degerler\n");
		return -1;
	}
	
	return faktoriyel(n)/faktoriyel(n-k);
	
}
	
int kombinasyon(int n, int k){
	
	if (n<0 || k<0 || n<k) {
		printf("Hatali degerler\n");
		return -1;
	}
	
	return faktoriyel(n)/(faktoriyel(k)*faktoriyel(n-k));
	
}

int main() {
	
	int n, k;
	
	n=-5;
	printf("n = %d\n",n);
	printf("n! = %d\n",faktoriyel(n));
	
	n=0;
	printf("n = %d\n",n);
	printf("n! = %d\n",faktoriyel(n));
	
	n=1;
	printf("n = %d\n",n);
	printf("n! = %d\n",faktoriyel(n));
	
	n=2;
	printf("n = %d\n",n);
	printf("n! = %d\n",faktoriyel(n));
	
	n=4;
	printf("n = %d\n",n);
	printf("n! = %d\n",faktoriyel(n));
	
	n=5;
	printf("n = %d\n",n);
	printf("n! = %d\n",faktoriyel(n));
	
	n=8;
	printf("n = %d\n",n);
	printf("n! = %d\n",faktoriyel(n));
	
	n=-3;
	k=5;
	printf("n = %d, k = %d\n",n,k);
	printf("P(n,k) = %d\n",permutasyon(n,k));
	printf("C(n,k) = %d\n",kombinasyon(n,k));
	
	n=5;
	k=5;
	printf("n = %d, k = %d\n",n,k);
	printf("P(n,k) = %d\n",permutasyon(n,k));
	printf("C(n,k) = %d\n",kombinasyon(n,k));
	
	n=4;
	k=5;
	printf("n = %d, k = %d\n",n,k);
	printf("P(n,k) = %d\n",permutasyon(n,k));
	printf("C(n,k) = %d\n",kombinasyon(n,k));
	
	n=5;
	k=2;
	printf("n = %d, k = %d\n",n,k);
	printf("P(n,k) = %d\n",permutasyon(n,k));
	printf("C(n,k) = %d\n",kombinasyon(n,k));
	
	n=6;
	k=3;
	printf("n = %d, k = %d\n",n,k);
	printf("P(n,k) = %d\n",permutasyon(n,k));
	printf("C(n,k) = %d\n",kombinasyon(n,k));
	
	return 0;
}
