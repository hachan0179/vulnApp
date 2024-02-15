#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <err.h>

int main()
{
    printf("flag{1:W3lc0m3_t0_vu1n4pp!}");
    exit(EXIT_SUCCESS);
}


__attribute__((constructor))
void init() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    alarm(60);
}