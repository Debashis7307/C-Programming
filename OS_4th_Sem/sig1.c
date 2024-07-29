#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


void sigint_handler(int sig) {
    printf("\nOkay, your Signal is received. Exiting...\n");
    exit(0);
}

int main() {
signal(SIGINT, sigint_handler);
    while (1) {
    
        printf("Program is running...\n");
        sleep(5);
    }

    return 0;
}

