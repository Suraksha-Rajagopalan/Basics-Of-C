#include <stdio.h>
int main(){
int first=1,second=1;
int third=first+second;
printf("%d %d ",first,second);
for (int i=0; third<=150; i++){
    printf("%d ",third);
    first=second;
    second=third;
    third=first+second;}
return 0;
}
