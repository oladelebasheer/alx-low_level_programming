#include "main.h"                                             
#include <stdio.h>                                            
                                                              
/**                                                           
 * Strcat - concatenates two string using at most 
 *
 * @dest: the pointer to be appended upon    
 * @src: the source string to be appended to @dest.           
 * Return: a pointer to the destnation string @dest.          
 */                                                           
char *_strcat(char *dest, char *src)                          
{                                                             
        int indx = 0, dest_len = 0;                           
        while (dest[indx++])                                  
                dest_len++;                                   
                                                              
        for (indx = 0; src[indx] && indx < n; indx++)                      
                dest[dest_len++] = src[indx];                 
        return (dest);                                        
}    
