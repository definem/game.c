#include <stdio.h>
#include <ctype.h>

int main(){

    system("clear");

    char savollar[][300] = {" 1. Islomning ustuni/farzi nechta?:\n ",
                            "2. Islomning ustuni nimalardan iborat?:\n ",
                            "3. Imon nechta farzdan iborat?:\n ",
                            "4. Imonning farzlari nimalardan iborat?:\n ",
                            "5. Tahorat nechta farzdan iborat?:\n ",
                            "6. G'usl necha farzdan iborat?:\n "};
    
    char variantlar[][300] = {"A. 7 ta", "B. 5 ta", "C. 6 ta",
                              "A. Namoz, Imon, Ro'za, Zakot, Umra\n", "B. Imon, Namoz, Ro'za, Zakot, Haj\n", "C. Imon, Ro'za, Zakot\n",
                              "A. 6 ta", "B. 7 ta", "C. 5 ta",
                              "A. Allohga va Payg'ambarlarga ishonib imon keltirish, qazoyi qadarga imon keltirish.","B. Allohga ibodat qilib, kitobiga rioya qilib yashash, farishtalarga va oxirat kuniga imon keltirish.","C. Allohga, farishtalariga, kitoblariga, payg'ambarlariga,oxirat kuniga, qazoyi qadarga va qayta tirilishga ishonish.",
                              "A. 4 ta", "B. 3 ta", "C. 6 ta",
                              "A. 6 ta", "B. 8 ta", "C. 3 ta"};

    char answers[6] = {'B', 'B', 'B', 'C', 'A', 'C'};
    char fullAnswers[][300] = {
        "B. 5 ta", "B. Imon, Namoz, Ro'za, Zakot, Haj\n", "B. 7 ta", "C. Allohga, farishtalariga, kitoblariga, payg'ambarlariga,oxirat kuniga, qazoyi qadarga va qayta tirilishga ishonish.",
        "A. 4 ta", "C. 3 ta"
    };
    
    int savollarSoni = sizeof(savollar)/sizeof(savollar[0]);

    char javob;
    int hisob;

    printf("\t40 FARZDAN SAVOLLAR O'YINI\n");

    for(int i = 0; i < savollarSoni; i++){
        printf("\n*****************************\n");
        printf("%s", savollar[i]);
        printf("\n*****************************\n");

        for(int j = (i * 3); j < (i * 3) + 3; j++){
           printf("%s\n", variantlar[j]); 
        }

        printf("Javobingiz: \n");
        scanf(" %c", &javob);
        
        javob = toupper(javob);

        if(javob == answers[i]){
            printf("\nMa Shaa Alloh, to'g'ri javob!\n");
            hisob++;
        } else {
            printf("\nAfsuski javobingiz noto'g'ri!\n");

            printf("\nTo'g'ri javob: %s\n", fullAnswers[i]);
        }
    }


    printf("*****************************\n");
    printf("\nUMUMIY NATIJA: %d/%d\n\n", hisob, savollarSoni);
    printf("Alloh ilmingizni ziyoda qilsin. :)\n\n");
    printf("*****************************\n");

    return 0;
}