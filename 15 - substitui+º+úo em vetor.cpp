/*

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[10],k;
	
	for(k=0;k<10;k++){
		scanf("%d",&vetor[k]);
		if(vetor[k]<=0){
			vetor[k]=1;
		}
	}
	
    return 0;
}
