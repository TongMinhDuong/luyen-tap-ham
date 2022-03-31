#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	
	for(i=1;i<=10;i++)
		printf("\nSquare of %d is %d",i,squarer(i));
}
// ham squarer ding de tinh binh phuong
squarer(int x)
{
	int j;
	j=x*x;
	return(j);
}
