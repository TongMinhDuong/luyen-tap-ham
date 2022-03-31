#include <stdio.h>
#include <math.h>

float tamgiac(float a, float b, float c){
	float p,S;
	p = (a + b + c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	return S;
}
int main()
{
	float a,b,c;
	printf("Nhap a , b , c : \n");
	scanf("%f%f%f", &a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
		printf("Dien tich tam giac la : %f", tamgiac(a,b,c));
	else
		printf("loi roi");
}
