#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <string.h>

int main(int argc, char** argv){
	char *hello = "hello world\n";

	fprintf(stdout, "%s!\n", hello);
	
	wconsole(hello, 11);

	
	printf("Hello wizzerld!\n");

	int fd =  open("/kernel/LICENSE", O_RDONLY);

	char foo[11];
	int err;

	do{
		err = read(fd, foo, 10);
		
		if(err > 0){
			foo[err] = '\0';
			printf(foo);
		}

	}while(err == 10);

	printf("\n");

	int wfd =  open("/out", O_WRONLY);
	
	char* moo = "The quick brown w0lfwood jumped over the lazy cl0ckw0rk.\n";
	
	write(wfd, moo, strlen(moo));

	int i;

	for(i = 0; i < argc; i++){
		printf(argv[i]);
	}

	printf("\n");

	return 0;
}
