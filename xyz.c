#include<stdio.h>


void getinput(int c,int d)
{
	int a,b;
	printf("enter 2 nos");
	scanf("%d%d",&a,&b);
         c=a;
          d=b;

}
int  add(int a,int b)
{
		int c;
        c=a+b;

	return c;

}
void output(int c)
{
    printf("c= %d",c);	
}

int main()
{
		int c,d,e;
   getinput(c,d);
   add(c,d);
  output(e);
return 0;

}
