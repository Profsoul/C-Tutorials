#include <stdio.h>
void main(){
int c[] = {11,12,13,14,15};
int j, *q = c;
for(j=0;j<5;j++){
++q;
}
printf("%d",*c);
}
