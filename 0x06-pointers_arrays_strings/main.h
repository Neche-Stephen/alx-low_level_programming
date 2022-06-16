#ifndef _MAIN_H_
#define _MAIN_H_

/**

 * _strcat - concats strings

 * @dest: destination of string

 * @src: source of string to concat

 *

 * Return: returns char value

 */

char *_strcat(char *dest, char *src);


/**

 * _strncat - concat string at n times

 * @dest: destination source

 * @src: source of array

 * @n: n amount of times

 * Return: return char value

 */

char *_strncat(char *dest, char *src, int n);



/**

 * _strncpy - function to copy

 * @dest: destination to copy

 * @src: source to copy

 * @n: times to copy

 * Return: return char value

 */

char *_strncpy(char *dest, char *src, int n);


/**

 * _strcmp - compares strings

 *

 * @s1: first string

 * @s2: second string to compare

 * Return: int value

 */

int _strcmp(char *s1, char *s2);



/**

 * reverse_array - reverses an array

 * @a: array to reverse

 * @n: how many elements

 */

void reverse_array(int *a, int n);


#endif
