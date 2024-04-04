#include<stdio.h>
union arrays{
    int i[100];
    float f[100];
    char c[100];
};
void main(){
    int size;
    printf("\n Enter size of arrays:");
    scanf(" %d",&size);
    union arrays arr;
    int x,in[size];
    float fl[size];
    char ch[size];
    for(x=0;x<size;x++){
        printf("\n Enter %d element of integer array:",x+1);
        scanf(" %d",&arr.i[x]);
        in[x]=arr.i[x];
        printf("\n Enter %d element of float array:",x+1);
        scanf(" %f",&arr.f[x]);
        fl[x]=arr.f[x];
        printf("\n Enter %d element of charecter array:",x+1);
        scanf(" %c",&arr.c[x]);
        ch[x]=arr.c[x];
    }
    for(x=0;x<size;x++){
        printf(" %d",in[x]);
    }
    printf("\n");
    for(x=0;x<size;x++){
        printf(" %f",fl[x]);
    }
    printf("\n");
    for(x=0;x<size;x++){
        printf(" %c",ch[x]);
    }
    
}