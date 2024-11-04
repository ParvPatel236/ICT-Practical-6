#include<stdio.h>
void fun(int*,int*);
void fun(int *x,int *y){
    *x=2,*y=3;
    printf("inside fun(called function)\n");
    printf("x = %d and y = %d\n",*x,*y);

}
void main(){
    int x,y;
    x= 7,y=5;
    fun(&x,&y);
    printf("inside main(calling function)\n");
    printf("x = %d and y = %d\n",x,y);
   
}