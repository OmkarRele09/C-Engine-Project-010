#include <stdio.h>
int main(){
int speed , seatbelt;
printf("Enter speed in kmph\n");
scanf("%d" , &speed);
printf("Enter 0 or 1 (1 for seatbelt ON and 0 for seatbelt OFF)\n");
scanf("%d", &seatbelt);
if(speed>=120){
printf("DANGER MODE");
}
else if(seatbelt==0){
printf("UNSAFE MODE");
}
else{
printf("SAFE DRIVER");
}
    return 0;
}