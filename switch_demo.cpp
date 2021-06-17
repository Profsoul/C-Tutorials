#include <iostream>
using namespace std;

string getDays(int num){
string day;
switch(num){
case 0:
    day = "Sunday";
    break;
case 1:
    day = "Monday";
    break;
case 2:
    day = "Tuesday";
    break;
case 3:
    day = "Wednesday";
    break;
case 4:
    day = "Thrusday";
    break;
case 5:
    day = "Friday";
    break;
case 6:
    day = "Saturday";
    break;
default:
    day = "Invalid Data";

}
return day;

}

int main(){
int num;
cout << "Enter Number";
cin >> num;
cout << getDays(num)<<endl; 

return 0;}

