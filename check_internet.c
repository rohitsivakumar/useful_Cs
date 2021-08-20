
#include <stdio.h>
#include <netdb.h>


int main(int argc, char **argv)
{
	char *hostname;   
	struct hostent *hostinfo;

	if (argc > 2 || argc < 2)
	{
		printf("INVALID ARGUMENT\n");
		printf("Give argument as: ./check_internet.out \"google.com\"\n");
		
	}
	else
	{
		hostname = argv[1];
		/* hostname = "electronberry.com";*/
		hostinfo = gethostbyname (hostname);
		if (hostinfo == NULL) 
		{
			//printf("-> no connection!\n");
			printf("No Internet Connection\n");
		}
		else 
		{
			//printf("-> connection established!\n");
			printf("Internet connection is working\n");
		}

	}
	
	return 0;
}
