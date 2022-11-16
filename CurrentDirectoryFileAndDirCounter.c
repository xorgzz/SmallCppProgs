#include <dirent.h> 
#include <stdio.h> 

int main(void) {
	DIR *pwd;
	int iter=0;
	struct dirent *direc;
	pwd = opendir(".");
	if(pwd) {
		while((direc = readdir(pwd)) != NULL) {
			iter++;
		}
		closedir(pwd);
	}
	printf("%d\n", iter);
	
	return(0);
}