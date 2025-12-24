#include <stdio.h>

int main() {
    
    int a,b,c;
    
    printf("Enter The Integer Number a :");
    scanf("%d",&a);
    
    printf("Enter The Integer Number b :");
    scanf("%d",&b);
    
    printf("Enter The Integer Number c :");
    scanf("%d",&c);
    
    if(a>b && a>c)
    printf("a is largest");
    
    else if(b>a && b>c)
    printf("b is largest");
    
    else 
    printf("c is largest");
    
    return 0;
}
