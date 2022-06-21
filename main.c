#include "parent.h"
#include "child.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	char *imie;
	pid_t pid_potomka;
    pid_t pid_potomka1;
    pid_t pid_potomka2;
    pid_t pid_potomka3;
    pid_t pid_potomka4;
    pid_potomka1 = fork();
		if (pid_potomka1 != 0){
			pid_potomka2 = fork();
			if (pid_potomka2 != 0){
				pid_potomka3 = fork();
				if (pid_potomka3 != 0){
					pid_potomka4 = fork();}}}
	pid_potomka = getpid();
	if (pid_potomka1 == 0)
	imie = "Susie";
	else if (pid_potomka2 == 0)
	imie = "John";
	else if (pid_potomka3 == 0)
	imie = "Bea";
	else if (pid_potomka4 == 0)
	imie = "Steve";
	else {sleep(1);return 0;}
	printf("PID: %d %s is ready to play!\n", pid_potomka, imie);
	//sleep(1);
	return 0;
}

