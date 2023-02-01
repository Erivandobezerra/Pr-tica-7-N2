#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char txt[500], x;
	int t=0;
	
	printf("Digite uma frase: ");
	gets(txt);
	
	printf("Digite uma letra: ");
	scanf("%s", &x);
	
	for(int idx = 0; idx < 500; idx++){
		if(txt[idx] == x){
			t++; 
		}
		if(txt[idx]== '\0'){
			break;
		}
	}
	
	printf("Resultado: %d", t);
	return 0;
}

