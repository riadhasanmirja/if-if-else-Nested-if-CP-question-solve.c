#include <stdio.h>

int main() {
    
    int Marks;
    
    printf("Enter The Number :");
    scanf("%d",&Marks);
    
    if(Marks>=80 && Marks <=100)
    printf("A+");
    
    else if(Marks>=70 && Marks <=79)
    printf("A");
    
    else if(Marks>=60 && Marks <=69)
    printf("B");
    
    else if(Marks>=50 && Marks <=59)
    printf("C");
    
    else if(Marks>=40 && Marks <=49)
    printf("D");

    else
    printf("Fail");
    
    return 0;
}
