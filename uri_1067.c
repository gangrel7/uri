#include <stdio.h>

int main(){

	int x, cont;

	scanf("%d", &x);

	for (cont = 1; cont <= x; cont+=2)
	{
		if (cont <= x){
			printf("%d\n", cont);
		}
	}

	return 0;
}