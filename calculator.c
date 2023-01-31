#include <stdio.h>
int main()
{
    float a,b;
    char c;
    printf("enter value of c in +,-,*,/");
    scanf("%c",&c);
    printf("%c",c);
    printf("enter the values of a and b");
    scanf("%f%f",&a,&b);
    printf("%f%f",a,b);

    switch(c){
        case '+':
            printf("the sum is %f\n",a+b);
            break;
        case '-':
            printf("the difference between a and b is %f\n",a-b);
            break;
        case '*':
            printf("the product is %f\n",a*b);
            break;
        case '/':
            if(b!=0){
            printf("the division is %f\n",a/b);
            break;}
            else{
                printf("undefined\n");
                break;
            }
        default:
            printf("wrong option chosen");
            break;
    }
    return 0;

}
