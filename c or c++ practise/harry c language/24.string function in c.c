// str.cat: to concatenate two strings 
// strlen() : to show length of the string
// strrev(): to show reverse of the string
// strcpy(): to copy one string into another string
//strcmp(): it is used to compare two given strings



#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Vansh ";
    char s2[] = " Joshi";
    puts(strcat(s1,s2));           // using concatenation of two strings
    printf("the string s1 is : %d \n",strlen(s1));
    printf("the string s1 is : %d \n\n",strlen(s2));

    printf("the reverse of string  s1 is : \n");
    puts(strrev(s1));
    puts(strrev(s2));

    printf("the comparison between s1, s2 is : %d\n",strcmp(s1,s2));               // strcmp checks ascii value of first 

    // exercise: concatenate two strings bys says str1 is a friend of str2

    char str1[] = "Lord krishna is a best friend of";
    char str2[] = " Arjun";
    puts(strcat(str1,str2));
    return 0;
}