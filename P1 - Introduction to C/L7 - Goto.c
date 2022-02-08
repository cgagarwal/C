#include <stdio.h>

int main() {
    // goto statement ---> jump staement
  
    // preferable where multiples loops breaked with one statement
    
    // executed 
    label:
        printf("we are inside label\n");
        goto end;
        
    // no use ; never executed
    goto label;
    
    end:
        printf("we are at end\n");


    for(int i = 0 ; i < 2 ; i = i+1 )
        for (int j = 0 ; j < 2 ; j = j+1)
            if (i+j == 2)
                goto last;

    last:
        printf("break all the loops at once");
  
  return 0;
}
