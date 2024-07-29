#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

void alarm_handler(int sig) {
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeinfo);
    printf("Current time: %s\n", buffer);

    alarm(5);
}

int main() {
 
    signal(SIGALRM, alarm_handler);
    alarm(5);
    int count;

    while (count<51) {
        sleep(1);
        count++; 
    }

    return 0;
}


