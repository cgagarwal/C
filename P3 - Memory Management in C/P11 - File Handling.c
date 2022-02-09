/* ------------------ Type of Files (2) --------------------
--- Stream oriented data (Text) Files     --- System oriented data (Binary) Files

--------------------- File Operations --------------------
---- Creating a new File      ---- Opening/Closing a File
---- Reading from a File      ---- Writing to a Flle

--------------------- Reading a FILE ---------------------
---- fscanf function used for reading (file version of scanf)
---- expects a file pointer addition to other arguments which scanf expects
---- in order to use this function, open file in read mode

--------------------- Writng to a FILE ---------------------
---- fprintf function used for writing (file version of printf)
---- expects a file pointer addition to other arguments which printf expects
---- in order to use this function, open file in write mode

*/

#include <stdio.h>    // fopen()/fclose() to open and close the file

int main() {

    FILE *ptr = NULL;   // declaring a FILE pointer
    
    // ptr = fopen("filelocation" , "mode")
  
    ptr = fopen("peakyblinders.txt" , "r"); // r -- read mode
  
    char info[56];
    fscanf(ptr, "%s" , info);   // read till whitespace or new line
    printf("This is %s\n" , info); // only "Tommy"
    fclose(ptr);


    ptr = fopen("peakyblinders.txt" , "w"); // w -- write mode

    char inf[56] = "Tommy Shelby played by Cillian Murphy.\n";
    fprintf(ptr, "%s", inf);
    fclose(ptr);


    ptr = fopen("peakyblinders.txt" , "a"); // a -- append mode
  
    char next[] = "Tommy Shelby is a Gangester.\n";
    fprintf(ptr, "%s" , next);
    fclose(ptr);

    // closing the file at end of program is recommended
  
    return 0;
}
