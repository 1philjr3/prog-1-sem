#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


    int main()
    {
        printf("%s\n","==== Task 1 ====");
        char str1[100];
        char str2[100];
        scanf("%s %s", str1, str2);
        strcat(str1, str2);
        printf("%s\n\n", str1);
        
        
        
        printf("%s\n","==== Task 4 ====");
        if (strncmp (str1, str2,3)==0)
        puts ("The first three characters are identical\n");
     else
        puts ("The first three characters are don't identical\n");
        
        
        
        printf("%s\n","==== Task 7 ====");
           char string[100];
           printf("%s\n","Enter string");
           scanf("%s",string);
        
        //"неявное преобразование, теряет точность целого"
        //Если точнее, то это не ошибка, а предупреждение о том, что string (соответствующий типу long) приводится к типу unsigned int, который вмещает меньше значений, из-за чего могут возникать ошибки (которые на деле никогда не возникают).
        
           int size = strlen(string);
           printf("%s\n","Size of string");
           printf("%i\n\n", size);
        
        
        
        
            printf("%s\n","==== Task 8 ====");
            char c;
            scanf("%c", &c);
            char *ss = strchr(str1, c);
            printf("\nFinding the symbol in our string -> %p\n\n", ss);
        
        
            printf("%s\n","==== Task 11 ====");
            char *p;
            
            printf("First: %s\nSecond: %s\n\t", str1, str2);
            for ( p = str1; *p; ++p )
                if ( strchr(str2, *p) ) // функция strchr выполняет поиск первого вхождения символа в строку str2
                    printf("found %c\n\t", *p);
                
            return 0;
    }
