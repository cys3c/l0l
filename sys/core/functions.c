/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : functions.c
*/

// Os detection and Clear Screen Functions.

#ifdef __unix__
#elif defined(_WIN32) || defined(WIN32)
#define OS_Windows
#endif

void clear(){

        #ifdef OS_Windows
            system("cls");
        #else
            system("clear");
        #endif

}

// Help Menu Function
void help(){

    printf("\nUsage Commands\n");
    printf("===============\n");
    printf("\n\t    Commands\n");
    printf("\t    --------\n");
    printf("\t    help    - Help Menu\n");
    printf("\t    os      - Command directly ur computer\n");
    printf("\t    banner  - Show Banner\n");
    printf("\t    clear   - Clean Screen\n");
    printf("\t    exit    - Close Application\n\n");
}

// Close Function
void closeApp(){
    printf("\n[*] Trying to exit..\n");
    exit(0);
}

// Ctrl + C Catch Function
void ctrlcDetect(int qwe) {
    signal(SIGINT, ctrlcDetect);
    printf("\n[*] (Ctrl + C) Detected. Trying to exit..\n");
    exit(0);
}

// String Shorter
char* shorter(char *bilik, int p){
    bilik+=p;
    return bilik;
}