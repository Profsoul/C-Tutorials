#include <stdio.h>
int main(){
int num1 = 36,num2 = 12;
int result1 =num1 ^ num2 & num1 | num2;
int result2 = num1 << 1 | num2 >>3;
printf("%d %d",result1,result2);  }
