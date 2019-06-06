#include<stdio.h>


void getinput(int *c,int *d)
{
	int a,b;
	printf("enter 2 nos");
	scanf("%d%d",&a,&b);
         *c=a;
          *d=b;

}
int  add(int *a,int *b)
{
		int c;
        c=(*a)+(*b);

	return c;

}
void output(int c)
{
    printf("c= %d", c);	
}

int main()
{
		int c=0,d=0,e=0;
   getinput(&c,&d);
   e=add(&c,&d);
  output(e);
return 0;

}
