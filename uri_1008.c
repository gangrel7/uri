#include <stdio.h>

int main(){

	int fun, horas;
	double valor, salario;

	scanf("%d %d %lf", &fun, &horas, &valor);

	printf("NUMBER = %d\n", fun);
	printf("SALARY = U$ %.2lf\n", (horas*valor));

	return 0;
}