#include <stdio.h>
int main()
{
    int qty,dis;
    float rate,tot;
    dis=0;
    printf("enter the quantity and rate");
    scanf("%d%f",&qty,&rate);
    if(qty>1000)
        dis=10;

    tot=qty*rate-(qty*rate*dis)/100;
    printf("%f total expense=Rs \n",tot);
    return 0;

}
