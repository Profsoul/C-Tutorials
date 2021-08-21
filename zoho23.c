#include <stdio.h>
int main(){
int n =23,c = 0;
while(n != 1){
if (n%3 ==1){
n =n/3;
c = n+1 + ++c;
}
else{
n =n +1;
c *= -1;
}
}
printf("%d",c);}
