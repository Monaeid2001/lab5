#include <stdio.h>
int swap(int *ptr1,int *ptr);
int main() {
int x=0,y=0;
int *ptr1=&x;
int *ptr2=&y;
printf("enter two numbers");
scanf("%d",&x);
scanf("%d",&y);
printf("the two number before swapping %d %d\n",x,y);
swap(&x,&y);
printf("the two number before swapping %d %d",x,y);
return;
}
int swap(int *ptr1,int *ptr2){
 int temp=0;
  temp = *ptr1;
 *ptr1= *ptr2;
  *ptr2= temp;

}
