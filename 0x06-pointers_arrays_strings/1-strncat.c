#include "main.h"                                             
#include <stdio.h>                                            
                                                              
/**                                                           
 * Strcat - concatenates two string using at most 
 *
 * @dest: the pointer to be appended upon    
 * @src: the source string to be appended to @dest.           
 * Return: a pointer to the destnation string @dest.          
 */                                                           
char *_strcat(char *dest, char *src, int n)                          
{                                                             
        int index = 0, dest_len = 0;                           
        while (dest[index++])                                  
                dest_len++;                                   
                                                              
        for (index = 0; src[index] && index < n; index++)                      
                dest[dest_len++] = src[index];                 
        return (dest);                                        
}    
