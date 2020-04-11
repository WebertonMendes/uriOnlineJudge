#include <stdio.h>
int main() {
    
    int prodComp;
    double amount = 0.00;
    int codProd, qtd;
    scanf("%d", &prodComp);
    while(prodComp--)
    {
        scanf("%d %d", &codProd, &qtd);
        if(codProd==1001)
            amount += (double) qtd*1.50;
        else if(codProd==1002)
                amount += (double) qtd*2.50;
        else if(codProd==1003)
                amount += (double) qtd*3.50;
        else if(codProd==1004)
                amount += (double) qtd*4.50;
        else if(codProd==1005)
                amount += (double) qtd*5.50;
    }
    printf("%.2lf\n", amount);
    return 0;
}