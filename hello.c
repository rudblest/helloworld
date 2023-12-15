#include <stdio.h>
#include <unistd.h>

int main() {
    char harf, harf2, harf3, harf4, harf5, ah1,ah2,ah3,ah4,ah5;

    for (harf = 'a'; harf <= 'h'; harf++) {
        printf("\n%c ", harf);
        usleep(100000); // 0.10 saniye bekleme
    }
    for (harf2 = 'a'; harf2 <= 'e'; harf2++) {
        printf("\nh%c ", harf2);
        usleep(110000); // 0.11 saniye bekleme
    }
    for (harf3 = 'a'; harf3 <= 'l'; harf3++) {
        printf("\nhe%c ", harf3);
        usleep(120000); // 0.12 saniye bekleme
    }
    for (harf4 = 'a'; harf4 <= 'l'; harf4++) {
        printf("\nhel%c ", harf4);
        usleep(130000); // 0.13 saniye bekleme
    }
    for (harf5 = 'a'; harf5 <= 'o'; harf5++) {
        printf("\nhell%c ", harf5);
        usleep(140000); // 0.14 saniye bekleme
    }


    for (ah1 = 'a'; ah1 <= 'w'; ah1++) {
        printf("\nhello %c ", ah1);
        usleep(150000); // 0.15 saniye bekleme
    }
        for (ah2 = 'a'; ah2 <= 'o'; ah2++) {
        printf("\nhello w%c ", ah2);
        usleep(160000); // 0.16 saniye bekleme
    }
        for (ah3 = 'a'; ah3 <= 'r'; ah3++) {
        printf("\nhello wo%c ", ah3);
        usleep(170000); // 0.17 saniye bekleme
    }
        for (ah4 = 'a'; ah4 <= 'l'; ah4++) {
        printf("\nhello wor%c ", ah4);
        usleep(170000); // 0.18 saniye bekleme
    }
        for (ah5 = 'a'; ah5 <= 'd'; ah5++) {
        printf("\nhello worl%c ", ah5);
        usleep(190000); // 0.19 saniye bekleme
    }
    

    


    return 0;
}