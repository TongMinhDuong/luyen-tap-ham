#include <stdio.h>
#include <stdlib.h>

main()
{
	int a,b,c;
	a=b=c=0;
	
	printf("\nEnter 1st interger : ");
	scanf("%d",&a);
	printf("\n Enter 2nd interger : ");
	scanf("%d",&b);
	c=adder(a,b);
	printf("\n\n a & b in main() are : %d , %d",a,b);
	printf("\n\n c in main() is : %d ",c);
	// c gives the addition of a and b : c=b+c
}
adder(int a,int b){
	int c;
	c=a+b;
	a*=a;
	b+=5;
	printf("\n\n a & b within adder function are : %d , %d", a,b);
	printf("\n c within adder function is : %d",c);
	return(c);
}
