#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;

    printf("enter a ?:");
    scanf("%d",&a);
    printf("Enter b?:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
