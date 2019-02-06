#include <stdio.h>
#include "shared.h" 
int main(){
int *common,i,x,a,*c1,*c2,*queue;

common= (int*) getmem(328);
c1 = (int*) getmem(428);
c2 = (int*) getmem(528);
queue = (int*) getmem (628);

for(i=1;i<=100;i++){
*c2=0;
*queue=1;
while( *c1==0 && *queue==1){}
//CS
a=*common;
a=a-1;
*common=a;
//for(x=0;x<1000;x++);

*c2=1;
}
printf("Dec process ended.\n");
return 0;
}
