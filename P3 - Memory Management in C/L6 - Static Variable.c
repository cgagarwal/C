#include <stdio.h>

int b;      // global variable initizalise by 0 if not specified
int random() {
    static int a;       // a = 0 ; initilize once
    a += 1;
    a*=4;
    return a;
}

int main() {
    /*  ------------------------ Variables -------------------------------
 Local Variable ---- declare inside a block                 Global Vairable ---- declare at the top of program
                ---- not accessible outside function                        ---- accssible throughout the program

    if Local and Global Variable have same name then local take preference
    */
    
   for(int i = 0 ; i < 5; i+=1) {
       // i  is a local variabel inside these brackets
       printf("%d " , i);
   }
    
   printf("\n");

   /*   -------------- Static Variable --------------
   --- preserve their value from previous scope     --- initialize to 0 if not specified
   --- initialise by constant literal always 
   */

   //  a = 0 initialzied
   printf("%d ", random());         // 4
   // a = 4 preserved  value
    
   printf("%d ", random());     // 20
   // a = 20 preserved value
    
   printf("%d ", random());     // 84

   printf("%d ", b);  // GLOBAL
   static int b;    // b = 0
   b = random();              // 340
   printf("%d ", b);    // local precedence
   
   return 0;
}
