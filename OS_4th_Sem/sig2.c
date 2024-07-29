#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void sigint_handler(int sig) {
    printf("\nOkay, your Signal is received. Exiting...\n");
    exit(0);
}

int main() {
    struct sigaction sa;
    sa.sa_handler = sigint_handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    
    sigaction(SIGINT, &sa, NULL);
    while (1) {
        printf("Program is running...\n");
        sleep(5);
    }

    return 0;
}

