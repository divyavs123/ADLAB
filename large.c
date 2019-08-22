#include<stdio.h>

void bubble(int arr[],int n)
{

int temp,i,j;
for(i=0;i<n;i++)
	{
	for(j=0;j<n-i-1;j++)
		{
		if(arr[j]>arr[j+1])
			{
			temp=arr[j];	
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}

		}

	}
printf("\nSORTED ARRAY:\n");
for(i=0;i<n;i++)
{
printf("\n");
printf("%d",arr[i]);
}
}

void printMax(int arr[],int n,int k)
{
int i;
printf("\nMAXIMUM ELEMETS ARE:\n");
for(i=n-1;i>=n-k;i--)
{
printf("%d",arr[i]);
printf("\n");
}
}

int main()
{
int n,k,i;
int arr[10];
printf("\nENTER THE NUMBER OF ELEMENTS TO INSERT INTO THE ARRAY:\n");
scanf("%d",&n);
printf("\nENTER THE ELEMENTS OF THE ARRAY:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nENTER THE NUMBER OF MAX ELEMENTS:\n");
scanf("%d",&k);
bubble(arr,n);
printMax(arr,n,k);

return 0;
}

output:

bmsce@bmsce-Precision-T1700:~/Desktop$ gcc large.c
bmsce@bmsce-Precision-T1700:~/Desktop$ ./a.out

ENTER THE NUMBER OF ELEMENTS TO INSERT INTO THE ARRAY:
6

ENTER THE ELEMENTS OF THE ARRAY:
33
55
77
35
66
77

ENTER THE NUMBER OF MAX ELEMENTS:
3

SORTED ARRAY:

33
35
55
66
77
77
MAXIMUM ELEMETS ARE:
77
77
66
