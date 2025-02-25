#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

#define SYSLOG_OPTION       LOG_CONS
#define SYSLOG_FACILITY     LOG_USER
#define SYSLOG_PRIORITY     LOG_INFO

int main(int argc, char *argv[]) {
    printf("argc: %d, argv: %s %s\n", argc, argv[0], argv[1]);
    if (argc != 3) {
        printf("Error Syntax: ./write <writefile> <writestr>\n");
        exit(EXIT_FAILURE);
    }

    char *ident = "writer";

    openlog(ident, SYSLOG_OPTION, SYSLOG_FACILITY);

    syslog(SYSLOG_PRIORITY, "Writing %s to %s", argv[2], argv[1]);

    return EXIT_SUCCESS;
}