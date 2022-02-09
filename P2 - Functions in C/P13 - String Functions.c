#include <stdio.h>
#include <string.h> // for using string function

int main() {

    char s1[] = "Hello";
    char s2[] = "Chirag";
    char s3[53];

    printf("length of s1 ---> %lu\n" , strlen(s1));
    printf("length of s2 ---> %lu\n" , strlen(s2));
    // strlen() --- length of string (unsigned long)

    strcat(s1,s2);      // s1 = s1 + s2
    // strcat() ----- concatetate the strings
    
    // strcpy() ---- copy second string in first
    strcpy(s3,s1);      //  s3 = s1

    printf("%s\n", s3);
    printf("%s\n", s1);

    
    char *str = "Thomas Shelby is a Peaky Blinder.";

    printf("%s\n", &str[5]); // s Shelby ...............
    // &str[i] ---> string from 'i'th index till NULL Character
  
    // strstr(_,_) ---> gives s1 from s2 to last ; otherwise NULL
    char *s = strstr(str , "is");
    printf("%s\n" , s); // is a peaky  blinder
    
    
    // strcmp(s1,s2) --> compare s1 and s2 lexicographically
	printf("%d\n", strcmp("Chirag", "Chirag"));   // 0 (s1 = s2)
	printf("%d\n", strcmp("Hello", "Hyy"));     // -ve (s1 < s2)
	printf("%d\n", strcmp("Okk", "Okay"));      // +ve (s1 > s2)
	// compare by ascii values, so min('a-z') > max('A-Z')
    
    return 0;
}
