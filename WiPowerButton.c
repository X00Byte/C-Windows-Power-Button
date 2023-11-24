#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int ShowUsageMenu(void);
int NoArgsProvided(int MainArguments ,bool * poweroff,bool *reboot);
int main(int argc, char *argv[]) {

bool poweroff=false;
bool reboot=false;
if(argc <2){
 NoArgsProvided(argc,&poweroff ,&reboot);
}else if (argc == 2){
if(strcmp(argv[1],"poweroff") == 0){
poweroff=true;
}else if (strcmp(argv[1],"reboot") == 0){
reboot=true;
}
}
if(poweroff){
system("shutdown /s /t 0");
}else if (reboot)
system("shutdown /r");

return 0;
}
int ShowUsageMenu(void){
printf("Windows Power Button\n");
printf("Shutdown  / Reboot A windows machine WITHOUT WASTING YOUR LIFE\n");
printf("===========================\n");
printf("1 - Shutdown / Poweroff\n");
printf("2 - Reboot / Restart\n");
printf("===========================\n");
return 0;
};
int NoArgsProvided(int MainArguments,bool * poweroff,bool *reboot){
ShowUsageMenu(); 
int option=0;
scanf("%d",&option);
if(option == 1){
*poweroff=true;
printf("Poweroff :");
}else if(option == 2){
*reboot=true;
printf("Reboot");
}else
printf("\aInvalid Option :(\n");
}
