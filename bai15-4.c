#include <stdio.h>
#include <stdlib.h>

main()
{
	register int i;
	int no, digit,sum;
	
	printf("\n The numbers whose sum of cuber of digits is equal to number itself are : \n\n");
	
	for(i=1;i<999;i++){
		sum=0;
		no=i;
		while(no){
			digit=no%10;
			no=no/10;
			sum=sum+digit*digit*digit;
		}
		if(sum==i)
			printf("%d\n",i);
	}
}
