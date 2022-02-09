#include <stdio.h>

int main() {
	// ASCII of a = 97
	// ASCII of A = 65
	
	printf("%d\n" , 'a');       // 97
	printf("%d\n" , 'A');       // 65
	printf("%d\n", 'Z');    // 90 (65 + 25)
	
	// Character Arithmetic is based on their respective ASCII values
	printf("%d\n" , 'a' - 'A'); // 32 (97 - 65)
	
	// ASCII value of NULL character = 0
	
	// ASCII value of 0 = 48
	printf("%d\n", '0');    // 48
	printf("%d\n", '4');    // 52 (48 + 4)
	
	// integer to character
	printf("%c\n", 65);         // A
	
	return 0;
}
