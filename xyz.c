#include<stdio.h>


void getinput(int c,int d)
{
	int a,b;
	printf("enter 2 nos");
	scanf("%d%d",&a,&b);
         c=a;
          d=b;
	add(c,d);
}
int  add(int a,int b)
{
		int c=a+b;

	return c;

}
void output(int *c)
{
    printf("c= %d");	
}

int main()
{
		int c,d,e;
   getinput(c,d);
   e=add(c,d);
  output(&e);
return 0;

}
