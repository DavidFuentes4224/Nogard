#include<stdio.h>
#include"Global.h"
#include"Parser.h"

extern char _name[64] = "";

void main()
{
	char name[64];
	printf("What is your name?\n\t>");
	gets(name);
	strcpy(_name, name);
	printf("Hello, %s!\n", name);
	printf("How are you doing?\n\t>");
	Parse();
	printf("Press anykey to exit...");
	getch();
	return 0;
}