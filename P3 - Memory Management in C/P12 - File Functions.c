/* ----------------------- File Opening Modes -------------------------
"r"  ----> only for reading (read mode)
"w"  ----> open a file for writing & clear the previous content ; if not exist then create one (write mode)
"a"  ----> append content after the existing content ; if not exist then create one (apppend mode)
"r+" ----> open file for both reading and writing (writing from start)
"w+" ----> if file exist then empty it ; if not create one
"a+" ----> read start from beginning but write only at last ; if not create one


------------------ File Functions in C ------------------
fputc ----> function to write characters to a file
    int fputc(char , fptr);
        returns the character written on success ; EOF on failure
fputs ----> use to write a null terminated string to file

fgetc ----> read character from file
    int fgetc(fptr);
        returns the read character on success ; EOF on failure
fgets ----> read a null terminated string from file

---- EOF(End of File) is constant define in stdio.h
*/

#include <stdio.h>

int main() {
    FILE *ptr = NULL;
    ptr = fopen("shelby.txt" , "r+");

    char s = fgetc(ptr);
    printf("%c\n", s);  // T
    s = fgetc(ptr);
    printf("%c\n", s); // h

    char st[2];
    fgets(st , 13 , ptr);   // 12 characters 1 is null
    printf("%s\n" , st); // omas Shelby.

    fputc('G' , ptr);   // 'G' at starting
    fputs("race" , ptr);  // "race" just after G
  
    feof(ptr);    // determine end of file is reached or not
    fclose(ptr);
  
    return 0;
}
