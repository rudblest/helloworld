#include <stdio.h>
#include <windows.h>

void clearFirstCharacter() 
{
    
    printf("\033[1D");
  
    printf("\033[K");
}



int main() {
    char ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10;

    for (ch1 = 'a'; ch1 <= 'h'; ch1++) 
    {
        printf("%c", ch1);
        Sleep(120); 
        clearFirstCharacter();
            if (ch1 == 'h')
            {
                printf("h");
            }
    }
    
    for (ch2 = 'a'; ch2 <= 'e'; ch2++) 
    {
        printf("%c", ch2);
        Sleep(120); 
        clearFirstCharacter();
            if (ch2 == 'e')
            {
                printf("e");
            }    
    }

    for (ch5 = 'a'; ch5 <= 'l'; ch5++) 
    {
        printf("%c", ch5);
        Sleep(120); 
        clearFirstCharacter();
            if (ch5 == 'l')
            {
                printf("l");
            }    
    }

    for (ch5 = 'a'; ch5 <= 'l'; ch5++) 
    {
        printf("%c", ch5);
        Sleep(120); 
        clearFirstCharacter();
            if (ch5 == 'l')
            {
                printf("l");
            }    
    }

    for (ch5 = 'a'; ch5 <= 'o'; ch5++) 
    {
        printf("%c", ch5);
        Sleep(120); 
        clearFirstCharacter();
            if (ch5 == 'o')
            {
                printf("o");
            }    
    }
    
    printf(" ");

        for (ch6 = 'a'; ch6 <= 'w'; ch6++) 
    {
        printf("%c", ch6);
        Sleep(120); 
        clearFirstCharacter();
            if (ch6 == 'w')
            {
                printf("w");
            }    
    }

        for (ch7 = 'a'; ch7 <= 'o'; ch7++) 
    {
        printf("%c", ch7);
        Sleep(120); 
        clearFirstCharacter();
            if (ch7 == 'o')
            {
                printf("o");
            }    
    }

        for (ch8 = 'a'; ch8 <= 'r'; ch8++) 
    {
        printf("%c", ch8);
        Sleep(120); 
        clearFirstCharacter();
            if (ch8 == 'r')
            {
                printf("r");
            }    
    }    

        for (ch9 = 'a'; ch9 <= 'l'; ch9++) 
    {
        printf("%c", ch9);
        Sleep(120); 
        clearFirstCharacter();
            if (ch9 == 'l')
            {
                printf("l");
            }    
    }  

        for (ch10 = 'a'; ch10 <= 'd'; ch10++) 
    {
        printf("%c", ch10);
        Sleep(120); 
        clearFirstCharacter();
            if (ch10 == 'd')
            {
                printf("d");
            }    
    }          
    
  
    return 0;
}