#include <stdio.h>
char *_strcat(char *dest, char *src)
{

    //Get length of dest
    int ls1 = 0;
    while(dest[ls1] != '\0')
    {
        ls1++;
    }
    //Get lenth of src
    int ls2 = 0;
    while(src[ls2] != '\0')
    {
        ls2++;
    }
    printf("length of dest is %d\n", ls1);
    printf("length of src is %d\n", ls2);

    // char *r;
    // r = src;
    char s1[ls1];
    char s2[ls2];

    //loop through *dest
    int i = 0;
    while (dest[i] != '\0')
    {
        s1[i] = *(dest + i);
        i++;
    }

    //loop through *src
    int s = 0;
    while (dest[s] != '\0')
    {
        s2[s] = *(src + s);
        s1[i] =  *(src + s);
        i++;
        s++;
    }

    printf("s1 is %s\n", s1);
    printf("s2 is %s\n", s2);

    // char join[] = 
    return s1;
}