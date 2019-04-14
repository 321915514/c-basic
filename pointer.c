#include<stdio.h>
void temp(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main(){
int x=1,y=4;
temp(&x,&y);
printf("%d,%d",x,y);
}
