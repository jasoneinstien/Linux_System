//system command in this file
#include <unistd.h>
#include <dirent.h>

void pwd(){
	char *getcwd(char *buf, size_t size);	
	std::cout<<"Director : " << &getcwd << std::endl;
}


