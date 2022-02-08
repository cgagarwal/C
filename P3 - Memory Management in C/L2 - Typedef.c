#include <stdio.h>
#include <string.h>

typedef struct CinemaMovie {
    int year;
    float imdb;
    char name[52];
}film;

int main() {
    // tyepdef used to give alternative names to datatypes

    // typedef previous_name alter_name;
    typedef unsigned long ul;
    ul x;

    struct CinemaMovie a;
    film b;

    strcpy(a.name ,"Extraction");
    a.imdb = 8.1;
    a.year = 2020;

    strcpy(b.name ,"Jai Bhim");
    b.imdb = 9.5;
    b.year = 2021;

    printf("%s released in %d hits imdb at %0.1f\n",b.name,b.year,b.imdb);
    printf("%s released in %d hits imdb at %0.1f\n",a.name,a.year,a.imdb);

  
    int* ab , bc;   // ab is pointer where bc is int
    typedef int* intptr;
    intptr p,q;     //  p and q both pointer

    return 0;
}
