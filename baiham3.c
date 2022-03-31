#include<stdio.h>

float sothuc(float arr[], int size);

int main()
{
	float arr[5];
	int i;
	
	printf("Nhap day so thuc: \n");
	for(i=0;i<5;i++){
		scanf("%f", &arr[i]);
	}
	printf("day so sau dao nguoc la:\n");
	sothuc(arr,5);	
}
float sothuc(float arr[], int size){
	int i;
	for(i=size-1;i>=0;i--){
		printf("%f\n",arr[i]);
	}	
}
