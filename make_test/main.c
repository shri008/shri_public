#include<stdio.h>
#include"header.h"
void main()
{

int a;
int b;


printf("inside main\r\nEnter ant two integer\n");
scanf("%d %d",&a,&b);

add(b,a);

sub(a,b);

mul(a,b);

div(a,b);
printf("End of prog\n");

}
