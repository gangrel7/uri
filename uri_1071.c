#include <stdio.h>

int main(){

	int x, y, i, inicio, fim, soma;
 
	scanf("%d %d", &x, &y);

	soma = 0;
	if (x!=y){

		if (x<y) {
			inicio = x;
			fim = y;
		} else {
			inicio = y;
			fim = x;
		}

		for (i = inicio; i < fim; i++)
		{
			if (i>inicio && (i%2!=0))
			{
				soma=soma+i;
			}
		}
	}

	printf("%d\n", soma);

	return 0;
}