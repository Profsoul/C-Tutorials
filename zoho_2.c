#include <stdio.h>

void f (int *a,int m){
int  j= 0;
for (j=0;j<m;j++){
*(a+j) = *(a+j)-5;}}

int main(){

int a[] = { 's','v','c','e'};
int j =0 ;
f(a,4);
printf("%d",a[1]-'a');
return 0;
}
