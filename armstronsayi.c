#include <stdio.h>

int armstrong(int x) {
	
	int bastop = 0;
	int orig = x;
	
	for(; orig>0; orig=orig/10)
	    bastop += (orig%10)*(orig%10)*(orig%10);
	    
	if(x == bastop)
	    return 1;
		
	return 0;	    
}

int main() {
	
	int i;
	
	for(i=1; i<10000; i++){
	    if (armstrong(i))
	     printf("%d armstrong sayisidir.\n",i);
	}

	return 0;
}
