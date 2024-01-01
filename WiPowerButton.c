#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int Usage(void);
int main(int argc, char *argv[]) {
bool poweroff=false;
bool reboot=false;
if(argc <2){
//  NoArgsProvided(argc,&poweroff ,&reboot);
 Usage();
}else if (argc == 2){
if(strcmp(argv[1],"off") == 0){
poweroff=true;
}else if (strcmp(argv[1],"res") == 0){
reboot=true;
}
}
if(poweroff){
system("shutdown /s /t 0");
}else if (reboot)
system("shutdown /r");
return 0;
}
int Usage(void){
printf("Windows Power Button\n");
printf("Usage : ./[commpiled Programme name ] <Action>\n");
printf("Action : \n off  shutdown \n res  reboot the machine\n");
printf("===========================\n");
printf("Exemple : ./WiPowerButton off \n");
printf("===========================\n");
return 0;
};