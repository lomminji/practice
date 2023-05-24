#include <stdio.h>
main(){
        int i,j;
  
        for(j=1; j<10; j++){
          for(i=1; i<=9; i++){
            printf("%d * %d = %d\n", j, i, j*i);
          }
          
        }
  
}