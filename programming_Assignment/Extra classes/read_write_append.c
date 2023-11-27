#include<stdio.h>
//fopen, fclose, fgets,fputc, fputs


int main()
{
	char ch;
	FILE *fp;
	
	fp=fopen("/home/hpcsap/Documents/CV/programming_Assignment/Extra classes/read.c","r"); //r,w,a, r+(read-write),w+(write-read), a+(append-read)
	
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		printf("%c",ch);
		}
		return 0;
}
