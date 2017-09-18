#include <stdio.h>
int main(void)
{
	int i, n;
	float arr[100];
	
	printf("Enter total number of elements(1 to 100):");
	scanf("%d",&n);

	for(i=1;i<=n;i++) {
		printf("%d.Enter Number ",i);
		scanf("%f",&arr[i]);
	}

	for(i=1;i<=n;i++)
		if(arr[1]<arr[i])
			arr[1]=arr[i];

	for(i=1;i<=n;i++)
		if(arr[1]>arr[i])
			arr[2]=arr[i];

	printf("Second largest element=%.2f\n", arr[2]);

	return 0;
}