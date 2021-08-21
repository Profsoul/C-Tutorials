#include <stdio.h>

int Swapping(int array[],int size){
int swap_array[size];
for (int i =0;i < size-1; i+=2)
{
swap_array[i]=array[i+1];
swap_array[i+1] = array[i];

}
return swap_array;
}

int main(){
int array[] = {56,57,58,59,60};

int arr = Swapping(array,sizeof(array)/sizeof(int));
printf("%d",12);

return 0;
}
