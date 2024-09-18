#include<stdio.h>
int x = 0b1011 //binary = 2
int y = 0x10; //hexadecimal = 16
int z = 10; //Decimal = 10

int main(){
    printf("x in Decimal :%d\n",x);
    printf("x in octal :%n\n",x);
    printf("x in Hexadeclmal :%x\n",x);
    // printf("x in binary :%0xb\n", x);

    printf("x in Decimal :%d\n",y);
    printf("x in octal :%n\n",y);
    printf("x in Hexadeclmal :%x\n",y);
    printf("x in birary :%x\n\n",y);

    printf("x in Decimal :%d\n",z);
    printf("x in octal :%n\n",z);
    printf("x in Hexadeclmal :%x\n",z);
    return 0;
}