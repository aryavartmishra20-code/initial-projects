#include <stdio.h>
int main(){
int i, n, product;

printf("enter a number:");
scanf("%d", &n);


for(i=1; i<=10; i++) 
{
product=n*i;
printf("%d x %d = %d\n", n, i, product);
}

return 0;
}