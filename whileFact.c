#include <stdio.h>
int main(){
int i=1, n, prod=1;

printf("enter a number : ");
scanf("%d", &n);

while(i<=n)
{
prod=prod*i;
i++;
}

printf("factorial is %d", prod);

return 0;
}