#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <err.h>

int main()
{
    char buf[0x20];
    printf("Enter name:");
    gets(buf);
    printf("Hello! %s\n",buf);
    return 0;
}

void win()
{
    char key[] = {0x2c,0x5b,0xfa,0x83,0xbc,0xa7,0x35,0xe0,0x2c,0x52,0x0,0x97,0x46,0x48,0xd8,0xaf,0xa3,0xbc,0x6a,0x70,0x2,0x4d,0xdb,0xee,0x8d,0x00};
    char cipher[] = {0x4a,0x37,0x9b,0xe4,0xc7,0x8a,0x18,0xcd,0x1,0x7f,0x2d,0xba,0x2e,0x21,0xbc,0xcb,0xc6,0xd2,0x47,0x5d,0x2f,0x60,0xf6,0xc3,0xf0,0x00};
    for(int i = 0;i < strlen(cipher);i++)printf("%c",key[i]^cipher[i]);
}

__attribute__((constructor))
void init() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    alarm(60);
}