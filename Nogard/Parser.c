#include "Scanner.h"
#include "Global.h"

void Parse() {
	int token = Scan();
	switch (token)
	{
		case POSITIVE:
		{
			printf("That's good to hear %s!\n", _name);
			break;
		}
		case NEGATIVE:
		{
			printf("Sorry to hear about that...\n");
			break;
		}
		default:
		{
			printf("I don't konw how to respond to that, sorry boi");
			break;
		}
	}
}