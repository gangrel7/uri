#include <stdio.h>

int main(){
	
	int n, pum, cont;

	scanf("%d", &n);

	pum = 1;

	for (cont = 0; cont < n; ++cont)
	{
		printf("%d %d %d PUM\n", pum, pum+1, pum+2);
		pum+=+4;
	}

	return 0;
}