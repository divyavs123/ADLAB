#include<stdio.h>
int main()
{
	 int i,j,temp,min,n,k,a[10];
	printf("enter the number of elemnts:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:");
		scanf("%d",&a[i]);
	}
	printf("enter the k");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("the smallest elemt is %d",a[k-1]);
}
	
	
bmsce@bmsce-Precision-T1700:~$ cd Desktop
bmsce@bmsce-Precision-T1700:~/Desktop$ gcc one.c
bmsce@bmsce-Precision-T1700:~/Desktop$ ./a.out
enter the number of elemnts:6
enter the element:7
enter the element:10
enter the element:4
enter the element:3
enter the element:20
enter the element:15
enter the k3
the smallest elemt is 7



