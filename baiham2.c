#include <stdio.h>
#include <math.h>

int check(int num);

int main()
{
	int i;
	int arr[100];
	
	printf("nhap mang so nguyen:\n");
	for(i=0;i<5;i++){
		scanf("%d", &arr[i]);
	}
	printf("boi so cua 50 la: \n");
	for(i=0;i<5;i++){
		if(check(arr[i])==0){
		printf("%d\n", arr[i]);
	}
	}
}
int check(int num){
	if(num%50==0){
		return 0;
	}
		return 1;
}
