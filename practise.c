#include <stdio.h> 
#include <string.h> 

int strStr(char *s1 , char *s2){
    int l1 = strlen(s1) ; 
    int l2 = strlen(s2) ;
    int find = 0 ; 

    int i = 0 ; 
    int j = 0 ; 

    while(i<l1){
        int n = 0 ; 
        j = 0 ; 

        while(j<l2){
            if(s2[j]!=s1[i]){
                 if(j>0){
                    i = i-j ; 

                 }
                 n=1 ;
                  break ; 
            }

            i++ ; 
            j++ ; 
        }

        if(n==0){
            find = i - j ; 
            printf("%d" , find) ; 
            return 0 ; 
        }

        i++ ; 
    }

    return -1 ; 

}

int main()
{

    char *s1 = "mississippi" ; 
    char *s2 = "issip" ; 
    strStr(s1,s2) ;

}