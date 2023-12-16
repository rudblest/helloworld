#include <stdio.h>
#include <unistd.h>

int main() {
    char ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10;

    for (ch1 = 'a'; ch1 <= 'h'; ch1++) {
        printf("\n%c ", ch1);
        usleep(100000); 
    }
    for (ch2 = 'a'; ch2 <= 'e'; ch2++) {
        printf("\nh%c ", ch2);
        usleep(110000); 
    }
    for (ch3 = 'a'; ch3 <= 'l'; ch3++) {
        printf("\nhe%c ", ch3);
        usleep(120000); 
    }
    for (ch4 = 'a'; ch4 <= 'l'; ch4++) {
        printf("\nhel%c ", ch4);
        usleep(130000); 
    }
    for (ch5 = 'a'; ch5 <= 'o'; ch5++) {
        printf("\nhell%c ", ch5);
        usleep(140000); 
    }
    
    for (ch6 = 'a'; ch6 <= 'w'; ch6++) {
        printf("\nhello %c ", ch6);
        usleep(150000); 
    }
        for (ch7 = 'a'; ch7 <= 'o'; ch7++) {
        printf("\nhello w%c ", ch7);
        usleep(160000); 
    }
        for (ch8 = 'a'; ch8 <= 'r'; ch8++) {
        printf("\nhello wo%c ", ch8);
        usleep(170000); 
    }
        for (ch9 = 'a'; ch9 <= 'l'; ch9++) {
        printf("\nhello wor%c ", ch9);
        usleep(170000); 
    }
        for (ch10 = 'a'; ch10 <= 'd'; ch10++) {
        printf("\nhello worl%c ", ch10);
        usleep(190000); 
    }
    
    return 0;
}
