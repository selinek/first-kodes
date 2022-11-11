#include <stdio.h>

int main() {
	
	int Ksayac[26]={0};
	int Bsayac[26]={0};
	char kar;
	int i;
	
	printf("Karakterleri gir:\n");
	scanf("%c",&kar);
	
	while (kar!='%') {
		if (kar>= 'a' && kar<= 'z')
		    Ksayac[kar - 'a']++;
		else if (kar >= 'A' && kar <= 'Z')  
		    Bsayac[kar - 'A']++;
		
		scanf("%c",&kar);
	}
	
	printf("\nKUCUK harflerin sayilari\n\n");
	
	for (i=0; i<26; i++)
	    printf("%d\t",Ksayac[i]);
	    
	printf("\nBUYUK harflerin sayilari\n\n");    
	    
	for (i=0; i<26; i++)
	    printf("%d\t",Bsayac[i]);    
	
	return 0;
}
