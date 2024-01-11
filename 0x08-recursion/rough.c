#include <stdio.h>

int len(char s[]) {
    int i = 0;
    
    while (s[i] != '\0') 
    {
	i++;
    }
    
    printf("%d\n", i);
    printf("in len %c\n", s[0]);
    return i; // You may want to return the length from the function.
}

int main() {
    char *myString = "Son";
    printf("%c\n", *myString);
    ++myString;
    len(myString);
    
    return 0;
}
