#include <stdio.h>
int main(){

	float val[6];
	int i, pos;

	scanf("%f %f %f %f %f %f", &val[0], &val[1], &val[2], &val[3], &val[4], &val[5]);

	pos = 0;
	for (i=0; i<6; i++){
		if (val[i]>0){
			pos++;
		}
	}

	printf("%d valores positivos\n", pos);
	return 0;
}