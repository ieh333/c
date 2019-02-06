#include <stdio.h>
#include "shared.h"
int main(){
int *common,*c1,*c2;
common= (int*) getmem(328);
c1= (int*) getmem(428);
c2= (int*) getmem(528);
*common=0;
*c1=1;
*c2=1;
printf("The initial value is %d.\n",*common);
return 0;
}
