#include <stdio.h>
#include <stdlib.h>
int tinh_tong(int a, int b){
		return a+b;
}
int tinh_hieu(int a, int b){
		return a-b;
}
int tinh_tich(int a, int b){
		return a*b;
}int tinh_thuong(int a, int b){
		return a/b;
}

int main()
{
	int a,b,tong,hieu,tich,thuong;
	int lc1,lc2;
	printf("\tTinh Toan\n");
	printf("=============================\n");
	printf("1. Nhap so\n2. Tinh tong\n3. Tinh hieu\n4. Tinh tich\n5. Tinh thuong\n6. Thoat");
	printf("\n=============================\n");
	printf("Chon : ");
	scanf("%d", &lc1);
			
	switch(lc1){
		
		case 1:
			printf("Nhap a va b :\n ");
			scanf("%d%d",&a,&b);
			printf("Chon phep tinh : ");
			scanf("%d", &lc2);
			
			switch(lc2){
				
				case 2:
					tong = tinh_tong(a,b);
					printf("%d",tong);
					break;
			
				case 3:		
					hieu = tinh_hieu(a,b);
					printf("%d",hieu);
					break;
			
				case 4:		
					tich = tinh_tich(a,b);
					printf("%d",tich);
					break;
			
				case 5:		
					thuong = tinh_thuong(a,b);
					printf("%d",thuong);
					break;
		
				case 6:
					printf("Khet thuc!");
					break;
			}
		}
	}
