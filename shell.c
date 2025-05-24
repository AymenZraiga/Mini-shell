#include "shell.h"


void print_banner() {
    printf(DARK_GREEN);
    printf("\n");
    printf("██     ██ ███████ ██       ██████  ██████  ███    ███     ████████  ██████      ███    ███ ██    ██     ███████ ██   ██ ███████ ██      ██      \n");
    printf("██     ██ ██      ██      ██      ██    ██ ████  ████        ██    ██    ██     ████  ████  ██  ██      ██      ██   ██ ██      ██      ██      \n");
    printf("██  █  ██ █████   ██      ██      ██    ██ ██ ████ ██        ██    ██    ██     ██ ████ ██   ████       ███████ ███████ █████   ██      ██      \n");
    printf("██ ███ ██ ██      ██      ██      ██    ██ ██  ██  ██        ██    ██    ██     ██  ██  ██    ██             ██ ██   ██ ██      ██      ██      \n");
    printf(" ███ ███  ███████ ███████  ██████  ██████  ██      ██        ██     ██████      ██      ██    ██        ███████ ██   ██ ███████ ███████ ███████ \n");
    printf("                                                                                                                                                  \n");
    printf("                                                                                                                                                  \n");
    printf("██████  ██    ██      █████  ██    ██ ███    ███ ███████ ███    ██     ███████ ██████   █████  ██  ██████   █████       ██████  ██   ██         \n");
    printf("██   ██  ██  ██      ██   ██  ██  ██  ████  ████ ██      ████   ██        ███  ██   ██ ██   ██ ██ ██       ██   ██     ██  ████ ██   ██         \n");
    printf("██████    ████       ███████   ████   ██ ████ ██ █████   ██ ██  ██       ███   ██████  ███████ ██ ██   ███ ███████     ██ ██ ██ ███████         \n");
    printf("██   ██    ██        ██   ██    ██    ██  ██  ██ ██      ██  ██ ██      ███    ██   ██ ██   ██ ██ ██    ██ ██   ██     ████  ██      ██         \n");
    printf("██████     ██        ██   ██    ██    ██      ██ ███████ ██   ████     ███████ ██   ██ ██   ██ ██  ██████  ██   ██      ██████       ██         \n");
    printf("                                                                                                                                                  \n");
    printf("                                                                                                                                                  \n");
    printf(RESET);


    printf("\n\n\n");
    printf("%*s\n", 50, "🔥 THIS IS AYMEN ZRAIGA'S MINISHELL 🔥");
    printf("%*s\n", 56, "💚 GREEN BLOOD • STRONG CODE • UNBROKEN WILL 💚👽🦅");
    printf("\n\n");
}
int main()
{
	print_banner();
	char line[MAX_CMD];
	while(1){
		char cwd[MAX_ARGS];
		if(getcwd(cwd, sizeof(cwd))==NULL){
			perror("getcwd");
			break;
		}
		printf("\033[1;32mminishell👽👽\033[0;32m%s\033[0m$ ",cwd);
		if (!fgets(line, sizeof(line),stdin)){
		    printf("\n");
		    break;
		}
		line[strcspn(line,"\n")]=0;
		if(strlen(line)==0)
		    continue;
		    
		    
		if(strcmp(line,"exit")==0)
			break;
		if(strcmp(line,"banner")==0){
			print_banner();
			continue;
		}


		char * args[MAX_ARGS];
		char * token = strtok(line," ");
		int i=0;
		while(token && i<MAX_ARGS){
		    args[i] = token;
		    i++;
		    token = strtok(NULL," ");
		}
		args[i]= NULL;

		if(strcmp(args[0],"cd") == 0){
		    if(args[1] != NULL){
		        if(chdir(args[1])==-1)
		            perror("cd");
		   continue;    
		   }
		}
		
		pid_t pid = fork();
		if(pid==0){
			execvp(args[0],args);
			perror("execvp failed");
			exit(1);
		}
	       	else
	       		wait(NULL);
	    }
	return 0;
}

