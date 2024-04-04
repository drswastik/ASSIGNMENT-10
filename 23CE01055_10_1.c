#include<stdio.h>
union Data{
    int i;
    float f;
    char c;
};
void main(){
    int i1;
    float f1;
    char c1;
    union Data d;
    printf("\n Enter the integer:");
    scanf(" %d",&d.i);
    i1=d.i;
    printf("\n Enter the number:");
    scanf(" %f",&d.f);
    f1=d.f;
    printf("\n Enter charecter:");
    scanf(" %c",&d.c);
    c1=d.c;
    printf("\n Details are:%d %f %c",i1,f1,c1);
}