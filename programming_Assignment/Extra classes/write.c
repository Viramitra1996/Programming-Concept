#include<stdio.h>
#include<string.h>
//fopen, fclose, fgets,fputc, fputs


int main()
{
	char s[50];
	FILE *fp=fopen("/home/hpcsap/Documents/CV/programming_Assignment/Extra classes/read.c","w"); //r,w,a, r+(read-write),w+(write-read), a+(append-read)
	
	while(1)
	{
	        gets(s);

	        if(strlen(s)==0)
	            break;

		    fputs(s,fp);
		    fputs("\n",fp);
	      
	}
		    fclose(fp);

		    return 0;
}
