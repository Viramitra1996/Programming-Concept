#include<stdio.h>

int main(int argc, char *argv[3])
{

    FILE *fs, *fd;
    if(argc!=3)
    {
        printf("Invalid command.....");
    }
    fs=fopen(argv[1],"r");
    fs=fopen(argv[2],"w");

    char ch;

    while(1)
    {
        ch=fgetc(fs);

        if(ch==EOF)
                break;
            fputc(ch,fd);
    }
    printf("1 file(s) is copied..\n");
    fclose(fs);
    fclose(fd);
return 0;
}
