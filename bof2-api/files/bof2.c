#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <err.h>

int main()
{
    char buf[0x20];
    printf("Entar your name:");
    read(0, buf, 256);
    printf("Hello! %s\n",buf);
    printf("Can you hack my canary?:");
    read(0, buf, 256);
    return 0;
}

void win()
{
    char key[] = {0x87,0x4a,0x5,0x4a,0x70,0x22,0x8,0x84,0x37,0x37,0x93,0xa2,0x79,0xef,0xff,0x5a,0xec,0x95,0xe6,0x6c,0x92,0x8a,0x32,0xeb,0x00};
    char cipher[] = {0xe1,0x26,0x64,0x2d,0xb,0xf,0x25,0xa9,0x1a,0x1a,0xbe,0xca,0x10,0x8b,0x9b,0x3f,0x82,0xb8,0xcb,0x41,0xbf,0xa7,0x1f,0x96,0x00};
    for(int i = 0;i < strlen(cipher);i++)printf("%c",key[i]^cipher[i]);
}

__attribute__((constructor))
void init() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    alarm(60);
}