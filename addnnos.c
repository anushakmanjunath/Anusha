
#include<stdio.h>


void getinput(int c[],int n)
{
	int i;
	printf("enter %d nos",n);
	for(i=0;i<n;i++)
	{	
		scanf("%d",&c[i]);
         }

}
int  add(int c[],int n)
{
	int i,sum;
	for(i=0;i<n;i++)
	{
		sum=c[i]+c[i+1];
	}
	return sum;

}
void output(int c)
{
	printf("sum=%d",c);
  
}

int main()
{
		int n,
    int e;
    int a[n];
   printf("Enter the value of N:");
   scanf("%d",&n);
   getinput(a[],n);
   e=add(a[],n)
   output(e);
  return 0;

}
