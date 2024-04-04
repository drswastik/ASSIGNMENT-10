#include<stdio.h>
union EmpDetails{
    float hwage;
    double fixedsal;
};
struct Employee{
    int Id;
    char name[20];
    union EmpDetails ed;
};
void main(){
    float hw;
    double fs;
    struct Employee e;
    printf("\n Enter Id,Name of the employee");
    scanf(" %d %s",&e.Id,e.name);
    printf("\n Enter the hourly wage of employee");
    scanf(" %f",&e.ed.hwage);
    hw=e.ed.hwage;
    printf("\n Enter Fixed salary of employee:");
    scanf(" %lf",&e.ed.fixedsal);
    fs=e.ed.fixedsal;
    printf("\n Details are: %d  %s  %f  %lf",e.Id,e.name,hw,fs);
}