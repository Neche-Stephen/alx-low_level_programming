#ifndef _MAIN_H_

#define _MAIN_H_

/**

 * _memset - set memory to a character

 * @s: value and pointer

 * @b: value to replace at pointers

 * @n: n amount of times to replace

 * Return: returns a pointer to s

 */

char *_memset(char *s, char b, unsigned int n);

/**

 * _memcpy - copies value from src to dest

 * @dest: destination to copy

 * @src: source to copy from

 * @n: amount of times from 0 to copy

 * Return: return string char value

 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**

 * _strchr - locates character in string

 * @s: string to find character

 * @c: character to find

 * Return: found character

 */

char *_strchr(char *s, char c);


#endif
