#include <stdio.h>
#include <stdlib.h>

float dientich(float a, float b){
	return a*b;
}
float chuvi(float a, float b){
	return 2*(a+b);
}

int main()
{
	char lc;
	float a,b,S,P;
	do
	{
		printf("Nhap a va b : ");
		scanf("%f%f", &a,&b);
		printf("1. Dien tich\n2. Chu vi\n");
		scanf("%d", &lc);
		switch(lc){
			case 1:
				S=dientich(a,b);
				printf("Dien tich la %f", S);
				break;
			case 2:
				P=chuvi(a,b);
				printf("Chu vi la %f", P);	
	}
		printf("\nTiep tuc Y/N: ");
		fflush(stdin);
		scanf("%c", lc);
	}
	while(lc=='Y'||lc=='y');
	printf("ket thuc");
	return 0;
}
