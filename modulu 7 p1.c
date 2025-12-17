#include<stdio.h>
void swap(int a,int b)
{
	int temp=a;
	temp=a;
	a=b;
	b=temp;
	printf("inside slid,a=%d,b=%d\n",a,b);
}
int main(void)
{
	int x=10,y=20;
	swap(x,y);
	printf("after calling swap:x=%d,y=%d\n",x,y);
	return 0;
}
