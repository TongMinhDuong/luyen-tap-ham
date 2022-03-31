#include <stdio.h>
 
#include <stdio.h>
 
int min(int a[], int n)
{
	int i;
    int min = a[0];
    for (i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main()
{
    int a[100];
    int i;
    printf("nhap 10 phan tu:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nMin = %d", min(a, 10));
    return 0;
}
