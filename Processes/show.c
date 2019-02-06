#include <stdio.h>
#include "shared.h"  
int main(){
int *common;
common= (int*) getmem(328);

printf("The common value is %d.\n",*common);
return 0;
}
