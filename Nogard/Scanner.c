#include"global.h"
#include"Scanner.h"
#include<stdio.h>
#include<string.h>
#include<ctype.h>


int Scan(){
	char stream[128];
	int err = gets(stream);
	//StandardizeToken(&stream);
	if (strcmp(stream, "GOOD") == 0)
	{
		return POSITIVE;
	}
	else if (strcmp(stream, "BAD") == 0)
	{
		return NEGATIVE;
	}
	else
	{
		return OTHER;
	}

	return stream;
}

void ClearStream(char** stream) {
	char currentChar = stream;
	int index = 0;
	while (currentChar != NULL)
	{
		stream[index] = '\0';
		currentChar = stream[index + 1];
	}
}

void StandardizeToken(char** stream){
	int index = 0;
	char* currentLetter = *stream;
	while (currentLetter != NULL)
	{
		if (isalpha(stream[index]) && (stream[index] >= 'a' && stream[index] <= 'z'))
		{
			stream[index] -= 32;
		}
		index++;
		currentLetter = stream[index];
	}
	printf("Test");
}