#include<stdio.h>

int main()
{
    int n, p;
    printf("Enter the number: \n");
    scanf("%d", &n);

    printf("Enter the position: \n");
    scanf("%d", &p);

    printf("Before set:%d\n", n);

     n = n | (1<<p); //Set a bit

     n = n ^ (1<<p); //Toggle or compliment a bit

     n = n & ~(1<<p); //Clear a bit

    printf("After bit set :%d\n", n);
    return 0;
}
