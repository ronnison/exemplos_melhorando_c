#include <stdio.h>
#include <stdlib.h>
#ifdef __linux__
    #include <unistd.h>
#elif _WIN32
    #include <windows.h>
#else

#endif

void mySleep(int tempoMs){
    #ifdef __linux__
        usleep(tempoMs * 1000);
    #elif _WIN32
        Sleep(tempoMs);
    #else
    
    #endif
}

void clear_screen(){
    #ifdef __linux__
        system("clear");
    #elif _WIN32
        system("cls");
    #else
    
    #endif
}

void main(){

    int idade = 34;
    //int i = 0;

    /*system("cls");
    printf("hello world!\n");
    usleep(1000*1000);
    printf("idade: %d\n", idade);
    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("idade: %d\n", idade);
    system("ps aux");*/
    for(int i=0; i<5; i++){
        printf("o------\n");
        usleep(500*1000);
        system("clear");
        printf("-o-----\n");
        usleep(500*1000);
        system("clear");
        printf("--o----\n");
        usleep(500*1000);
        system("clear");
        printf("---o---\n");
        usleep(500*1000);
        system("clear");
        printf("----o--\n");
        usleep(500*1000);
        system("clear");
        printf("-----o-\n");
        usleep(500*1000);
        system("clear");
        printf("------o\n");
        usleep(500*1000);
        system("clear");
        
    }

}
