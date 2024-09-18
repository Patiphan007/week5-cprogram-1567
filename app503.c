#include<stdio.h>
const int textrate = 7;
float itemcost, salestax, total;

int main(){
    printf("plase Enter Cost of time : ");
    scanf("%f",&itemcost);
    salestax = (itemcost * textrate)/100; //100;
    total = itemcost + salestax;
    printf("item cost is= %.2f\n", itemcost);
    printf("sales tax is= %.2f\n", salestax);
    printf(" total net is= %.2f\n", total);
    return (0);
}
